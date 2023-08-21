# Linked Lists

Created: August 20, 2023 12:36 PM
Day: 3
Materials: https://www.javatpoint.com/singly-linked-list
Author: Manny - @Manmeet Singh

[Code Link](https://github.com/manmeetsingh7781/100DaysOfCode/tree/main/Day%203/Code)
# What is Linked List

A linked list is a fundamental data structure in computer science that is used to organize and store a collection of elements, often referred to as nodes. 

Unlike arrays, linked lists do not require contiguous memory allocation. Instead, they consist of nodes, each containing a value and a reference or pointer to the next node in the sequence. This property allows linked lists to dynamically grow and shrink in size during runtime.

The basic components of a linked list include a **Node.** Each node contains two main parts:

- **Data/Value:** The actual information or data that the node holds.
- **Next Pointer/Reference:** A reference to the next node in the sequence. For the last node in the list, this pointer typically points to null, indicating the end of the list.
- **Chaining** of one node to another node is done by assigning the **Next** **Pointer/Reference** to the next node as we are chaining the list.
- **Head** node points to the front/beginning of the Linked List.

![Node](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%203/Day%203%20-%20Images/node.png)

### There are several types of linked lists, including:

**Singly Linked List:** Each node points to the next node in the sequence, forming a unidirectional chain.

![Singly](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%203/Day%203%20-%20Images/single.png)

**Doubly Linked List:** Each node contains pointers to both the next and the previous nodes, allowing for bidirectional traversal.

![Doubly](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%203/Day%203%20-%20Images/double.png)

**Circular Linked List:** Similar to a singly or doubly linked list, but the last node's pointer points back to the first node, creating a circular structure.

![Circular](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%203/Day%203%20-%20Images/circular.png)

### Advantages and Use Cases

1. **Dynamic Size:** Linked lists can grow or shrink in size without requiring pre-allocation of memory. This makes them suitable for scenarios where the size of the data collection is unknown or frequently changes.
2. **Insertions and Deletions:** Insertions and deletions can be more efficient in linked lists compared to arrays, especially in cases where elements need to be inserted or removed from the middle of the list.
3. **Memory Efficiency:** Linked lists can be more memory-efficient than arrays in situations where memory fragmentation or wasted space due to resizing is a concern.

### Drawbacks

1. **Traversal:** Traversing a linked list can be slower than accessing elements in an array, as each node must be followed sequentially.
2. **Memory Overhead:** Linked lists require extra memory to store the pointers or references in addition to the actual data.
3. **Random Access:** Unlike arrays, linked lists do not support constant-time random access to elements. Accessing an element at a specific index requires traversing the list from the beginning or end.

Linked lists are often used as building blocks for more complex data structures, such as stacks, queues, and hash tables. They also serve as a fundamental concept in understanding algorithms and data structure design. Implementing and manipulating linked lists involves managing the pointers correctly to ensure proper connections between nodes and performing various operations like insertion, deletion, and traversal.

In summary, linked lists are versatile data structures that provide dynamic memory allocation, efficient insertions, and deletions, and serve as a foundation for more advanced data structures. Understanding their characteristics and operations is essential for any programmer or computer scientist working with data structures and algorithms. 
