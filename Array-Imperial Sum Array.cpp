/*
The Imperial Sum of an Array is defined as the maximum possible sum of a subsequence that can be obtained from an array with the constraint that no 2 elements in the chosen subsequence should be adjacent to each other in the given array.

Your task is given an array that does not contain any zeros or negative numbers, find its Imperial Sum.

Input Format

First line contains the size of the array N.
Second line contains N space separated positive integers denoting the elements of the array A[N].

Constraints

1 <= N <= 105

Output Format

Output one number that is equal to the Imperial Sum of the Array.

Sample Input 0

4
3 2 7 10
Sample Output 0

13
Sample Input 1

5
3 2 5 10 7
Sample Output 1

15

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findMax(int arr[], int n){
   /* int incl=a[0];
    int excl=0;
    int max_sum;
    
    for(int i=0;i<n;i++){
        
         if(incl>excl){
             max_sum=incl;
         }
        else{
            max_sum=excl;
        }
        
        incl=a[i]+excl;
        excl=max_sum;
        
        
    }
    
    return((incl>excl)?incl:excl);*/
    
    int incl = arr[0]; 
  int excl = 0; 
  int max_num; 
  int i; 
  
  for (i = 1; i < n; i++) 
  { 
     
     max_num = (incl > excl)? incl: excl; 
  
     
     incl = excl + arr[i]; 
     excl = max_num; 
  } 
  
   /* return max of incl and excl */
   return ((incl > excl)? incl : excl); 

  
}


int main() {
    int n,a[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findMax(a,n);
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
