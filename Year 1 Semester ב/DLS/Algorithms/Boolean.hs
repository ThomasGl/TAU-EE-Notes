import           Algorithms

-- Binary Representation

data Binary = One | Zero

instance Show Binary where
  show Zero = show 0
  show One  = show 1

bin :: Int -> Binary
bin 0 = Zero
bin _ = One

br' :: Int -> [Binary]
br' x = map bin (br_' x)
 where
  br_' 0 = [0]
  br_' 1 = [1]
  br_' x = (br_' (x `div` 2)) ++ [x `mod` 2]

br :: Int -> Int -> Maybe [Binary]
br k x | x >= 2 ^ k = Nothing
       | otherwise  = Just $ map bin (br_ k x)
 where
  br_ k x | k == 1           = [x]
          | x >= 2 ^ (k - 1) = [1] ++ (br_ (k - 1) (x - 2 ^ (k - 1)))
          | otherwise        = [0] ++ (br_ (k - 1) x)

-- get_binary :: [Char] -> [Binary]
-- get_binary [x] = x
-- get_binary arr = 2 * (get_binary (init arr)) + last arr

-- newtype BoolFn = (Binary, Binary) -> Binary

-- instance Show BoolFn where
--   show f = lines . map
--     unwords
--     ([["x", "y", "f"]] + [ [x, y, f (x, y)] | x <- [0, 1], y <- [0, 1] ])
