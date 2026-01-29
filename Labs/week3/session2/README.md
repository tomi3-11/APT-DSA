# Thursday Class

# Binary Search
Binary   search is applied to records that are only arranged (Sorted)

### Steps

example: 
```python

[11, 22, 33, 44, 55, 66, 77, 88, 99]

# Target 
88
```

1. Split the array into 2 and identify the mid-point

```c
11, 22, 33, 44,    | 55 |   66, 77, 88, 99
```
Ask: Is the mid-point what am looking for, if yes return; else

Ask: Ask is the target if on the right or left <br>
ans: Right

```c
66, 77       88, 99
```


Continue till u find the target.

## Algorithm Analyses

#### Big O Notation
`O` stands for "Order of approximation"

##### Time Complexity

```c
[11, 22, 33, 44, 55, 66, 77, 88, 99]
```

- Unordered insert O(1)
- Ordered insert O(n)

### Terms
- Best Case O(1)
- Worse Case O(N)
- Average O(N) `approximately` (When not specified)

Linear Search O(N) <br>
display O(N) <br>
delete O(N) <br>


Binary Search O(LogN)

size 10 - 4
size 100 - 7


Algorithms with no (N)  inside will be faster and more efficient than those with (N)

Documented by: [Tom](https://github.com/tomi3-11)
