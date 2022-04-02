#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int num, x1=0, x2=0;
    for(int i=0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
   // int count=0;
   int armstrong(int y)
   {
        num = y;
        x2 =y;
        int count=0,sum=0;
        while(num != 0)
        {
            x1 = num%10;
            num=num/10;
            count++;
        }
        while(x2 > 0)
        {
            
            x1 = x2%10;
            x2=x2/10;
            sum = sum + pow(x1, count);
            

        }
        if(sum == y)
            return 1;
        else
            return 0;
   }
   for(int i=0;i<n;i++)
   {
       if (armstrong(arr[i])==1)
           printf("YES\n");
       else
            printf("NO\n");
   }

    
}