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
