#include <set>
#include <vector>
#include <algorithm>

class SetCover {
private:
    std::vector<std::set<int>> setList;
    std::vector<int> cost;
    std::vector<std::set<int>> resultIndex;
public:
    explicit SetCover(std::vector<std::set<int>> sL, std::vector<int> c) 
        : setList(sL), cost(c) {}

};