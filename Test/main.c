#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int input,i,a=0;
    int array[50]={0},mod_number[50]={0},length[50]={0},mod_number2[50]={0};
    do
    {
        scanf("%d",&input);
        for(i=0;i<input;i++)
        {
            scanf("%d",&array[i]);
            length[i]=s_length(array[i]);
            mod_number[i]=mod_num(array[i],length[i]);
        }
         bubble_sort(mod_number,array,length,input);
         for(i=0;i<input;i++)
         {
             printf("%d\n",array[i]);
         }
         int j=0;
         for(j=0;j < 10;j++)
         {
             for(i=0;i<input;i++)
             {

                 if(mod_number[i] == j)
                 {

                    a = pow(10,(length[i]-1));
                    mod_number2[i]=array[i] % a;
                 }

             }
                printf("%d\n",mod_number2[i]);
         }

    }while(input!=0);


}

int s_length(int array1)
{
    int count=1;
    do
    {
        count++;
        array1 = array1/10;
    }while(array1>10);
    return count;
}

int mod_num(int array2,int count2)
{
    int a= pow(10,(count2-1));
    if(array2>10)
        array2 = array2 / a;

    return array2;
}
void sort()
{

}
void bubble_sort(long list[], int array3[],int length3[] ,long n)
{
  long c, d, t;
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] < list[d+1])
      {
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
        t           = array3[d];
        array3[d]   = array3[d+1];
        array3[d+1] = t;
        t           = length3[d];
        length3[d]   = length3[d+1];
        length3[d+1] = t;
      }
    }
  }
}

