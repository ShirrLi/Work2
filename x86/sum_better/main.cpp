#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
    LARGE_INTEGER t1, t2, tc;
    int i,n,sum,sum1,sum2,a[300000],step=1,count;

	for(n=2;n<=300000;n=n*2){
        //initialize
        for(i=0;i<n;i++)
        a[i]=i;

         //count_time
        QueryPerformanceFrequency(&tc);
        QueryPerformanceCounter(&t1);
        count=0;
        while(count<1000){
            count++;
            sum=0;sum1=0;sum2=0;
        for(i=0;i<n;i+=2){
            sum1+=a[i];
            sum2+=a[i+1];}
        sum=sum1+sum2;}
        QueryPerformanceCounter(&t2);
        cout <<((t2.QuadPart - t1.QuadPart)*1000.0 / tc.QuadPart)<<",";

        //change_steps
	}
	return 0;
}
