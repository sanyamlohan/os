#include<stdio.h>
#include<string.h>
void main()
{
int bt[20],at[10],n,i,j,temp,st[10],ft[10],wt[10],ta[10];
int totwt=0,totta=0;
float awt,ata;
char pn[10][10],t[10];
printf("Enter the number of process:");
scanf("%d",&n);
for(i=0; i<n; i++)
{
printf("Enter process name, arrival time& execution time:");
scanf("%s%d%d",pn[i],&at[i],&bt[i]);
}
for(i=0; i<n; i++)
for(j=0; j<n; j++)
{
if(bt[i]<bt[j])
{
temp=at[i];
at[i]=at[j];
at[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
strcpy(t,pn[i]);

strcpy(pn[i],pn[j]);
strcpy(pn[j],t);
}
}
for(i=0; i<n; i++)
{
if(i==0)
st[i]=at[i];
else
st[i]=ft[i-1];
wt[i]=st[i]-at[i];
ft[i]=st[i]+bt[i];
ta[i]=ft[i]-at[i];
totwt+=wt[i];
totta+=ta[i];
}
awt=(float)totwt/n;
ata=(float)totta/n;
printf("\nProcess\tArrival time\tBurst time\tWaitingtime\tTatime");
for(i=0; i<n; i++)
printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d",pn[i],at[i],bt[i],wt[i],ta[i]);
printf("\nAverage waiting time is:%f",awt);
printf("\nAverage turnaroundtime is:%f",ata);
}
