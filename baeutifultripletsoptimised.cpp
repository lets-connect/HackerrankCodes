// Written by Pankaj Kumar /////
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int d;
    cin>>n>>d; 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int count=0;
   for(int x=0;x<n-2;x++){
       int j=x+1;
       int k=n-1;
       while(j<=k){  
	       
          if(a[j]-a[x]==d && a[k]-a[j]==d){
              cout<<"here"<<endl;
               count++;
           }
           j++;
           k--;
           
       }
       
   }
    cout<<count<<endl;
    return 0;
}

