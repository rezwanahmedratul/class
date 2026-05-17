#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Edge structure
struct Edge
{
    int to;
    int weight;

    Edge(int t, int w)
    {
        to = t;
        weight = w;
    }
};

// Dijkstra Function
void dijkstra(vector<vector<Edge>>& graph, int source)
{
    int n = graph.size();

    // Distance array
    vector<int> distance(n, INT_MAX);

    // Min Heap: {distance, node}
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    // Source initialization
    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int currentDistance = pq.top().first;
        int currentNode = pq.top().second;

        pq.pop();

        // Skip outdated entries
        if (currentDistance > distance[currentNode])
        {
            continue;
        }

        // Traverse adjacent edges
        for (Edge edge : graph[currentNode])
        {
            int nextNode = edge.to;
            int weight = edge.weight;

            // Relaxation
            if (distance[currentNode] + weight < distance[nextNode])
            {
                distance[nextNode] = distance[currentNode] + weight;

                pq.push({distance[nextNode], nextNode});
            }
        }
    }

    // Print shortest distances
    cout << "Shortest distances from node " << source << ":\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " = ";

        if (distance[i] == INT_MAX)
        {
            cout << "INF";
        }
        else
        {
            cout << distance[i];
        }

        cout << endl;
    }
}

int main()
{
    int vertices = 5;

    // Adjacency List
    vector<vector<Edge>> graph(vertices);

    // Add edges
    graph[0].push_back(Edge(1, 10));
    graph[0].push_back(Edge(4, 5));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(4, 2));

    graph[2].push_back(Edge(3, 4));

    graph[3].push_back(Edge(0, 7));
    graph[3].push_back(Edge(2, 6));

    graph[4].push_back(Edge(1, 3));
    graph[4].push_back(Edge(2, 9));
    graph[4].push_back(Edge(3, 2));

    int source = 0;

    dijkstra(graph, source);

    return 0;
}
