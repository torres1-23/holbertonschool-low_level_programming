#!/usr/bin/python3

"""This module defines a function "def island_perimeter(grid)".

Usage:
    "island_perimeter(...) is used to return the perimeter of the island
    described in grid:

grid is a list of list of integers:
    * 0 represents a water zone
    * 1 represents a land zone
    * One cell is a square with side length 1
    * Grid cells are connected horizontally/vertically (not diagonally).
    * Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water, and there is one island (or
    nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the
water around the island).
"""


def island_perimeter(grid):
    """Computes the perimeter of an island.

    Args:
        grid (list): contains the greed of an island.

    Return:
        The perimeter of the island.
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if (j >= 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
                if (i >= 0 and grid[i - 1][j] == 1):
                    perimeter -= 2
    return perimeter
