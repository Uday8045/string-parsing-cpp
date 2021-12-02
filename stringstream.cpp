#include <iostream>
#include <sstream>
using namespace std;
#include <vector>
int main()
{
    vector <int> o;
    string s1= "4567,123.67,897";
    stringstream ss(s1);
    int i;

    int t;
    char c;

    while(ss>>t)
    {

        o.push_back(t);
        ss>>c;

    }

    for (i=0;i<o.size();i++)
    cout<<o[i]<<endl;


}
