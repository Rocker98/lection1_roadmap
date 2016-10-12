#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector <string> vect;
string word;

int main(int argc, char *argv[])
{
    for (int i=0; i<6; i++)
    {
        cin>>word;
        vect.push_back(word);
    }

    sort(vect.begin(),vect.end());

    for (string value:vect)
    {
        cout<<value;
    }

    cout<<endl;
    return 0;
}
