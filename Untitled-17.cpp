#include<iostream>
using namespace std;

int main(){
int sum = 0;
int size;
cout<<"Enter the size of arrays is : ";
cin>>size;
int array[size];
for(int i=0;i<size;i++){
    cout<<"Enter the number is : ";
    cin>>array[i];
   
    sum = sum + array[i];

}
int avg ;
avg = sum/size;

cout<<"The sum is : " <<sum<<endl;
cout<<"The average is : "<<avg<<endl;

return 0;
}