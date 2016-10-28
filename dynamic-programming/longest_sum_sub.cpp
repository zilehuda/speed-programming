
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<fstream>

#include<algorithm>
#include<math.h>
using namespace std;
int seq(vector<int> a, int n);
	int q=0;
	vector <int> b;
int main()
{
		int aa[6]={-1,-2,-3,-4,-5,-3};
		vector<int> a(aa,aa+6);
		seq(a,5);
			
	cout<<*max_element(b.begin(),b.end());
}

int seq(vector<int> a,int n)
{
	
	if(n<0)
	{
		return 0;
	}
	else
	{
		q = (max(seq(a,n-1)+a[n],a[n]));
		b.push_back(q);
	
		return q;
	}
}
