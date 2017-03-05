#include<iostream>
#include<vector>
#define loop(i,j,k) for(int i = j ; i < k ; i++)
using namespace std;

void coin_denom(vector<int>coins,int value)
{
	int array[coins.size()][value+1];
	
	memset(array,0,sizeof(array));
	loop(i,0,coins.size()) array[i][0]=0;
	loop(i,0,value+1) array[0][i]=i;
	
	loop(i,1,coins.size())
	{
		loop(j,1,value+1)
		{
			if(coins[i-1]<=j)
			{
				array[i][j]=min(array[i-1][j],1+array[i][j-coins[i-1]]);
			}
			else{
			array[i][j]=array[i-1][j];	
			}
		}
	
	}
	loop(i,0,coins.size())
	{
		loop(j,0,value+1)
		{
			cout<<array[i][j]<<",";
		}
		cout<<endl;
	}
	
}
int main()
{
	vector<int>coins;
	int value=11;
	coins.push_back(1);
	coins.push_back(5);
	coins.push_back(6);
	coins.push_back(8);
	coin_denom(coins,value);	
}
