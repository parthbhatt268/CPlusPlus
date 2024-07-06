#include <iostream>
#include<unordered_map>
using namespace std;


int main() {

    int a[10] ={1,2,3,4,5,5,6,6,6,8};
    //1. Declare map
    unordered_map<int, int> myMap;

    //2. calculate frequency
    for(auto i : a){
        myMap[i]++;
    }

    //3. Now lets prints the myMap
    for(auto i : myMap){
        std::cout << "Key: " << i.first << ", Value: " << i.second << std::endl;
    }

    cout<<"New filter"<<endl;
    //4. Now print all element with frequency greater than 1
    for(auto i : myMap){
        if(i.second > 1){
            cout<<"Element: "<<i.first<<", Frequency: "<<i.second <<endl;
        }
    }
    return 0;
}