# Sudoku-Solver

Sudoku solver is a program in which user inputs unsolved sudoku puzzle and our algorithm helps in finding the possible solution. Every sudoku solver has to check validity of a number in a blank cell numerous times. The process involves checking if a certain number is present in a row or column or a 3x3 sub grid. So this means we have to make 243 checks in each cell which is a very time consuming task. So we need to use an optimized approach which can solve the puzzle in less time. One algorithm is by using recursion and backtracking approach.
This algorithm will be discussed but before that let us look at the rules if the puzzle.

RULES
1) Classic sudoku game involves a grid of 81 blocks.
2) Grid is divided into 9 blocks each containing 9 cells.
3) Each of the nine blocks has to contain all the numbers 1-9 within its squares.
4) Each number can only appear once in row, column or in a grid.
5) The difficulty lies in that each vertical nine square column, or horizontal nine- square line across, within the larger square must also contain the numbers 1-9 without repetition or omission.
6) Every puzzle has just one possible solution.

STRATEGY TO APPROACH THE GAME
The most basic strategy to solve a Sudoku puzzle is to first write down, in each empty cell, all possible entries that will not contradict the One Rule with respect to the given cells. If a cell ends up having only one possible entry, it is a "forced" entry that you should fill in.
Another way to proceed is to pick a number and a row, column, or block. Note all the cells in the row, column, or block in which the number can be placed without violating the One Rule.
If the digit can only be placed in one cell in the neighborhood, you should fill that cell in. Once you've done this, the chosen number can be eliminated from being a possibility for any other cell in the neighbourhood.

BACKTRACKING METHOD
In backtracking algorithm, it assumes the first valid value to be true. It assigns a tag and solve the rest of puzzle logically. If it cannot solve the puzzle this means that our initial assumption was wrong. All the tags are then reset and next valid value for previous cell is used. If that also fails we go on back one more step and this process continues until we find correct solution for the puzzle.
The advantage here is again the tags. We are only checking 3 values in backtracking instead of 27 for each cell. This makes slight improvement in the code. The backtrack goes advancing column by column and then the next row. If it finally reaches the last row and column (final cell) and finds a valid value that means the puzzle is solved. If there is no valid value a the last position then the algorithm again backtracks.

STEP BY STEP ALGORITHM
1) Reset all tags.
2) Read the puzzle.
3) Start loop.
4) We will check for unallocated space. If there are no unallocated blocks then we will return true.
5) Else we will fill unallocated cell with numbers between 1-9 so that there are no conflicts between row, column and 3x3 sub matrix.
6) Now, we will try to fill next unallocated space trying to satisfy all conditions and if that happens then we will return true.
7) Else we will comeback and change the digit that we used to fill the cell. If no digit fulfils the situation then we will return false that means there is no possible solution for given sudoku problem.
