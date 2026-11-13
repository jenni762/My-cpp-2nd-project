#include<iostream>
using namespace std;
//function deceleration
void sum (int n[]);//creating a function that will recieve an array of intrger
void multiply(int n[]);
double average(int n[]);
int min(int n[]);
int max(int n[]);
int range(int n[]);
//function calling
int main(){
    int n[5];
    cout<<"Enter 5 numbers :";
    for(int i=0;i<5;i++)
    cin>>n[i];
    sum(n);
     multiply(n);
  double s= average(n);
   cout<<"The average of the 5 number:"<<s<<endl;
    int x=min(n);
    cout<<"The minimum value from the 5 numbers is:"<<x<<endl;
 int a=max(n);
 cout<<"The maximum value of 5 numbers is: "<<a<<endl;
int r=range(n);
cout<<"The difference between the maximum and the minimum number is:"<<r;
 return 0;
}
//function defination
    void sum(int n[]){
int sum=0;
for(int i=0;i<5;i++)
sum=sum+n[i];
cout<<"The sum of the 5 numbers:"<<sum<<endl;
}
void multiply(int n[]){
   int pro=1;
   for(int i=0;i<5;i++) 
pro=pro*n[i];
   cout<<"The product of the 5 numbers :"<<pro<<endl;
}
double average(int n[]){
    int sum=0;
    for(int i=0;i<5;i++)
    sum=sum+n[i];
double average=sum/5.0;
return average;
}
int min(int n[]){
    int min=n[0];
    for(int i=0;i<5;i++)
if(n[i]<min)
min=n[i];
return min;
}
int max(int n[]){
    int max=n[0];
    for(int i=0;i<5;i++)
    if(n[i]>max)
    max=n[i];
    return max;
}
int range(int n[]){
    int min=n[0];
    int max=n[0];
    int range;
    for(int i=0;i<5;i++)
if(n[i]<min)
min=n[i];
else if(n[i]>max)
max =n[i];
range=max-min;
return range;
}