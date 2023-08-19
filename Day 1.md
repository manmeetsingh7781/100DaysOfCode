# Time and Space Complexity Analysis

Created: August 18, 2023 6:21 PM
Day: 1
Materials: https://www.geeksforgeeks.org/asymptotic-notation-and-analysis-based-on-input-size-of-algorithms/#
Author: Manny - @ptr_err

Before we learn about Time/Space Complexity, we should know what is Algorithm.

# So, what is Algorithm?

Algorithm simply refers to a sequence of finite steps to solve a particular problem. In other words, set of instructions to solve a problem. Algorithms can be simple and complex depending on what we want to achieve.

![Image from GeeksForGeeks](Time%20and%20Space%20Complexity%20Analysis%2032994bda52cd46b48b69e55f8b246f26/Untitled.png)

Image from GeeksForGeeks

## There are several types of Algorithms

But, we will discuss important ones.

1. **Brute Force**: First and Simplest approach to solve the problem.
2. **Recursive**: The problem is broken into sub-problems and called the same function again and again on the problems until It reaches base case.
3. **Backtracking**: problem-solving approach that uses **********************Brute-Force********************** approach to find the best output, backtracking algorithm tries out all the possible solutions and chooses the best solution. The problem that uses Backtracking will have constraints(rules) that do not meet and will be removed. 
    - In simple words: Searching for every possible combination and choosing the best one every time.
    - This approach is redefined **********************Brute-Force********************** approach and also uses ****************Recursion.****************
4. **Searching**: Used for searching a key in the array. There are 2 types of search algorithms Linear and Non-Linear.
5. **Sorting**: Used for sorting an unordered array. There are 3 types of search algorithms Linear, Non-Linear, and Non-Comparison.
6. **Hashing**: An algorithm that uses a math formula to convert the key into a numerical value. There is also double hashing that works as a backup when the primary hashing function causes a collision. 
7. **Divide and Conquer**: This algorithm breaks the problem into sub-problems and applies the same fundamentals on them by calling itself again and again until it reaches base case, and combines the solution of subproblems back to one main solution. It uses recursion. This algorithm divides a problem into 3 major steps. Divide, Solve, and Combine. 
8. **Greedy**: This algorithm chooses what the best choice is at the given time, it makes the same decision of finding the best choice out of given choices at every step until it solves the problem. 
9. **Dynamic Programming**: Avoids overlapping solutions, this algorithm avoids performing calculations that has already been calculated. It uses memorization or tabulation so that it can access the solution that was solved already rather than solving it again.
10. **Randomized Algorithm**: Uses randomness as a part of its logic, such as tossing a coin, generating a random number, or drawing a card out of card stack. 

Although there are endless algorithms, we will focus on the most commonly used ones. However, the execution of an algorithm can vary depending on the hardware, making it machine-dependent.

For instance, a sorting algorithm that solves N elements may take about 10 seconds on an Intel i3 processor, whereas it may take only 1 second on an Intel i9 processor. As we can see, there is a significant time difference.

Computers take time to execute the instructions we write. To calculate how long it takes to finish executing our algorithm, we use asymptotic notation. This notation describes the time and space complexity of an algorithm.

## Asymptotic Notation

Asymptotic notation is a way to describe the time and space complexity of algorithms. It provides a standardized way to compare the efficiency of algorithms based on their input size.

The three most commonly used asymptotic notations are:

- Big O notation (upper bound)
- Omega notation (lower bound)
- Theta notation (tight bound)

Big O notation is the most commonly used notation and provides an upper bound on the running time of an algorithm. It describes the worst-case scenario for an algorithm and provides a measure of how the running time of the algorithm grows with the size of the input. For example, an algorithm with a time complexity of O(n) means that the running time of the algorithm grows linearly with the size of the input.

Omega notation provides a lower bound on the running time of an algorithm. It describes the best-case scenario for an algorithm and provides a measure of how the running time of the algorithm shrinks with the size of the input.

Theta notation provides a tight bound on the running time of an algorithm. It describes both the upper and lower bounds and provides a measure of how the running time of the algorithm behaves in both the best-case and worst-case scenarios.

By using asymptotic notation, developers can compare the efficiency of different algorithms and choose the best algorithm for a given problem. It also allows them to analyze and optimize the performance of their algorithms.

(+https://github.com/manmeetsingh7781/100DaysOfCode/blob/main/Day%201%20-%20Images/algorithm.png)

c2 is a constant which is a multiplier and gives us the Worst Case (Big O) of a function f(n)

c1 is another constant which a multiplier but smaller than c2 and this is our Best Case (Big Omega) of function f(n)

f(n) is our function which describes the run time on an average case which is Big Theta. 

## Time Complexity

Time complexity is a measure of how long an algorithm takes to execute as a function of the input size. It is typically expressed using asymptotic notation, such as Big O notation. The time complexity of an algorithm depends on the number of operations performed by the algorithm and how those operations scale with the size of the input.

We use time complexity analysis to compare different algorithms and determine which one is the most efficient for a particular problem. An algorithm with a lower time complexity is generally faster and more efficient than an algorithm with a higher time complexity. However, it's important to note that the actual running time of an algorithm depends on the machine on which it is executed, as well as other factors such as the size and distribution of the input.

## Space Complexity

Space complexity is a measure of how much memory an algorithm requires as a function of the input size. It is also typically expressed using asymptotic notation, such as Big O notation. The space complexity of an algorithm depends on the amount of memory required to store variables, data structures, and other objects used by the algorithm.

Similar to time complexity, we use space complexity analysis to compare different algorithms and determine which one is the most efficient for a particular problem. An algorithm with lower space complexity is generally more memory-efficient than an algorithm with higher space complexity. However, it's important to note that the actual memory usage of an algorithm depends on the machine on which it is executed.

## Conclusion

In summary, time and space complexity analysis are important tools for evaluating and optimizing the efficiency of algorithms. By understanding the time and space complexity of different algorithms, developers can make informed decisions about which algorithm to use for a particular problem.
