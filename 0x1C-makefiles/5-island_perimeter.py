#!/usr/bin/python3
""" Island perimeterer """


def island_perimeter(grid):
    """  returns the perimeter of the island described in grid """
    count = 0
    mg = len(grid) > 100 if len(grid) == 100 else len(grid)
    for r in range(mg):
        mr = len(grid[r]) > 100 \
                if len(grid[r]) == 100 else len(grid[r])
        for col in range(mr):
            if grid[r][col] == 1:
                top = grid[r - 1][col] if r - 1 != -1 else 0
                bot = grid[r + 1][col] if r + 1 != mg else 0
                left = grid[r][col - 1] if col - 1 != -1 else 0
                right = grid[r][col + 1] if col + 1 != mr else 0
                if top == 0:
                    count += 1
                if bot == 0:
                    count += 1
                if left == 0:
                    count += 1
                if right == 0:
                    count += 1
    return count
