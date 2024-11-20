#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

// int main()
// {
//     int a = 10; // Variable declaration and initialization
//     int *p;   // Pointer declaration
//     p = &a;  // Pointer initialization
//     cout<<a<<endl;  // Value of a
//     // printf("%d\n %d" ,p,&a);  // Value of a
//     // cout<<*p<<endl;  // Value of a
//     // cout<<p<<endl;  // Address of a
//     // cout<<&a<<endl;  // Address of a
//     // cout<<&p<<endl;  // Address of p
//     // cout<<sizeof(p)<<endl;  // Size of pointer
//     return 0;  // Return 0
// }

// int main()
// {
   
//    int A[5] = {2,4,6,8,10}; // Array declaration and initialization
//    int *p;  // Pointer declaration
//    p = A;  // Pointer initialization

//     for(int i=0;i<5;i++)
//     {
//         //  cout<<A[i]<<endl;
//         //  cout<<p[i]<<endl;
//         //  cout<<*(A+i)<<endl;
//         //  cout<<*(p+i)<<endl;
//     }

//    return 0;

// }


// int main()

// {

//     int *p;  // Pointer declaration
//     p = (int *)malloc(5*sizeof(int));  // Memory allocation
//     p = new int[5];  // Memory allocation
//     p[0] = 3;  // Value assignment 
//     p[1] = 5;  // Value assignment
//     p[2] = 7;  // Value assignment
//     p[3] = 9;  // Value assignment
//     p[4] = 11;  // Value assignment

//     for(int i=0;i<5;i++)
//     {
//         cout<<p[i]<<endl;  // Value of p
//     }

//     delete []p;  // Memory deallocation
//     free(p);  // Memory deallocation


//   return 0;
// }

struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
  
    int *p1;  // Pointer declaration
    char *p2;  // Pointer declaration
    float *p3;  // Pointer declaration
    double *p4;  // Pointer declaration
    struct Rectangle *p5;  // Pointer declaration
    cout<<sizeof(p1)<<endl;  // Size of pointer
    cout<<sizeof(p2)<<endl;  // Size of pointer
    cout<<sizeof(p3)<<endl;  // Size of pointer
    cout<<sizeof(p4)<<endl;  // Size of pointer
    cout<<sizeof(p5)<<endl;  // Size of pointer

    return 0;
}



