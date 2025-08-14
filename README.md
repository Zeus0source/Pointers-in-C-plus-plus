# Aim: To study and implement C++ Pointer basics
# Software Required:
Visual Studio
# Theory:

A pointer is a special variable that holds the memory address of another variable, rather than storing a direct value itself. Pointers allow programs to access and manipulate data in memory efficiently, making them a key feature for system-level programming and dynamic memory management. When we access a pointer directly, we get the address it holds not the actual data stored at that location.

<img width="900" height="450" alt="Screenshot 2025-08-14 144848" src="https://github.com/user-attachments/assets/4a6f203a-8d58-4acf-97b3-30aa741d3520" />

Assign Address:

The addressof operator (&) determines the address of any variable in C++. This address can be assigned to the pointer variable to initialize it.

Dereferencing:

The process of accessing the value present at the memory address pointed by the pointer is called dereferencing. The (*) Symbol is used for Dereferencing.

<ins>Uses of Pointers</ins>:

Pointers are a useful concept in C++ that allow direct access to memory addresses, providing greater control over memory and data manipulation. Below are some primary uses of pointers in C++:

+ Dynamic Memory Allocation: Pointers allow memory to be allocated dynamically at runtime using operators like new and delete. This enables the creation of objects or arrays whose sizes are determined during execution.

+ Implementing Data Structures: Pointers are used to implementing complex data structures such as linked lists, trees, and graphs, where elements are dynamically allocated and linked together.

+ Pass Arguments by Pointer: Pass the argument with their address and make changes in their value using pointer. So that the values get changed into the original argument.


# Implementation:
Pointers in C++ were implemented using the following codes,
+ Increment of pointers
+ Addition or Subtraction of Pointers
+ Reversing an Array using a Pointer
+ Printing a String using Pointer

# Algorithms:
Reverse an Array Using Pointers

1. Start
2. Declare an integer array `arr[5]`.
3. Display "Enter the Elements of the array:".
4. For `i` from `0` to `4`:

   * Read `arr[i]`.
5. Display "The Array is:" followed by each element of `arr` in order.
6. Declare a pointer array `arr1[5]`.
7. Set `arr1[5] = &arr[5]` (pointer to the element after the last array element).
8. Display "The reversed array is:".
9. For `i` from `0` to `4`:
 Display `(arr1[5] - i - 1)` (access elements in reverse order).
10. End

Demonstrating Pointer Arithmetic with Different Data Types

1. Start
2. Declare an integer variable `x = 234`.
3. Declare an integer pointer `x1` and store the address of `x` in `x1`.
4. Display "Integer Address Before increment:"* followed by `x1`.
5. Increment `x1` by 1 and display *"Integer Address After increment:" followed by `x1`.
6. Declare a float variable `y = 3.2`.
7. Declare a float pointer `y1` and store the address of `y` in `y1`.
8. Display "Float Address Before increment:" followed by `y1`.
9. Increment `y1` by 1 and display "Float Address After increment:"* followed by `y1`.
10. Declare a double variable `z = 1233456`.
11. Declare a double pointer `z1` and store the address of `z` in `z1`.
12. Display "Double Address Before increment:" followed by `z1`.
13. Increment `z1` by 1 and display "Double Address After increment:" followed by `z1`.
14. Declare a boolean variable `t = true`.
15. Declare a boolean pointer `t1` and store the address of `t` in `t1`.
16. Display "Boolean Address Before increment:"* followed by `t1`.
17. Increment `t1` by 1 and display "Boolean Address After increment:" followed by `t1`.
18. End

# Conlusion:
The concept of pointers was discussed along with its implementaion using several codes in C++.
