#reverse a vector
#include <iostream> 
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    for(int c:vec)
        cout << c<< endl;
    
    reverse(vec.begin(),vec.end());
    
    for(int c:vec)
        cout << c<< endl;
    return 0;
}
