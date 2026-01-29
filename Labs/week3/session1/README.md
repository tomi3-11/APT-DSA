No worries — since canvasisn’t available on your side right now, I’ll give you **copy-paste ready content** exactly how you asked.
You can paste this straight into a `README.md` file and it’ll work perfectly for revision 👍

---

# 📘 Scores Class – Simple Documentation

## What this code is about (big picture)

This C++ program teaches **basic array operations** using a class.
# DSA, Tuesday 27/jan/2026

## Major Concepts Explained (Very Simple)

### 1. Class

A **class** is like a box that holds:

* data (variables)
* actions (functions)

Here, the class is called `scores`.

---

### 2. Array

An **array** stores multiple values of the same type.

```cpp
int c1[5];
```

This means:

* `c1` can store **5 integers**
* Index starts from `0` to `4`

---

### 3. Unordered Insertion

Values are placed directly into the array.
No sorting. No logic. Just assignment.

---

### 4. Ordered Insertion

Values are placed in the correct position so the array stays **sorted**.

---

### 5. Linear Search

Checks each element **one by one** until:

* value is found, or
* array ends

---

### 6. Deletion

When a value is found:

* all elements after it are shifted left
* this overwrites the deleted value

---

## Fully Commented Code 

```cpp
#include <iostream>            // Allows input and output (cin, cout)

using namespace std;           // Lets us write cout instead of std::cout

class scores {                 // Create a class named scores
    private:                   // Private means only the class can use this
        int c1[5];              // Array that holds 5 integer scores

    public:                    // Public means main() can use these functions

        void unorderedinsert() {
            c1[0] = 34;         // Put 34 in first position
            c1[1] = 54;         // Put 54 in second position
            c1[2] = 56;         // Put 56 in third position
            c1[3] = 78;         // Put 78 in fourth position
            c1[4] = 90;         // Put 90 in fifth position
        }

        void orderedinsert() {
            int y;              // Variable to store user input

            for (int i = 0; i < 5; i++) {     // Loop 5 times
                cout << "Enter a score: " << endl;
                cin >> y;                     // Read a number from user

                int j;

                for (j = 0; j < 5; j++) {     // Find correct position
                    if (c1[j] > y) {          // If current value is bigger
                        break;                // Stop here
                    }
                }

                for (int k = 5; k > j; k--) { // Shift elements to the right
                    c1[k] = c1[k - 1];        // Move value one step right
                }

                c1[j] = y;                    // Insert number at correct spot
            }
        }

        void display() {
            cout << "These are the numbers: " << endl;

            for (int i = 0; i < 5; i++) {     // Loop through array
                cout << c1[i] << endl;        // Print each number
            }
        }

        int linearsearch() {
            cout << "Enter the score to search for: " << endl;

            int key;                          // Value to search
            cin >> key;                       // Read input

            for (int i = 0; i < 5; i++) {     // Check every element
                if (c1[i] == key) {           // If value matches
                    cout << "Found" << endl;
                    return 0;                 // Stop searching
                }
            }

            cout << "Not found" << endl;      // Value not in array
            return 0;
        }

        int mydelete() {
            cout << "Enter the score to delete: " << endl;

            int key;                          // Value to delete
            cin >> key;

            for (int i = 0; i < 5; i++) {     // Search for value
                if (c1[i] == key) {           // If found
                    cout << "Found" << endl;

                    for (int j = i; j < 5; j++) {
                        c1[j] = c1[j + 1];    // Shift elements left
                    }

                    return 0;                 // Stop after deleting
                }
            }

            cout << "Not found" << endl;      // Value not found
            return 0;
        }
};

int main() {
    scores s;                 // Create object of class scores

    s.unorderedinsert();      // Insert predefined values
    s.display();              // Show array

    s.linearsearch();         // Search for a value
    s.mydelete();             // Delete a value
    s.display();              // Show array again

    return 0;                 // End program
}
```

---
Documented by: [Tom](https://github.com/tomi3-11)
