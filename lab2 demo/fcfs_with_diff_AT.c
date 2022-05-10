#include <stdio.h>
void main(){
int bt[20],ct[20],at[20],service[20],tat[20],wt[20],n;
printf("Enter number of processes: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("\nEnter arrival time and burst time = ");
scanf("%d %d",&at[i],&bt[i]);
}
service[0] = at[0];
wt[0] = 0;
// calculate waiting time
for (int i = 1; i < n ; i++)
{
service[i] = service[i-1] + bt[i-1];
wt[i] = service[i] - at[i];
if (wt[i] < 0)
wt[i] = 0;
}
// Calculate turnaround time
for (int i = 0; i < n ; i++)
tat[i] = bt[i] + wt[i];
int cwt = 0, ctat = 0;
printf("\t PROCESS \tARRIVAL TIME \tBURST TIME \t COMPLETION TIME\tTURNAROUND TIME\t WAITINGTIME\n");
for (int i = 0 ; i < n ; i++)
{
cwt = cwt + wt[i];
ctat = ctat + tat[i];
int completion_time = tat[i] + at[i];
printf("\n\t %d \t\t %d \t\t %d \t\t %d \t\t\t %d \t\t\t %d", i, at[i],bt[i],
completion_time, tat[i],wt[i]);
}
printf("\nAverage waiting time = %f",((float)cwt/(float)n));
printf("\nAverage turn around time = %f\n",((float)ctat/(float)n));
}
