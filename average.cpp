#include <iostream>
#include <vector>

float avg(std::vector<int>array) {
    int n = array.size();
    int sum = 0;
    for (int element : array) {
        sum+=element;
    }
    return (float) sum/n;
}

int main(){
    std::vector<int>array;
    std::cout<<"Len of Arr"<<std::endl;
    int x, m;
    std::cin>>x;
    for (int i=0;i<x;++i) {
        std::cout<<"Num"<<std::endl;
        std::cin>>m;
        array.push_back(m);
    }
    std::cout<<"Avarage:"<<avg(array)<<std::endl;
    return 0;
//    std::sort(array.begin(),array.end());
}
