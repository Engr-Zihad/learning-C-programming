#include <stdio.h>
/*
void pn(int *arr,int n);
int main ()
{
   int mark [70] = {0,1,6,3,4,43,435,435,435,435,23,512,235,235,236,436,436,436,245,32,5,236,43,643,36,436};
    mark [0] = 0;
    mark [1] = 1;
    mark [2] = 2;
    mark [3] = 3;
    printf("%d",mark[9]);

    char name[50];
    scanf(" %c",&name);
    printf(" %c",name[]);

    float p[3];
    printf("Enter price :");
    scanf("%f",&p[0]);
    scanf("%f",&p[1]);
    scanf("%f",&p[2]);
    printf("total price of p1 = %f\ntoatal price of p2 = %f\ntotal price of p3 = %f\n",p[0]+(p[0]*.18),p[1]+(p[1]*.18),p[2]+(p[2]*.18));

    int age = 22;
    int *ptr = &age ;
    printf("%u\n",ptr);
    ptr ++;
    printf("%u\n",ptr);
    ptr --;
    printf("%u\n",ptr);
    int age = 20 ;
    int _age =  21 ;
    int *ptr = &age ;
    int *_ptr = &_age ;
    printf("%u and %u difference = %u\n",ptr,_ptr,ptr-_ptr);
    _ptr = &age;
    printf("compare = %u\n",ptr == _ptr);


    int ad[5];
    int *ptr = &ad[0];
    for (int i= 0 ; i<=5 ; i++)
    {
        printf("%d idex :",i);
        scanf("%d",&ad[i]);
    }
    for (int i= 0 ; i<=5 ; i++)
    {
        printf("%d index %d\n",i,ad[i]);
    }


    int arr[] = {1,2,3,4,5,6};
    pn(arr,6);



    return 0;

}



void pn(int *arr,int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int co(int arr[],int n);
int main ()
{
    int mark [2][3];
    mark[0][0] = 90;
    mark[0][1] = 95;
    mark[0][2] = 90;
    mark[1][0] = 90;
    mark[1][1] = 90;
    mark[1][2] = 90;
    printf("marks of 1st = %d", mark[0][1]);

    int arr [] = {1,2,3,4,5,6,7,8,9,10,11};
    printf("%d",co(arr,11));
    return 0;
}
int co(int arr[],int n)
{
    int count = 0 ;
    for (int i =0; i<n;i++)
    {
        if (arr[i]%2==0)
        {
        count++;
        }
    }
    return count;
}
void r(int *arr,int n);
void pr(int *arr,int n);
int main ()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    r(arr,10);
    pr(arr,10);
}
void r(int *arr,int n)
{
    for(int i = 0 ; i<n/2;i++)
    {
        int fv = arr[i];
        int lv = arr[n-i-1];
        arr[i] = lv;
        arr[n-i-1] = fv;
    }
}
void pr (int *arr, int n)
{
    for (int i = 0 ; i <n ; i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main ()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
  if (n==1)
  {
      printf("0");
  }
  else if (n ==2)
  {
      printf("0\t1");
  }
  else {
         printf("0\t1\t");
    for (int i = 2 ; i<n ; i ++)
    {
        fib[i] = fib [i-1] + fib [i-2];
        printf("%d\t",fib[i]);
    }
  }

} */

void st(int arr[][11], int n,int m,int number );
int main ()
{
    int  arr [11][11];
   // st(arr,0,10,0);
    st(arr,1,10,1);
    st(arr,2,10,2);
    st(arr,3,10,3);
    st(arr,4,10,4);
    st(arr,5,10,5);
    st(arr,6,10,6);
    st(arr,7,10,7);
    st(arr,8,10,8);
    st(arr,9,10,9);
    st(arr,10,10,10);

   //  for (int i =0; i<10;i++)
    // {
    //    printf("%d\t",arr[0][i]);
     //}
    //printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[1][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[2][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[3][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[4][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[5][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[6][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[7][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[8][i]);
    }
     printf("\n");
     for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[9][i]);
    }
     printf("\n");
    for (int i =0; i<10;i++)
    {
        printf("%d\t",arr[10][i]);
    }
     printf("\n");
    return 0;
}






void st(int arr[][11],int n ,int m,int number)
{
    for (int i =0; i<m;i++)
    {
        arr[n][i]= number * (i+1);
    }
}




#include <stdio.h>
int main ()
{
    int arrA[10];
    int arrB[10];
    int arrAB[10];
    for (int i = 0 ; i<10 ; i++)
        {
            arrA[i] = (i+1)*12;
            printf("%d\t",arrA[i]);
        }
    printf("\n");
      for (int i = 0 ; i<10 ; i++)
        {
            arrB[i] = (i+1)*10;
            printf("%d\t",arrB[i]);
        }
    printf("\n");
    for (int i = 0; i<10 ; i++)
        {
            arrAB[i]=arrA[i]*arrB[i];
            printf("%d\t",arrAB[i]);
        }
    return 0;
}


