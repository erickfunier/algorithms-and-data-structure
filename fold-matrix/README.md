# Sample Algorithm: Fold Matrix

Sample program to read a N x N matrix, considering N is pair, and print the folded matrix after two folds.
Example:
| 4  1  8  1 | --> | 5  9  | --> | 9  20 |
| 5  2  4  6 |     | 11 6  |     | 30 19 |
| 10 7  6  9 |     | 19 13 |
| 2  8  3  2 |     | 4  11 |

The repository contain a linux compiled version.

If you want to insert this matrix:
	| 4  1  8  1 |
	| 5  2  4  6 |
	| 10 7  6  9 |
	| 2  8  3  2 |

Input:

 ``` 
 4
 4 1 8 1 5 2 4 6 10 7 6 9 2 8 3 2
 ```

Output:

 ```
 4 1 8 1
 5 2 4 6
 10 7 6 9
 2 8 3 2

 5 9
 11 6
 19 13
 4 11

 9 20
 30 19
 ```
