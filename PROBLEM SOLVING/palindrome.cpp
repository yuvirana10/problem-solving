#include<iostream>

using namespace std;
    int main(){
    int n,num,digit,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    num=n;
    do{
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }while(n!=0);
cout<< "reverse of number is  "<<rev<<endl;
if(num==rev){
    cout<<"palindrome";

}else{
    cout<<"Not palindrome";
}
return 0;
}