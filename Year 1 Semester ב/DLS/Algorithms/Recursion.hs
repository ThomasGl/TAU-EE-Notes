costDecoder :: Int -> Int
costDecoder 1 = 1
costDecoder n = 2 ^ n + costDecoder k + costDecoder (n - k)
  where k = n `div` 2
