#!/usr/bin/python3
"""
Defines an island perimeter measuring function.
"""


def island_perimeter(grid):
    """Return the perimeter of an island.
    The grid represents water 0 and land 1.
    Returns the perimeter of the island."""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for p in range (height):
        for q in range(width):
            if grid[p][q] == 1:
                size += 1
                if (q > 0 and grid[p][q-1] == 1):
                    edges += 1
                if (p > 0 and grid[p - 1][q] == 1):
                    edges += 1
    return (size * 4 - edges * 2)
