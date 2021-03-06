#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d;
  float* ptrtod;
  ptrtod = &d;
  d = 1.4;

  float e;
  float* ptrtoe;
  ptrtoe = &e;
  e = 2.0;

  printf("The value of d is %f, the address is %p\n", d, ptrtod);
  printf("The value of e is %f, the address is %p\n", e, ptrtoe);

  float temp;
  temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;

  printf("The new value of d is %f\n", *ptrtod);
  printf("The new value of e is %f\n", *ptrtoe);
}
