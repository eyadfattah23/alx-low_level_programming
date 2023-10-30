#!/usr/bin/python3
'''Define a function
that returns the perimeter of the island described in grid'''


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid

    Args:
        grid (list of list of integers): 
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100


    Returns:
        integer: perimeter of the islands described in grid
    """
    per = 0
    for row_index in range(len(grid)):
        for zone_index in range(len(grid[row_index])):
            zone_per = 0
            if grid[row_index][zone_index] == 1:
                zone_per = 4
                if (row_index + 1) < len(grid) and grid[row_index + 1][zone_index] == 1:
                    zone_per -= 1
                if (row_index - 1) >= 0 and grid[row_index - 1][zone_index] == 1:
                    zone_per -= 1
                if (zone_index + 1) < len(grid[row_index]) and grid[row_index][zone_index + 1] == 1:
                    zone_per -= 1
                if (zone_index - 1) >= 0 and grid[row_index][zone_index - 1] == 1:
                    zone_per -= 1
            per += zone_per
    return per
