#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int array[10000];
    int n;
    int area;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the number in array";
    for(int z=0;z<n;z++){
        cin>>array[z];
    }
    
    int max=0;
    int d=n-1;
    int i=0;
    int j=n-1;
    while(i<j){
        if(array[i]<array[j]){
        int area=array[i]*d;
        i++;
        }
        else{
            int area=array[j]*d;
            j--;
        }
        if(area>max){
           max=area;
           d--;
        }
        cout<<area;

return area;
    }
}
