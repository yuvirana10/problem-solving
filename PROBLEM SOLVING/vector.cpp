#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v();
    
   
    cout << v.size()<<" ";
    cout << v.capacity() << endl;
     v.push_back(1);
     cout << v.size()<<" ";
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.size() <<" ";
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.size() <<" ";
    cout << v.capacity() << endl;
    v.push_back(4);
    cout << v.size() <<" ";
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.size() <<" ";
    cout << v.capacity() << endl;
    v.push_back(6);
    cout << v.size() <<" ";
    cout << v.capacity() << endl;
    v.push_back(7);
    cout << v.size() <<" ";
    cout << v.capacity() << endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    for(auto i:v)
    cout<<i<<" ";
    return 0;
}