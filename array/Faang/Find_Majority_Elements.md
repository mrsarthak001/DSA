## **Find Majority Elements**

You have to given an array A of size N.  
Find all the elements which appear more than floor(N/3) times in the given array.  
There is a condition that you have to do your job in O(N) time complexity and O(1) space complexity.

**Input Format**

First line contains N ->No. of elements in the array  
Second line has N integers denoting the elements of the array A ie A1,A2,A3…….AN.

**Constraints**

    1<=N<=10^7  
    0<=Ai<=10^9

**Output Format**

Print a single line containing all the majority elements occurring more than floor(N/3) times.  
If there is no majority element then just print "No Majority Elements".

**Sample Input**

    8
    2 2 3 1 3 2 1 1 

**Sample Output**

    1 2
