#include<bits/stdc++.h>
// #include<iostream>
// #include <map>
// #include<vector>

using namespace std;
int main(){
    //define a vector with 10 elements all initialise to 1
    vector<int>v(10,1);
    for (int i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Push_back
    v.push_back(2);
    for (int i=0;i<11;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //pop_back


    v.pop_back();
    for (int i=0;i<10;i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
vector<int>a;
v.assign(10,1);
    for (int i=0;i<10;i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;

vector<int>b(5,10);
b.push_back(11);
b.clear();
b.push_back(5);
cout<< b[0]<<endl;

// (vector<int>::iterator) = auto
auto it =b.end();
cout<<(*(--it))<<endl;

for(int x : v){
    cout<< x<< " ";

}
cout << endl;



map<int,int>m;
for (int i=0;i<10;i++){
    m[i]=1;
}
for(auto it2:m)
{
    cout<<it2.first<<" "<<it2.second<< endl;
}
    return 0;
}
