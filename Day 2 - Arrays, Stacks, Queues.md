# Arrays, Stacks, Queues

Created: August 19, 2023 10:01 AM
Day: 2
Author: Manny - @ptr_err

[Link for Implementation](https://github.com/manmeetsingh7781/100DaysOfCode/tree/main/Day%202/Day%202%20-%20Code)

## Arrays

An array is a collection of elements of the same data type. It is a linear data structure where the elements are stored in contiguous memory locations. Arrays can be accessed using an index, which starts at 0 for the first element. Arrays are used for storing and accessing a large number of values efficiently.

## Dynamic Arrays

Dynamic arrays are similar to Arrays, besides the size of it. In other words, these are resizable arrays. In these arrays size of it expands automatically by 1.5x or 2x factor when it is about to reach its capacity, changing the size of the array takes about O(N) run time and O(N + K) space where K is a new size and then we copy the elements from the old array to the new array. 

![Arrays](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%202/Day%202%20-%20Images/arrays.png)

## Stacks

A stack is a linear data structure where elements are added and removed from only one end, called the top. It follows the Last In First Out (LIFO) principle, where the last element added to the stack is the first one to be removed. The operations performed on a stack are push (add an element to the top) and pop (remove the top element). Stacks uses Arrays or LinkedList for implementation.

## Queues

A queue is a linear data structure where elements are added at one end, called the rear, and removed from the other end, called the front. It follows the First In First Out (FIFO) principle, where the first element added to the queue is the first one to be removed. The operations performed on a queue are enqueue (add an element to the rear) and dequeue (remove the element from the front). Queue uses Arrays or LinkedList for implementation.

![Stacks and Queues](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%202/Day%202%20-%20Images/stacks_queues.png)

Arrays, stacks, and queues are fundamental data structures used in computer science and programming. They are used in a wide range of applications, including algorithms, data analysis, and software development.

Although these three data structures are linear, their time complexity varies depending on the operation we are using. Below is the table of each of them performing in the Worst Case (Big O).

| Operation | Arrays | Stacks | Queues |
| --- | --- | --- | --- |
| Insert | O(N) | O(1) | O(1) |
| Remove | O(N) | O(1) | O(1)  |
| Get | O(1) | O(N) | O(N) |
| Search | O(N) | O(N) | O(N) |

