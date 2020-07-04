#!/usr/bin/python3
"""module for function def island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    count = 0
    # length = len(grid)
    # length2 = len(grid[0])
    # print(length, length2)

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    count += 1  # up
                if grid[i + 1][j] == 0:
                    count += 1  # down
                if grid[i][j - 1] == 0:
                    count += 1  # left
                if grid[i][j + 1] == 0:
                    count += 1  # right
    return (count)
