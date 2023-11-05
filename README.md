# Here is my HackerRank Solutions

>The repository contains the solutions to various HackerRank problems.Organize the solutions so they are easy to navigate and understand. Each solution includes a reference to the problem statement and is well-documented to explain the logic and approach.




## Solution Approach

>In the "Solution Approach" section, provide a detailed explanation of your approach to solving the problem. Describe the algorithm, data structures, and any key insights that led to your solution. This helps others understand your thought process and learn from your solutions.

### Circular Array Rotation


  - [Problem](https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=false)(navigate to the Problem)
  - [Solution](./solution.py) (navigate to the Solution file)
  - Explanation: (First we create a new vector to store the original array of elements.Then we traverse the vector to store the ith element in the (i+k)th position.
  
### Halloween Sale


  - [Problem](https://www.hackerrank.com/challenges/halloween-sale/problem?isFullScreen=false)(navigate to the Problem)
  - [Solution](./solution.py)(navigate to the Solution file)
  - Explanation: (Create 2 new variables cost and count.increment the value of cost each time while its less than the available budget.Decrement the value of each item while its less than m)

    ```
      int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int cost=0,ct=0;
    while(cost<s){
        
        
        
        if(p<m){
            cost+=m;
            
        }
        else{
            
            cost+=p;
            p-=d;
        }
        
        if(cost>s) break;
        ct++;
   
    }
   
    
    return ct;

}

    ```

### Example  
---
## 3.Jumping on the Clouds
  - [Problem](https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true)(navigate to the Problem)
  - [Solution](Grading_Students/gradingstudents.py) (navigate to the Solution file)
  - Explanation:
  >  Here I have used i as the counter variable.Increment the counter variable by 2 if the (i+2)th element is 0 else increment by 1.
```
int jumpingOnClouds(vector<int> c) {
    
    int n=c.size();
    int ct=0,i=0;
    while(i<n){
        
        if(i<n-2 && c[i+2]!=1){
            i+=2;
            
        }
        else{
            if(i==n-1) break;
            i+=1;
        }
        // cout<<i<<" ";
        ct++;
    }
    return ct;

}
```

## 4.Find the Median


  - [Problem](https://www.hackerrank.com/challenges/find-the-median/problem)(navigate to the Problem)
  - [Solution](Mini-Max_Sum/minimaxsum.py) (navigate to the Solution file)
  - Explanation:
  >Sort the array .Return the (n/2)th element.
>
 ```
  int findMedian(vector<int> arr) {
    
    sort(arr.begin(),arr.end());
    int n=arr.size();
    return arr[n/2];

}
 ```

#### The miniMaxSum function takes an array (arr) as input and performs the following steps:

 1.Sorts the array in ascending order using the sort() method.

 2.Calculates the sum of all elements except the last one using the sum() function and slicing (arr[:-1]).

 3.Calculates the sum of all elements except the first one using the sum() function and slicing (arr[1:]).

 4.Prints the minimum sum and maximum sum.

 code with an example. Consider the following input:

```python
def miniMaxSum(arr):
    arr.sort()
    print(sum(arr[:-1]), sum(arr[1:]))

if __name__ == '__main__':
    arr = list(map(int, input().split()))
    miniMaxSum(arr)

```
 The miniMaxSum function will perform the following steps:

 Example input: arr = 5 2 3 4 1

 ```arr.sort()```: Sorts arr in ascending order = [1,2,3,4,5]

 ```sum(arr[:-1])```: Calculate the minimum sum by removing last element of array: 1+2+3+4 = 10

 ```sum(arr[1:])```: Calculate the maximum sum by removing first element of array: 2+3+4+5= 14

 Print the minimum sum: 10
 
 Print the maximum sum: 14

#### Sample input & output
input
```
1 3 5 7 2 6
```
output
```
17 23
```
****


