# Here is my HackerRank Solutions

>The repository contains the solutions to various HackerRank problems.Organize the solutions so they are easy to navigate and understand. Each solution includes a reference to the problem statement and is well-documented to explain the logic and approach.




## Solution Approach

>In the "Solution Approach" section, provide a detailed explanation of your approach to solving the problem. Describe the algorithm, data structures, and any key insights that led to your solution. This helps others understand your thought process and learn from your solutions.

### 1. Circular Array Rotation


  - [Problem](https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=false)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/circular_array_rotation.cpp) (navigate to the Solution file)
  - Explanation: (First we create a new vector to store the original array of elements.Then we traverse the vector to store the ith element in the (i+k)th position.
  
### 2. Halloween Sale


  - [Problem](https://www.hackerrank.com/challenges/halloween-sale/problem?isFullScreen=false)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/halloween_sale.cpp)(navigate to the Solution file)
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



## 3.Jumping on the Clouds
  - [Problem](https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/jumping_on%20_the_clouds.cpp) (navigate to the Solution file)
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
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/find_the_median.cpp) (navigate to the Solution file)
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

## 5.Largest Permutation


  - [Problem](https://www.hackerrank.com/challenges/largest-permutation/forum)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/largest_permutation.cpp) (navigate to the Solution file)
  - Explanation:
  >The given array contains the list of first N Natural numbers.So for each iteration we swap the ith value with the (n-i)th value;
>
 ```
  vector<int> largestPermutation(int k, vector<int> arr) {

    int n=arr.size();
    
    vector<int>pos(n+1);
    
    for(int i=0;i<n;i++){
        pos[arr[i]]=i;
    }
    vector<int>b=arr;
    int i=0;
    
    while(k>0 && i <n){
        
        if(arr[i]!=n-i){
            int t=arr[i];
        swap(arr[i],arr[pos[n-i]]);
        pos[t]=pos[n-i];
        pos[n-i]=i;
        
        k--;
        }
        i++;
        }
        
    
    
    return arr;
}
 ```

## 6.Equalize the Array



  - [Problem](https://www.hackerrank.com/challenges/equality-in-a-array/problem)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/equalize_the_array.cpp) (navigate to the Solution file)
  - Explanation:
  >Find the most occuring element in the array.Remove all elements except that element.
>
 ```
  int equalizeArray(vector<int> arr) {
    
    int n=arr.size();
    int mx=0;
    
    map<int,int>m1;
    
    for(int i=0;i<n;i++){
        m1[arr[i]]++;
        
    }
    
    for(auto it:m1){
        
        if(it.second>mx) mx=it.second;
        
    }
    
    return (n-mx);

}

 ```

## 7.Almost Sorted
  - [Problem](https://www.hackerrank.com/challenges/almost-sorted/problem)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/almost_sorted.cpp) (navigate to the Solution file)
  - Explanation:
  > if the array is sorted then print "YES". if the array is sorted after swapping the out of place elements then print those elements else try reversing the segment.if the array is still unsorted then print no.
```
void almostSorted(vector<int> arr) {
    
    if(is_sorted(arr.begin(), arr.end())) { cout << "yes"; return;}
        
    int first, last;

    for(int i = 0; i < arr.size() - 1; i++) 
        if (arr[i] > arr[i + 1]) 
            { first = i; break; }

    for(int i = arr.size() - 1; i > 0; i--) 
        if(arr[i - 1] > arr[i]) 
            { last = i; break; }

    swap(arr[first], arr[last]);
    if(is_sorted(arr.begin(), arr.end())) { 
        cout << "yes" << endl << "swap " << first + 1 << " " << last + 1; 
        return; 
    }
    swap(arr[first], arr[last]);

    reverse(arr.begin() + first, arr.begin() + last + 1);

    if(is_sorted(arr.begin(), arr.end())) { 
        cout << "yes" << endl << "reverse " << first + 1 << " " << last + 1; 
        return; 
    }

    cout << "no";

    }
```

## 8.Save the Prisoner



  - [Problem](https://www.hackerrank.com/challenges/save-the-prisoner/problem)(navigate to the Problem)
  - [Solution](Mini-Max_Sum/minimaxsum.py](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/save_the_prisoner.cpp) (navigate to the Solution file)
  - Explanation:
  >Move (m-1) steps from the start and return the modulo of it.
>
 ```
int saveThePrisoner(int n, int m, int s) {
    
    if((s+(m-1))%n==0){
        return n;
    }
    return (s+(m-1))%n;

}
 ```

## 9.Caesar Cipher



  - [Problem](https://www.hackerrank.com/challenges/caesar-cipher-1/problem?isFullScreen=false)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/caesar_cipher.cpp) (navigate to the Solution file)
  - Explanation:
  >Evaluate seperately for upper case and lowercase letters. Use modulo since it can exceed the given range.
>
 ```
 k %= 26;
    for (int i = 0;i < n; i++) {
        int c = s[i];
        if (c >= 'a' && c <= 'z') { 
            c += k;
            if (c > 'z') { 
               c = 96 + (c % 122); 
            }
        } else if(c >= 'A' && c <= 'Z') { 
            c += k;
            if(c > 'Z') { 
                c = 64 + (c % 90); 
            }
        }
        cout << (char)c;
    }
 ```

## 10.Beautiful Binary String



  - [Problem](https://www.hackerrank.com/challenges/beautiful-binary-string/problem?isFullScreen=false)(navigate to the Problem)
  - [Solution](https://github.com/geoffgeorgein/HackerRank-solutions/blob/main/beautiful%20binary-string.cpp) (navigate to the Solution file)
  - Explanation:
  >Traverse the string.Check the ith,(i-1)th and (i+1)the position for the pattern .if pattern exists then change the (i+1)th character to'1'.
>
 ```
 int beautifulBinaryString(string b) {
    
    int n=b.length();
    int ct=0;
    for(int i=1;i<n-1;i++){
        
        if(b[i]=='1' && b[i-1]=='0'  && b[i+1]=='0'){
            ct++;
            b[i+1]='1';
        }
    }
    
    return ct;

}

****


