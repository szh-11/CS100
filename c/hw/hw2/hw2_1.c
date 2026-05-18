

#include <stdio.h>

// int main()
// {
//     int a[] = {1, 2, 3};
//     int b[] = {10, 11, 12};
//     int c[100] = {1};

//     b[] = {101, 102, 103};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d", b[i]);
//     }
//     return 0;
// }

// 当你把数组a传递给函数，此时a会退化为指向首元素的指针

// int *p定义了p是一个指针，指向一个整数，和int* p没什么区别，但后者不推荐，尽可能写前者

// 不用指针，可能面对作用域导致函数变化消失

int min_element(int *array, int l, int r)
{
  int pos = l;
  while (l < r)
  {
    if (array[l] < array[pos])
      pos = l;
    ++l;
  }
  return pos;
}
void swap(int *pa, int *pb)
{
  int tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}
// int a[] = {1, 2, 3};
// int b[] = {9, 9, 8, 2, 4, 4, 3, 5, 3};
// int main(void){
//   int *pa = a, *pb = b;
//   swap(pa, pb);
//   for (int i = 0; i < 3; ++i)
//     printf("%d ", pa[i]);
//   for (int i = 0; i < 3; ++i)
//     printf("%d ", pb[i]);
// }

// int a[] = {1, 4, 2, 8, 5, 7};

// #include<stdio.h>
// int main(){
//     printf(min_element(a[], , int r))
// }

void sort(int *array, int n)
{
  for (int i = 0; i < n - 1; ++i)
  {
    int min_pos = min_element(array, i, n);
    swap(&array[i], &array[min_pos]);
    // Note: If you have difficulty understanding this function, uncomment the following lines, run the code and look at the output.
    // for (int i = 0; i < n; ++i)
    //   printf("%d ", array[i]);
    // printf("\n");
  }
}
int main(void)
{
  int a[] = {8, 5, 7, 1, 4, 2};
  sort(a, 6);
  for (int i = 0; i < 6; ++i)
    printf("%d ", a[i]);
  printf("\n");
}
//对于函数的参数要每个都表明int *a，int *b这样子，不能int *a，*b