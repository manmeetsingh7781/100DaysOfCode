# Binary Trees

Created: August 21, 2023 5:07 PM
Day: 4
Author: Manny - @Manmeet Singh

[Code Link](https://github.com/manmeetsingh7781/100DaysOfCode/tree/main/Day%20-%204/Code)
# Binary Trees

A binary tree is a fundamental data structure in computer science that organizes and stores data in a hierarchical manner. It consists of nodes, where each node can have at most two children, often referred to as the "left" child and the "right" child. The topmost node of a binary tree is called the "root."

## Usage

Binary trees are widely used for various applications due to their versatility and efficiency. They can be found in file systems, data storage, search algorithms, and more. Binary trees offer an elegant way to represent hierarchical relationships and solve various computational problems efficiently.

Here are some important terms and concepts related to binary trees:

1. **Node**: A fundamental unit of a binary tree that stores data and has references to its left and right children (subtrees).
2. **Root**: The topmost node of a binary tree, from which all other nodes are descended.
3. **Parent**: A node in a binary tree that has child nodes. For example, if a node A has child nodes B and C, then A is the parent of B and C.
4. **Child**: A node that is a direct descendant of another node. In a binary tree, each node can have at most two children.
5. **Leaf**: A node that has no children. It is a node that resides at the end of a branch.
6. **Subtree**: A binary tree formed by a parent node and all its descendants.
7. **Depth**: The depth of a node in a binary tree is the number of edges on the longest path from the node to the root.
8. **Height**: The height of a binary tree is the maximum depth of any node in the tree. The height of an empty tree is usually defined as -1.

![Levels and Depth](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%20-%204/Images/levels.png)

## Types of Binary Tree

Binary trees can be classified into different types based on their structure:

1. **Full Binary Tree**: A binary tree in which every node has either 0 or 2 children. There are no nodes with only one child.
2. **Complete Binary Tree**: A binary tree in which all levels are completely filled except possibly the last level, which is filled from left to right.
3. **Degenerated Binary Tree**: A degenerate binary tree is a special type of binary tree in which every parent node has only one child, essentially creating a linear data structure. This linear structure lacks the hierarchical properties that characterize balanced binary trees, such as binary search trees, AVL trees, and Red-Black trees.
4. **Perfect Binary Tree**: A binary tree in which all internal nodes have exactly two children, and all leaf nodes are at the same level.
5. **Balanced Binary Tree**: A binary tree in which the height difference between the left and right subtrees of any node is at most one.


![Tree's](https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%20-%204/Images/trees.png)
## Traversing through Binary Trees

1. **In-order Traversal**: In an in-order traversal, nodes are visited in the order of "Left-Root-Right or of subtree." This traversal is commonly used for binary search trees (BSTs) as it visits nodes in ascending order when applied to a BST.

```jsx
inorderTraversal(node):
    if node is not null:
        inorderTraversal(node.left)
        visit(node)
        inorderTraversal(node.right)
```

1. **Pre-order Traversal**: Preorder traversal visits nodes in the order of "Root-LEFT-RIGHT of subtree." This traversal is often used to create a copy of the tree or to serialize a tree into an easily constructible format.

```jsx
preorderTraversal(node):
    if node is not null:
        visit(node)
        preorderTraversal(node.left)
        preorderTraversal(node.right)
```

1. **Post-order Traversal**: Post-order traversal visits nodes in the order of "LEFT-RIGHT-ROOT of subtree." This traversal is useful for operations like deleting nodes from the tree, as it processes child nodes before their parent.

```jsx
postorderTraversal(node):
    if node is not null:
        postorderTraversal(node.left)
        postorderTraversal(node.right)
        visit(node)
```

## Data Structures based on Binary Tree

Binary trees serve as the foundation for various algorithms and data structures:

1. **Binary Search Tree (BST)**: A specialized binary tree where the value of each node is greater than all values in its left subtree and less than all values in its right subtree. BSTs are commonly used for efficient searching, insertion, and deletion operations.
2. **Heap**: A binary tree with specific ordering properties that allow efficient access to the smallest (min-heap) or largest (max-heap) element.
3. **Red-Black** **Trees**: Self-balancing binary search tree that ensures that the tree remains approximately balanced after every insertion and deletion operation. They achieve this balance by applying a set of rules that dictate the coloring of nodes and the arrangement of nodes in the tree.
4. **AVL Trees**: Self-balancing binary search tree. These trees maintain stricter balance conditions compared to Red-Black Trees, ensuring that the height difference between the left and right subtrees of any node (known as the balance factor) is at most 1.

In summary, Binary trees play a crucial role in computer science and have diverse applications across various domains. Understanding their properties, types, and algorithms associated with them is essential for any programmer or computer scientist.
