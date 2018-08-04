#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
bitset<105> initVisited, curVisited;
bool first;


class Graph{
    int V;
    vector<vi> adjList;
public:
	Graph(int v);
	void DFS(int s, int e);
	void addEdge(int v, int w);
};

Graph::Graph(int v){
	this->V = v;
	adjList.assign(v, vi());
}

void Graph::addEdge(int v, int w){
	adjList[v].push_back(w);
}

void Graph::DFS(int s, int e){
	bitset<105> *visited;
	if(first) visited = &initVisited;
	else visited = &curVisited;
	
	visited->set(s);
	if(s == e) return;
	
	for(auto i : adjList[s])
		if(!visited->test(i)) DFS(i, e);
}

void outputStyle1(int v){
	cout << "\n+";
	for(int i = 0; i < v * 2 -1; i++) cout << "-";
	cout << "+\n|";
}

void outputStyle2(int v){
	cout << "\n+";
	for(int i = 0; i < v * 2 -1; i++) cout << "-";
	cout << "+\n";
}

int main(){
	
	int tc, count = 1;
	cin >> tc;
	while(tc--){
		int v;
		cin >> v;
		Graph g(v);
		for(int i = 0; i < v; i++){
			for(int j = 0; j < v; j++){
				int e;
				cin >> e;
				if(e) g.addEdge(i, j);
			}
		}
		
		first = true;
		initVisited.reset();
		g.DFS(0, v);
		first = false;
		
		cout << "Case " << count++ << ":";
		
		for(int i = 0; i < v; i++){
			curVisited.reset();
			g.DFS(0, i);
			outputStyle1(v);
			
			for(int j = 0; j < v; j++){
				if(initVisited.test(j) && (i == j || !curVisited.test(j))) cout << "Y";
				else cout << "N";
				cout << "|"; 
			}
		}		
		outputStyle2(v);	
	}
}
