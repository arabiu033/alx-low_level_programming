#!/usr/bin/python3
""" island  perimeter """

def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    height = 0
    width = 0
    count = 0

    for j in range(len(grid[0])):
        for k in range(len(grid)):
            if grid[k][j]:
                count += 1
        if count > height:
            height = count
        count = 0;

    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                count += 1
        if count > width:
            width = count
        count = 0

    return (width + height) * 2
