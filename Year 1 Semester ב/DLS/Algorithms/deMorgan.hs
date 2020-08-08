
newtype Binary = Binary { bin :: Bool }

getBin :: Bool -> Binary
getBin b = Binary { bin = b }

instance Show Binary where
  show (Binary { bin = True } ) = show 1
  show (Binary { bin = False }) = show 0

data Tree = Node Int | Not Tree | Branch String (Tree, Tree) deriving (Eq)

-- INORDER

instance Show Tree where
  show (Node a          ) = "X" ++ show a
  show (Not  a          ) = "~" ++ show a
  show (Branch fn (a, b)) = "(" ++ show a ++ " " ++ fn ++ " " ++ show b ++ ")"

-- EVAL

boolfn :: String -> (Binary, Binary) -> Binary
boolfn "AND" (a, b) = getBin (bin a && bin b)
boolfn "OR"  (a, b) = getBin (bin a || bin b)

eval :: Tree -> [Binary] -> Binary
eval (Node x          ) v = v !! (x - 1)
eval (Not  a          ) v = (getBin . not . bin) $ eval a v
eval (Branch fn (a, b)) v = boolfn fn (eval a v, eval b v)

-- deMorgan Dual

dm :: Tree -> Tree
dm (Node x             ) = Not (Node x)
dm (Not  (Node x)      ) = Node x
dm (Not  a             ) = Not (dm a)
dm (Branch "AND" (a, b)) = Branch "OR" (dm a, dm b)
dm (Branch "OR"  (a, b)) = Branch "AND" (dm a, dm b)

nnf :: Tree -> Tree
nnf (Node x          ) = Node x
nnf (Not  (Node x)   ) = Not (Node x)
nnf (Not  a          ) = dm (nnf a)
nnf (Branch fn (a, b)) = Branch fn (nnf a, nnf b)

-- t = Branch "AND" (Branch "OR" (Node 1, Not (Branch "AND" (Node 2, Not (Node 1)))), Not (Node 2))

-- substitution

sub :: Tree -> [Tree] -> Tree
sub (Node x          ) t = t !! (x - 1)
sub (Not  a          ) t = Not (sub a t)
sub (Branch fn (a, b)) t = Branch fn (sub a t, sub b t)
