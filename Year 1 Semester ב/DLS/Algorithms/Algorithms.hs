module Algorithms
  ( Tree(..)
  )
where

import           Data.List
import           Data.Maybe

-- Graph Theory

data Graph a = Graph { vertices :: [a]
                   , edges :: [(a, a)]
                   } deriving (Show,Eq)

-- Example:
-- g = Graph {vertices=[0..4],edges=[(0,1),(0,2),(0,3),(1,4),(2,1),(3,2)]}

inEdges :: (Eq a) => Graph a -> a -> [(a, a)]
inEdges (Graph { vertices = v, edges = e }) vert =
  filter (\(x, y) -> y == vert) e

outEdges :: (Eq a) => Graph a -> a -> [(a, a)]
outEdges (Graph { vertices = v, edges = e }) vert =
  filter (\(x, y) -> x == vert) e

sinks :: (Eq a) => Graph a -> [a]
sinks (Graph { vertices = v, edges = e }) =
  let g = Graph { vertices = v, edges = e }
  in  filter ((== 0) . length . (outEdges g)) v

sources :: (Eq a) => Graph a -> [a]
sources (Graph { vertices = v, edges = e }) =
  let g = Graph { vertices = v, edges = e }
  in  filter ((== 0) . length . (inEdges g)) v

-- subgraph :: (Eq a) => Graph a -> [a] -> Graph a
-- subgraph (Graph { vertices = v, edges = e }) vs = Graph { vertices = filter (`elem` vs) v
-- , edges    = filter (\x -> not $ elem x $ inEdges g s) e

topOrd :: (Eq a) => Graph a -> [Int]
topOrd (Graph { vertices = v, edges = e }) = if length v == 1
  then [0]
  else
    let g   = Graph { vertices = v, edges = e }
        s   = (sinks g) !! 0
        tpl = splitAt (fromJust $ elemIndex s v) $ topOrd
          (Graph { vertices = filter (/= s) v
                 , edges    = filter (\x -> not $ elem x $ inEdges g s) e
                 }
          )
    in  fst tpl ++ [length v - 1] ++ snd tpl

sortFromOrd :: (Eq a) => Graph a -> a -> Int
sortFromOrd g =
  let ts = topOrd g in \x -> ts !! (fromJust $ elemIndex x $ vertices g)

topSort :: (Eq a) => Graph a -> Graph Int
topSort g =
  let conv = sortFromOrd g
  in  Graph { vertices = [0 .. (length (vertices g) - 1)]
            , edges    = map (\(x, y) -> (conv x, conv y)) $ edges g
            }

delay :: (Eq a) => Graph a -> [(a, Int)]
delay g =
  let
    conv = sortFromOrd g
    ts   = topSort g
    d =
      foldl
          (\acc j ->
            acc
              ++ [ if length (inEdges ts j) /= 0
                     then
                       1 + maximum
                         [ acc !! i | (i, k) <- edges ts, k == j, i < j ]
                     else 0
                 ]
          )
          []
        $ vertices ts
  in
    map (\x -> (x, d !! (conv x))) $ vertices g

-- Boolean Formula

data Tree a = Node a | Branch a [Tree a] deriving (Eq)

-- makeTree :: (Eq a) => Graph a -> Maybe (Tree a)
-- makeTree g
--   | ((/= 1) . length . sinks $ g)
--     || (v /= filter ((`elem` [0, 1]) . length . outEdges g) v)
--   = Nothing
--   | otherwise
--   = Just $ makeTree' g
--   where v = vertices g

-- -- g = Graph {vertices=[0..4],edges=[(1,0),(2,0),(3,1),(4,1)]}

-- makeTree' :: (Eq a) => Graph a -> Tree a
-- makeTree' (Graph { vertices = [x], edges = [] }) = Node x
-- makeTree' g =
--   let r = (sources g) !! 0 in Branch r ((map makeTree' . hangingTree g) r)

-- hangingTree :: (Eq a) => Graph a -> a -> [Graph a]
-- hangingTree g r
--   | e == [] = []
--   | otherwise = joinGraph
--     (foldl joinGraph . filter (/= []) . map (hangingTree g . fst) $ e)
--     (Graph { vertices = [r], edges = inEdges g r })
--   where e = inEdges g r

show' :: (Show a) => a -> String
show' = (filter (not . (`elem` ['\'', '\"']))) . show

-- INORDER

instance (Show a) => Show (Tree a) where
  show (Node a       ) = show' a
  show (Branch op [a]) = "(" ++ show' op ++ show' a ++ ")"
  show (Branch op [a, b]) =
    "(" ++ show' a ++ " " ++ show' op ++ " " ++ show' b ++ ")"
  show (Branch op lst) =
    "(" ++ show' op ++ " (" ++ (intercalate ", " (map show' lst)) ++ "))"

-- t = Branch "AND" [Branch "OR" [Node "X", Node "0"], Branch "~" [Node "Y"]]
