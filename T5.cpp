#include<stdio.h>
void T5()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int i,n,temp,*p;
    printf("输入轮转的次数:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=*(a+9);
        for(p=a+9;p>a;p--) {
            *p = *(p-1);
        }
        *a=temp;
    }
    for(i=0;i<10;i++)
        printf("%3d",*(a+i));
    printf("\n");
}
