// Functors basically used to overload '()' operator

#include<iostream>
#include<algorithm>
//#include<functional>

using namespace std;

/*
int increment (int a)
{
    cout<<"\na = "<<a;
    return a+1;
}*/

/*class increment  // 1. Functor class which acts like a function
{
private:
    int num;

public:
    increment(int n):num(n){}

 int operator()(int arr_num)   // 2. operator overloading of '()'
 {
     return arr_num+num;
 }

};*/

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);


 //   transform(arr,arr+n,arr,increment);   // Here increment is a unary operation but we can't pass integer values like 2,3,4 etc..So, we will create a functor for overloading '()'.

    // transform(arr,arr+n,arr,increment(5));  //increment(5) also equals to increment.operator()(5)

    transform(arr,arr+n,arr,[](int *m){

              return *m+5;});


    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";

}
