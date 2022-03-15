#include <iostream>
#include <sys/time.h>
using namespace std;
int n,step=5,i,j,count;
int a[1000],b[1000][1000],sum[1000];
void ordinary(int n){
	int i,j;
	for(j=0;j<n;j++){
        for(i=0;i<n;i++)
          sum[j]+=b[i][j]*a[i];}
}
void better(int n){
	int i,j;
	for(i=0;i<n;i++){
        for(j=0;j<n;j++)
          sum[j]+=b[i][j]*a[i];}
}

int main()
{

    struct timeval beg, end;
   

	for(n=5;n<=1000;n+=step){
        //initialize
		for(i=0;i<n;i++){
			a[i]=i;
			for(j=0;j<n;j++)
				b[i][j]=i+j;}
        for(j=0;j<n;j++){
			sum[j]=0;}
        ordinary(n);
		better(n);
        //change_steps
        if(n==50)
            step=10;
        if(n==100)
            step=100;
	}
	return 0;
}
