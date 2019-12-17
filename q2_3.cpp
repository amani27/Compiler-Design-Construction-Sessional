#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    int size2, size1;

    cout << "Enter a string: ";
    cin >> str1;

    cout << "Enter another string: ";
    cin >> str2;

    for(int i=0; str1[i]!='\0'; i++){
        size1++;
    }

    for(int i=0; str2[i]!='\0'; i++){
        size2++;
    }

    // cout << size1 << endl << size2;

    if(size1>size2) cout << str1 << " is greater than " << str2 << endl;
    else if(size1<size2) cout << str1 << " is less than " << str2 << endl;
    else  cout << str1 << " is equal to " << str2 << endl;

    return 0;
}