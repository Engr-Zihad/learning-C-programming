#include <stdio.h>
 /* void printhello();
void printgoodbye();
 int main ()
 {
     printgoodbye();
     printhello();
     return 0;
      }
 void printhello()
 {
     printf("salamn\n");
 }
 void printgoodbye()
 {
     printf("bye\n");
 }


 int sum(int a, int b);
void printtable(int n);
int main ()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    int s = sum(a,b);
    printf("sum is %d",s);

   int n;
    printf("table number :");
    scanf("%d",&n);
    printtable(n);
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}
void printtable(int n)
{
 for (int i=1; i<=10; i++)
 {
     printf("%d\n",i*n);
 }
}

int sum (int n);
int main ()
{
    printf("the sum is %d\n",sum(10));
    return 0;
}
int sum (int n)
{
    if (n==1)
    {
        return 1;
    }
    int sumn1 = sum (n-1);
    int sumN = sumn1 + n;
    return sumN;
}
  int fb (int n);
 int main ()
 {
     printf("the fibonacchi is %d", fb(6));
 }
 int fb (int n)
 {
     if (n==0)
     {
         return 0;
     }
      else if (n==1)
     {
         return 1;
     }
    int fbnm1 = fb(n-1);
    int fbnm2 = fb(n-2);
    int fbN = fbnm1 + fbnm2 ;
     return fbN;

int fib (int n );
int main ()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("Answer is %d",fib(x));
    return 0;
}
 int fib (int n)
 {
     if (n==0)
     {
         return 0;
     }
     else if (n==1)
     {
         return 1;
     }
    int fibn1 = fib(n - 1);
    int fibn2 = fib(n - 2);
    int ffib = (fibn1 + fibn2);
    return ffib;
    int sum = 0;
     for (int i=1;i<=10;i++)
     {
        sum += (i*n);
     }
     printf("Sum is %d",sum);
 }  */


