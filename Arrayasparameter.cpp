// #include <iostream>

// using namespace std;

// void fun(int *A,int n)
// {
//     for(int i=0;i<5;i++) 
//     cout<<A[i]<<endl;
// }
// int main()
// {
//     int A[ ]={2,4,6,8,10};
//     int n=5;
//     fun(A,n);
//     cout<<sizeof(A)/sizeof(int)<<endl;
//     for (int x:A)
//     cout<<x<<endl;
//     return 0;

// }



// #include <iostream>

// using namespace std;

// void fun(int *A,int n)
// {
//    A[0]=25;
//     // for(int i=0;i<5;i++) 
//     // cout<<A[i]<<endl;
// }
// int main()
// {
//     int A[ ]={2,4,6,8,10};
//     int n=5;
//     fun(A,n);

//     cout<<sizeof(A)/sizeof(int)<<endl;
//     for (int x:A)
//     cout<<x<<endl;
//     return 0;

// }




#include <iostream>

using namespace std;

int * fun(int size)
{
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++)
    p[i]=i+1;
    return p;
}

// int main()
// {
//     int *ptr ,size=5;
//     ptr=fun(size);
//     for(int i=0;i<size;i++)
//     cout<<ptr[i]<<endl;
//     // delete [] ptr;
//     return 0;
    

// }