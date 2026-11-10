main = do
    input <- readLn :: IO Int
    let arr = zip [1..input] [1..input]

    let removeEven xs = zip [1..] [x | (i, x) <- xs, i `mod` 2 == 1]
    let removeOdd xs = zip [1..] [x | (i, x) <- xs, i `mod` 2 == 0]
    let removeThird xs = zip [1..] [x | (i, x) <- xs, i `mod` 3 /= 0]

    let findLast xs n
         | length(xs) == 1 = [x | (i, x) <- xs]
         | n == 0 = findLast (removeEven xs) 1
         | n == 1 = findLast (removeOdd xs) 2
         | n == 2 = findLast (removeThird xs) 0

    let filteredarr = findLast arr 0
    putStrLn $ (show (head filteredarr))
