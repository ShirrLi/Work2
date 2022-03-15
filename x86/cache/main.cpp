#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    LARGE_INTEGER t1, t2, tc;
    int n,step=5,i,j,count;
	int a[600],b[600][600],sum[600];

	for(n=5;n<=600;n+=step){
        //initialize
		for(i=0;i<n;i++){
			a[i]=i;
			for(j=0;j<n;j++)
				b[i][j]=i+j;}
        for(j=0;j<n;j++){
			sum[j]=0;}

        //count_time
        QueryPerformanceFrequency(&tc);
        QueryPerformanceCounter(&t1);
        count=0;
        while(count<1000){
            count++;
            for(j=0;j<n;j++){
                for(i=0;i<n;i++)
                    sum[j]+=b[i][j]*a[i];}}
        QueryPerformanceCounter(&t2);
        cout << ((t2.QuadPart - t1.QuadPart)*1000.0 / tc.QuadPart)<<",";

        //change_steps
        if(n==50)
            step=10;
        if(n==100)
            step=100;
    }
	return 0;
}
