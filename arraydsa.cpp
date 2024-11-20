#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    // int A[10]={2,4,6,8,10}; // Array declaration and initialization
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;

    // cout<<sizeof(A)<<endl;
    // cout<<A[0]<<endl;
    // printf("%d\n",A[1]);
    //   printf("%d\n",A[7]); // Garbage value
//     return 0;



// int A[10]={0};
// int A[10]={2,4,6,8,10,16,18,20};

// for(int i=0;i<10;i++)
// {
//     cout<<A[i]<<endl;
// }

//     return 0;

int n;
cout<<"Enter the size of the array: ";
cin>>n;
   int A[n]={2,4,6,8,10,16,18,20};
    // int A[n]; // Declaration of array
    A[0] = 2;

    for(int x:A)
{
    cout<<x<<endl;
}

    return 0;

}