/*	Recursive code to implement DFS
 *
 * 	Note : Dfs can be implemented by both ways Recursivly as well as Iterativly
 * 	       but BFS can be implemented through only Iterativly
 * */

#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> vec;
vector <bool> visited;

void dfs_r(int s)
{
        visited[s]=true;
        cout << s << " ";
        for(int i =0;i< vec[s].size();++i ) {
                if(visited[vec[s][i]] == false)
                        dfs_r(vec[s][i]);
        }
}

void initialize() {			// Function to mark all nodes non visited 
        for(int i = 0;i < visited.size();++i)
                visited[i] = false;
}
void dfs(const vector<vector<int>> & vec, int s) {
	stack <int> stk;
	stk.push(s);
	visited[s]= true;
	cout << "DFS Using Stack "<<endl;
	while(!stk.empty()) {
		int node = stk.top();
		stk.pop();
		cout << node << " ";
		for(int i=0; i < vec[node].size(); ++i) {
			if(!visited[vec[node][i]]) {
				stk.push(vec[node][i]);
				visited[vec[node][i]] = true;
			}
		}
	}
	cout << endl;
}

int main()
{
        int nodes, edges, x, y;
        cout << "Enter Nodes and Edges"<< endl;
        cin >> nodes;
        cin >> edges;
        vec.resize(nodes+1);
        //visited.resize(nodes+1,false); // Marking all nodes false as non visited {Use when only 1 version of dfs is getting used}
        visited.resize(nodes+1);
	for(int i =0;i<edges; ++i) {
                cin >> x >> y;
                vec[x].push_back(y);
                vec[y].push_back(x);
        }
        initialize();
	cout << "DFS through Recursion" << endl;
        dfs_r(1);
	cout << endl;
	initialize();
	dfs (vec, 1);
        return 0;
}

