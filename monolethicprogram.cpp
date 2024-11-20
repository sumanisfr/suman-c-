#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int length=0,breath=0;
  printf("enter length & breadth of rectangle\n");
  scanf("%d %d",&length,&breath);

  int area = length * breath;
  int perimeter = 2 * (length + breath);
  printf("area=%d perimeter=%d\n", area, perimeter);
  cout << "area=" << area << endl << "perimeter=" << perimeter << endl;
  return 0;
}

