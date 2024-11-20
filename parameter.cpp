#include<iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}




// #include<iostream>

// using namespace std;
// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main ()
// {
//     int num1 = 5, num2 = 10;
//     swap(&num1, &num2);
//     cout << num1 << " " << num2 << endl;
//     return 0;
// }