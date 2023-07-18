#ifndef __NUMBEROFISLANDS_H__
#define __NUMBEROFISLANDS_H__
#include <vector>
#include <queue>
class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid);
    int numIslands_bfs(std::vector<std::vector<char>>& grid);
private:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c);
    std::queue<std::pair<int, int>> que;
};
#endif //__NUMBEROFISLANDS_H__