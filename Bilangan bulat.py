mat1 = [
    [5, 0],
    [2, 6],
]


mat2 = [
    [1, 0],
    [4, 2],
]


for x in range(0, len(mat1)):
    for y in range(0, len(mat1[0])):
        print (mat1[x][y] - mat2[x][y], end=' '),
    print