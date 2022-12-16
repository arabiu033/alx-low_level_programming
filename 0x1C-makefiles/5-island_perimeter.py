#!/usr/bin/python3
""" island  perimeter """


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    count = []

    for j in range(len(grid[0])):
        for k in range(len(grid)):
            if grid[k][j]:
                if k not in count:
                    count.append(k)

    height = len(count)
    count = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if j not in count:
                    count.append(j)

    width = len(count)
    return (width + height) * 2
