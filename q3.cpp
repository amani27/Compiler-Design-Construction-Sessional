#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int flag=0;
    int size = str.size();

    for(int i=0; i<size; i++)
    {
        if(str[0]=='/' && str[1]=='/') flag = 1;
        else if(str[0]=='/'  && str[1]=='*' && str[size-1]=='/' && str[size-2]=='*') flag = 1;
    }

    if(flag==1) cout << "It is a comment" << endl;
    else cout << "It is not a comment" << endl;


    return 0;
}
