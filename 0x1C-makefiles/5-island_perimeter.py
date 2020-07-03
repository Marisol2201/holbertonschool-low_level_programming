#!/usr/bin/python3
"""module for function def island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    count = 0
    for iter, row in enumerate(grid):
        for i, num in enumerate(row):
            if num == 1:
                if grid[iter][i - 1] == 0:
                    count += 1
                if grid[iter][i + 1] == 0:
                    count += 1
                if grid[iter - 1][i] == 0:
                    count += 1
                if grid[iter + 1][i] == 0:
                    count += 1
    return count
