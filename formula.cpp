#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float avg(std::vector<int>array) {
    int n = array.size();
    int sum = 0;
    for (int element : array) {
        sum+=element;
    }
    return (float) sum/n;
}


int main(){
    vector<int>arr;
    cout<<"Len of arr"<<endl;
    int n,x;
    cin>>n;
    for (int i=0;i<n;++i){
        cout<<"Num"<<endl;
        cin>>x;
        arr.push_back(x);
    }
    float av = avg(arr);
    float s=0;
    for (int i=0;i<n;++i){
        s += (arr[i] - av)*(arr[i] - av);
    }
    s= sqrt(s/n);
    cout<<s<<endl;
    return 0;
}
