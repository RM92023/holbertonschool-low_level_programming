# C - Search Algorithms

## Header File

* [search_algos.h](./search_algos.h): Header file containing definitions and
prototypes for all types and functions written for the project.

## Function Prototypes

| File                    | Prototype                                                       |
| ----------------------- | --------------------------------------------------------------- |
| `0-linear.c`            | `int linear_search(int *array, size_t size, int value);`        |
| `1-binary.c`            | `int binary_search(int *array, size_t size, int value);`        |     |

## Tasks :page_with_curl:

* **0. Linear search**
  * [0-linear.c](./0-linear.c): C function that searches for a value in an array
  of integers using linear search.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **1. Binary search**
  * [1-binary.c](./1-binary.c): C function that searches for a value in a sorted
  array of integers using binary search.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.


### **Authors**
--- 

![GitHub Contributors Image](https://contrib.rocks/image?repo=RM92023/holbertonschool-low_level_programming)
Robinson Muñetón Jaramillo - <a href="https://github.com/RM92023" target="_blank"> @RM92023</a> ![Your Repository's Stats](https://github-readme-stats.vercel.app/api?username=RM92023&show_icons=true)
