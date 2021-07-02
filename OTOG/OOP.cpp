#include <bits/stdc++.h>
using namespace std;
template <typename Template = int>
inline void output(Template temporary){
    cout << temporary;
}
template <typename Template = int>
Template input(){
    return *istream_iterator<Template>(cin);
}
class Dijkstra{
    private :
        int node, edge, source, target;
        int  distance[10005];
        vector<pair<int, int>> v[10005];
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    public :
        Dijkstra(int n){
            node = n;
        }
        void add(int from, int to, int weight){
            v[from].push_back({to, weight});
            v[to].push_back({from, weight});
        }
        void addPath(int e){
            edge = e;
            for(int i = 0; i < edge; i++){
                add(input(), input(), input());
            }
        }
        void innitialize(int src){
            source = src;
            for(int i = 0; i < node; i++)
                distance[i] = 99999;
            distance[source] = 0;
            q.push({distance[source], source});
        }
        void dijkstraMethod(){
            while(!q.empty()){
                int now_node = q.top().second;
                int now_distance = q.top().first;
                //cout << now_node << " " << now_distance << "\n\n";
                q.pop();
                for(auto e : v[now_node]){
                    int to_dist = e.second;
                    int to_node = e.first;
                    //cout << "----------";
                    //cout << to_node << " " << to_dist;
                    //cout << "----------";
                    if(now_distance + to_dist < distance[to_node]){
                        //cout << to_node << " " << distance[to_node] << "\n\n";
                        //cout << now_distance + to_dist << endl;
                        distance[to_node] = now_distance + to_dist;
                        //cout << to_node << " " << distance[to_node] << "\n\n";
                        q.push({distance[to_node], to_node});
                    }
                }
            }
        }
        void getDistance(){
            for(auto e : distance){
                cout << e << " ";
            }
        }
};
int main(){
    int node, edge, source, target;
    cin >> node >> edge >> source >> target;
    Dijkstra dijkstra(node);
    dijkstra.addPath(edge);
    dijkstra.innitialize(source);
    dijkstra.dijkstraMethod();
    dijkstra.getDistance();
    return 0;
}