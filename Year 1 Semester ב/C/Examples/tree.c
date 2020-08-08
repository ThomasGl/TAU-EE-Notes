#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum tree_pattern
{
  node_,
  neg_,
  branch_
};

typedef struct Tree
{
  int typ;
  union Trees {
    int val;
    struct Tree *neg;
    struct Branch
    {
      struct Tree *left;
      struct Tree *right;
      char op;
    } branch;
  } get;
} tree;

tree *Node(int val)
{
  tree *t = (tree *)malloc(sizeof(tree));
  if (t != NULL)
  {
    t->typ = node_;
    t->get.val = val;
    return t;
  }
  printf("\nNULL");
  return NULL;
}

tree *Not(tree *neg)
{
  tree *t = (tree *)malloc(sizeof(tree));
  if (t != NULL && neg != NULL)
  {
    t->typ = neg_;
    t->get.neg = neg;
    return t;
  }
  printf("\nNULL");
  return NULL;
}

tree *Branch(char op, tree *left, tree *right)
{
  tree *t = (tree *)malloc(sizeof(tree));
  if (t != NULL && left != NULL && right != NULL)
  {
    t->typ = branch_;
    t->get.branch.op = op;
    t->get.branch.left = left;
    t->get.branch.right = right;
    return t;
  }
  printf("\nNULL");
  return NULL;
}

/*
dm :: Tree -> Tree
dm (Node x             ) = Not (Node x)
dm (Not  (Node x)      ) = Node x
dm (Not  a             ) = Not (dm a)
dm (Branch "AND" (a, b)) = Branch "OR" (dm a, dm b)
dm (Branch "OR"  (a, b)) = Branch "AND" (dm a, dm b)
*/
tree *dm(tree *t)
{
  switch (t->typ)
  {
  case node_:
    return Not(Node(t->get.val));
  case neg_:
    if (t->get.neg->typ == node_)
      return Node(t->get.neg->get.val);
    else
      return Not(dm(t->get.neg));
  case branch_:
    if (t->get.branch.op == '&')
      return Branch('|', dm(t->get.branch.left), dm(t->get.branch.right));
    else if (t->get.branch.op == '|')
      return Branch('&', dm(t->get.branch.left), dm(t->get.branch.right));

  default:
    return NULL;
  }
}

/*
nnf :: Tree -> Tree
nnf (Node x          ) = Node x
nnf (Not  (Node x)   ) = Not (Node x)
nnf (Not  a          ) = dm (nnf a)
nnf (Branch fn (a, b)) = Branch fn (nnf a, nnf b)
*/
tree *nnf(tree *t)
{
  switch (t->typ)
  {
  case node_:
    return t;
  case neg_:
    if (t->get.neg->typ == node_)
      return t;
    else
      return dm(nnf(t->get.neg));
  case branch_:
    return Branch(t->get.branch.op, nnf(t->get.branch.left), nnf(t->get.branch.right));

  default:
    return NULL;
  }
}

/*
instance Show Tree where
  show (Node a          ) = "X" ++ show a
  show (Not  a          ) = "~" ++ show a
  show (Branch fn (a, b)) = "(" ++ show a ++ " " ++ fn ++ " " ++ show b ++ ")"
*/
void inorder(tree *t)
{
  if (t != NULL)
  {
    switch (t->typ)
    {
    case node_:
      printf("X%d", t->get.val);
      break;
    case neg_:
      printf("~");
      inorder(t->get.neg);
      break;
    case branch_:
      printf("(");
      inorder(t->get.branch.left);
      printf(" %c ", t->get.branch.op);
      inorder(t->get.branch.right);
      printf(")");
      break;

    default:
      break;
    }
  }
  return;
}

int main(int argc, char const *argv[])
{
  // t = Branch '&' (Branch '|' (Node 1, Not (Branch '&' (Node 2, Not (Node 1)))), Not (Node 2))
  // tree *t = Branch('&', Branch('|', Node(1), Not(Branch('&', Node(2), Not(Node(1))))), Not(Node(2)));
  tree *t = Branch('|', Node(1), Not(Branch('&', Node(2), Not(Node(1)))));
  printf("*t=");
  inorder(t);
  printf("\n");
  tree *dmt = dm(t);
  printf("*dmt=");
  inorder(dmt);
  printf("\n");
  tree *nnft = nnf(t);
  printf("*nnft=");
  inorder(nnft);
  return 0;
}
