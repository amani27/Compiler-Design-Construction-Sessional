#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2, temp;

    cout << "Enter a string: ";
    cin >> str1;

    cout << "Enter another string: ";
    cin >> str2;

    cout << "Entered strings are: " << " str1 = " << str1 << " str2 = " << str2 << endl;

    //swap(str1, str2);

	//strcpy(temp, str1); 
 	//strcpy(str1, str2); 
  	//strcpy(str2, temp); 

	temp = str1;
	str1 = str2;
	str2 = temp;

    cout << "Swapped strings are: " << " str1 = " << str1 << " str2 = " << str2 << endl;


    return 0;
}
