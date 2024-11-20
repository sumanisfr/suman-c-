// #include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breadth;
// };

// void fun(struct rectangle p)
// {
//     p.length=20;
//     cout<<p.length<<endl;
//     cout<<p.breadth<<endl;
// }

// int main()
// {
//     struct rectangle r={10,5};
//     fun(r);
  

//     printf("length %d\nbreadth %d\n",r.length,r.breadth);
//     return 0;
// }


// ?by pointer

// #include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breadth;
// };

// void fun(struct rectangle *p)
// {
//     p->length=20;
//     cout<<p->length<<endl;
//     cout<<p->breadth<<endl;
// }

// int main()
// {
//     struct rectangle r={10,5};
//     fun(&r);
  

//     printf("length %d\nbreadth %d\n",r.length,r.breadth);
//     return 0;
// }


//? write in c language

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct rectangle * fun()
{
    struct rectangle *p;
    // p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->length=20;
    p->breadth=30;
    return p;
}


int main()
{
    struct rectangle *ptr=fun();
    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;

    
    return 0;
}
