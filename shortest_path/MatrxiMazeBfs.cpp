//shortest path using bfs in matrix[][]

#include <bits/stdc++.h>
using namespace std;
#define ROW 9
#define COL 10
int foo=10;
struct point
{
	int x;
	int y;
};
int row[]={-1,0,0,1};
int col[]={0,-1,1,0};
int a=10;
struct qnode
{
	int dist;
	point pt;	
};
bool check(int row,int col)
{
	return (row>=0 && row< ROW) && (col>=0 && col<COL);
}
int bfs(int mat[][COL],point source,point dest)
{
	bool visited[ROW][COL];
    memset(visited, false, sizeof visited);
	queue<qnode> q;
	qnode s = {0,source};
	q.push(s);
	visited[source.x][source.y]=true;
	while(!q.empty())
	{
		qnode current = q.front();
		point pt = current.pt;
		
		if(pt.x==dest.x && pt.y==pt.y)
		return current.dist;
		
		q.pop();
		
		for(int i = 0 ; i<4;i++)
		{
			
			int row1 = pt.x+row[i];
			int col1  = pt.y+col[i];
			
			if(check(row1,col1) && mat[row1][col1] && !visited[row1][col1])
			{
				qnode newNode = {current.dist+1,{row1,col1}};
				
				visited[row1][col1]=true;
				q.push(newNode);
			}			
			
			
		}
		
	}
	

}
void ass(vector<vector<int> > vc)
{

}
int main()

{
	vector<int>v(3,0);
	vector< vector<int> > vc(5,v);
	vc[0][0]=1;
	ass(vc);
	 int mat[ROW][COL]=
    {
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }
    };
	
 	point source = {0,0};   	
 	point dest = {3, 4};
 //	bfs(mat,source,dest);
 	cout<<bfs(mat,source,dest);
 	
 	
}
