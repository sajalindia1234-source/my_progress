class Solution {
public:



bool BFS(int start, vector<vector<int>>& isConnected, int n,vector<bool> &visited) {

queue<int> q;
    if(visited[start])return false;
    else
     visited[start] = true;
    q.push(start);

    while (!q.empty()) {

        int node = q.front();
        q.pop();
       for(int neighbour = 0; neighbour < n; neighbour++) {

    if(isConnected[node][neighbour] == 1 && !visited[neighbour]) {

        visited[neighbour] = true;
        q.push(neighbour);

    }
}
    }
    return true;
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected[0].size();
        vector<bool> visited(n, false);
        int count=0;
        for(int i =0; i<n;i++){
if(BFS(i,isConnected,n,visited))count++;

        }

return count;
    }
};