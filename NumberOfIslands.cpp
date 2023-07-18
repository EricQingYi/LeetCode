#include "NumberOfIslands.h"

//使用深度优先查找
int Solution::numIslands(std::vector<std::vector<char>>& grid){
    auto rNum = grid.size();
    if(rNum == 0)
        return 0;
    auto cNum = grid[0].size();
    int ans = 0;
    for(int r = 0; r < rNum; r++){
        for(int c = 0; c < cNum; c++){
            if(grid[r][c] == '1'){
                ans++;
                dfs(grid, r, c);
            }
        }
    }
    return ans;
}

void Solution::dfs(std::vector<std::vector<char>>& grid, int r, int c){
    auto rNum = grid.size();
    auto cNum = grid[0].size();
    grid[r][c] = '0';
    if(r-1 >= 0 && grid[r-1][c] == '1')
        dfs(grid, r-1, c);
    if(r+1 < rNum && grid[r+1][c] == '1')
        dfs(grid, r+1, c);
    if(c-1 >= 0 && grid[r][c-1] == '1')
        dfs(grid, r, c-1);
    if(c+1 < cNum && grid[r][c+1] == '1')
        dfs(grid, r, c+1);
}

//使用广度优先查找
int Solution::numIslands_bfs(std::vector<std::vector<char>>& grid){
    auto rNum = grid.size();
    if(rNum == 0)
        return 0;
    auto cNum = grid[0].size();
    int ans = 0;
    for(int r = 0; r < rNum; r++){
        for(int c = 0; c < cNum; c++){
            if(grid[r][c] == '1'){
                ans++;
                grid[r][c] == '0';
                que.push(std::make_pair(r,c));
                while (!que.empty()){
                    auto pos = que.front();
                    que.pop();
                    if(pos.first-1 >= 0 && grid[pos.first-1][pos.second] == '1'){
                        grid[pos.first-1][pos.second] = '0';
                        que.push(std::make_pair(pos.first-1, pos.second));
                    }
                    if(pos.first+1 < rNum && grid[pos.first+1][pos.second] == '1'){
                        grid[pos.first+1][pos.second] = '0';
                        que.push(std::make_pair(pos.first+1, pos.second));
                    }
                    if(pos.second-1 >= 0 && grid[pos.first][pos.second-1] == '1'){
                        grid[pos.first][pos.second-1] = '0';
                        que.push(std::make_pair(pos.first,pos.second-1));
                    }
                    if(pos.second+1 < cNum && grid[pos.first][pos.second+1] == '1'){
                        grid[pos.first][pos.second+1] = '0';
                        que.push(std::make_pair(pos.first, pos.second+1));
                    }
                }
            }
        }
    }
    return ans;
}