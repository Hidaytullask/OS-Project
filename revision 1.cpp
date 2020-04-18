#include<stdio.h>
#include<conio.h>
 int main()
{
    int BT[20],p[20],WT[20],TAT[20],pr[20],i,j,n,total=0,pos,temp,avg_WT,avg_TAT;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&BT[i]);
        printf("Priority:");
        
        scanf("%d",&pr[i]);
        p[i]=i+1;            
    }
}
