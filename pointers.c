#include <stdio.h>
/*
int main ()
{
    int age =22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d",_age);
      printf("%u\n",&age);
        printf("%u\n",ptr);
        printf("%u\n",&ptr);

    return 0;
}

int main ()
{
    int a ;
    printf("Enter your number :");
    scanf("%d",&a);
    int *ptr = &a ;
    printf("%u",&ptr);
    return 0;
}
 void swap(int *a , int *b) ;
 int main ()
 {
     int x=10 , y=5 ;
     swap (&x,&y);
     printf("%d %d\n",x,y);
     return 0;
 }
 void swap (int *a , int *b)
 {
     *a = *a + *b ;
     *b = *a-*b ;
     *a = *a-*b ;
     printf("%d %d \n",*a,*b);
 }
*/
void op3 (int a , int b ,int *sum ,int * multi ,float *avg) ;
int main ()
{
    int a = 10 , b = 20 ;
    int sum , multi ;
    float avg ;
    op3(a,b,&sum,&multi,&avg);
    printf("sum = %d multi = %d avg = %f",sum,multi,avg);
    return 0;
}
void op3 (int a , int b ,int *sum ,int *multi ,float * avg)
{
    *sum = a+b ;
    *multi = a * b ;
    *avg   = (a+b)/2.0;
}
