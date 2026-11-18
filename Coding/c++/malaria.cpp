#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a number:";
cin>>n;
(n%3==0 && n%4 == 0 && n%5!=0)
? cout<<"The number satisfies the condition."
: cout<<"The number does not satisfy the condition.";  

    return 0;
}