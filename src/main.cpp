#include <iostream>
#include "setCover.hpp"

int main(int argc, const char *argv[]) {
    std::set<int> s1 = {4, 1, 3};
    int c1 = 5;
    std::set<int> s2 = {2, 5};
    int c2 = 10;
    std::set<int> s3 = {1, 4, 3, 2};
    int c3 = 3;
    std::vector<std::set<int>> v = {s1, s2, s3};
    std::vector<int> c = {c1, c2, c3};
    SetCover sc(v, c);
    std::set<int> temp_set;
    std::set_intersection(s1.begin(), s1.end(),
        s2.begin(), s2.end(), std::inserter(temp_set, temp_set.begin()));
    s1.insert(1);
    std::cout << s1.size();
    std::cout << temp_set.size(); 
    return 0;  
}