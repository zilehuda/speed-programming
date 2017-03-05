//witout repetations
#include<iostream>
#include<algorithm>
using namespace std;


int knapsack(int W,int val[],int wt[],int n)
{
	int k[n+1][W+1];
	for(int i=0;i<=n;i++)
	{
		cout<<i<<endl;
		for(int j=0;j<=W;j++)
		{
			if(i==0||j==0)
			{
				k[i][j]=0;
			}
			else if(wt[i-1]<=j)
			{
				k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
				//cout<<i<<" "<<j<<endl;
			}
			else
			{
					k[i][j]=k[i-1][j];
			}
		}
	}
	for(int i = 0;i<=n;i++)
	{
		for(int j =0;j<=W;j++)
		{
			cout<<k[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int val[] = {3,7,2,9};
    int wt[] = {2,3,4,5};
    int  W = 5;
	knapsack(W,val,wt,4);
}
