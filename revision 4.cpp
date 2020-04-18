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
     for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=BT[i];
        BT[i]=BT[pos];
        BT[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    WT[0]=0;     
     for(i=1;i<n;i++)
    {
        WT[i]=0;
        for(j=0;j<i;j++)
            WT[i]+=BT[j];
 
        total+=WT[i];
    }
 
    avg_WT=total/n;       
    total=0;
     printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        TAT[i]=BT[i]+WT[i];      
        total+=TAT[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],BT[i],WT[i],TAT[i]);
    }
 
    avg_TAT=total/n;      
    printf("\n\nAverage Waiting Time=%d",avg_WT);
    printf("\nAverage Turnaround Time=%d\n",avg_TAT);
 
    return 0;
}
