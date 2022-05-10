#include<stdio.h>
void main() {
//taking arrival time of each process as 0
int bt[20],wt[20],tat[20],i,n;
float cwt,ctat;
printf("\n Enter the number of process--");
scanf("%d",&n);
for (i=0;i<n;i++) {
printf("\nEnter Burst Time of Process %d--",i);
scanf("%d",&bt[i]);
}
wt[0]=cwt=0;
tat[0]=ctat=wt[0]+bt[0];
for (i =1;i<n;i++) {
wt[i]=wt[i-1]+bt[i-1];
tat[i]=wt[i]+bt[i];
cwt+=wt[i];
ctat+=tat[i];
}
printf("\t PROCESS \tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
for (int i=0;i<n;i++) {
printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
}
printf("\nAverage Waiting Time--%f",cwt/n);
printf("\nAverage TurnAround Time--%f",ctat/n);
}
