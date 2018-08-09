#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class Graph{
	int V;
	vector<vi> adjList;
	bool *visited;
public:
	Graph(int v);
	void addEdge(int a , int b);
	void DFS(int s);
	int countConnected();
};

Graph::Graph(int v){
	this->V = v;
	adjList.assign(v, vi());
	visited = new bool[v];
	memset(visited, false, v);
}

void Graph::addEdge(int e, int w){
	adjList[e].push_back(w);
	adjList[w].push_back(e);
}

void Graph::DFS(int s){
	visited[s] = true;
	for(auto i : adjList[s]){
		if(!visited[i]) DFS(i);
	}
}
	
int Graph::countConnected(){
	int count = 0;
	for(int i = 0; i < V; i++){
		if(!visited[i]){
			DFS(i);
			count++;
		}
	}
	
	return count;
}
int main(){
		
	int tc;
	string s;
	scanf("%d\n\n", &tc);
	
	for(int i = 0; i < tc; i++){
		getline(cin, s);
		int nodes = s[0] - 'A' + 1;
		Graph g(nodes);
		
		while(true){
			if(!getline(cin, s) || s.empty()) break;
			g.addEdge(s[0] - 'A', s[1] - 'A');
		}
		
		long long ans = g.countConnected();
		cout << ans << "\n";
		if(i  < tc -1) cout << endl;	
	}
}
