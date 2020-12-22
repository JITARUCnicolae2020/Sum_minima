#include <stdio.h>
int m[10],a[10],
a_final[10],s,n,nrmin=32000,kmin;
void descompune(int s, int k, int contor)
{
    register int i;
if(s==0)
   if (contor<nrmin)
{
    nrmin=contor; kmin=k-1;
for (i=1; i<=k; i++) a_final[i]=a[i];
for(i=k+1;i<=n;i++) a_final[i]=0;
return;
}
	else return;
if(k>n) return;
if(k==n)
{ a[k]=s/m[k];
descompune(s-a[k]*m[k],k+1,contor+a[k]);
 }
else for(i=s/m[k];i>=0;i--)
{ a[k]=i;descompune(s-i*m[k],k+1,contor+i);
}
}

void main(void)

{ int i;
printf("Introd.nr.de valori n a sistemului monetar:");
scanf("%i",&n);
printf("Introd.in ordine descresc.cele %i valori monetare:",n);
for(i=1;i<=n;i++)
scanf("%i",&m[i]);
printf("Introd.suma s:");
scanf("%i",&s);
descompune(s,1,0);
if(nrmin>0)
for(i=1;i<=kmin;i++)
printf("%i * %i,",a_final[i],m[i]);
else puts("Nu se poate descompune !");
}

