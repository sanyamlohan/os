#include<stdio.h>
int main() {
int p[20],bt[20],wt[20],tat[20],i,n,k,tmp;
float cwt,ctat;
printf("\n Enter the number of process--");
scanf("%d",&n);
for (i=0;i<n;i++) {
p[i]=i;
printf("\nEnter Burst Time of Process %d--",i);
scanf("%d",&bt[i]);
}
for (i =0;i<n;i++) {
for (k=i+1;k<n;k++) {
if (bt[i]>bt[k]) {
tmp=bt[i];
bt[i]=bt[k];
bt[k]=tmp;
tmp=p[i];
p[i]=p[k];
p[k]=tmp;
}
}
}
wt[0]=cwt=0;
tat[0]=ctat=bt[0];
for (i=1;i<n;i++) {
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
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
