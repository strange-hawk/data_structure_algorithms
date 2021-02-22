#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define ipair pair<int, int>

vector<int> dsuf;


struct elem{
    int start;
    int end;
    int weight;
    elem(int s, int e, int w){
        start = s;
        end = e;
        weight = w;
    }
};

bool comp(elem &a, elem &b){
    return a.weight < b.weight;
}

int find(int vertex){
    if (dsuf[vertex]==-1)
        return vertex;
    return find(dsuf[vertex]);
}

void union_edge(int start, int end){
    dsuf[start]=end;
}
int main(){
    vector<elem> graph;
    int n;
    cout<<"enter no. of edges : ";
    cin>>n;
    cout<<"enter whitespace separated values of start, end and weights"<<endl;
    for(int i=0;i<n;i++){
        int s,e,w;
        cin>>s;
        cin>>e;
        cin>>w;
        graph.push_back(elem(s,e,w));
    }
    
    sort(graph.begin(), graph.end(), comp);
    n = graph.size();
    dsuf.resize(n,-1);

    cout<<"graph output........................"<<endl;
    vector<elem> graph_output;
    for(auto i : graph){
        int base_root_start = find(i.start);
        int base_root_end = find(i.end);
        if(base_root_end == base_root_start){
            continue;
        }
        else{
            union_edge(base_root_end, base_root_start);
            graph_output.push_back(i);
        }
    }
    cout<<"start"<<"  "<<"end"<<"   "<<"weight"<<endl;
    for(auto i: graph_output){
        cout<<i.start<<"   ->   "<<i.end<<"    "<<i.weight<<endl;
    }


    // vector<ipair> edges;
    // dsuf.resize(7,-1);
    // for(auto i: edges){
    //     int start = i.first;
    //     int end = i.second;

    //     int base_root_start = find(start);
    //     int base_root_end = find(end);
    //     if(base_root_start == base_root_end)
    //         continue;
    //     else{
    //         union_edge(base_root_start,base_root_end);
    //     }
    // }
}
