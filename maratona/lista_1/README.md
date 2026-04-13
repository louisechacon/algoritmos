 # Election
An election is taking place.

N people voted. The 
i-th person 
(1≤i≤N) cast a vote to the candidate named Si.

Find the name of the candidate who received the most votes. The given input guarantees that there is a unique candidate with the most votes.

## Constraints
- 1 ≤ N ≤ 100
- Si is a string of length between 1 and 10 (inclusive) consisting of lowercase English letters.
- N is an integer.
- There is a unique candidate with the most votes.

# Weird Algorithm
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:

3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

## Input
The only input line contains an integer n.

## Output
Print a line that contains all values of n during the algorithm.

## Constraints
1 ≤ n ≤ 10^6