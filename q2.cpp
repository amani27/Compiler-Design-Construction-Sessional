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

	// Using swap() built-in function
    //swap(str1, str2);

	// Using strcpy() built-in function
	//strcpy(temp, str1); 
 	//strcpy(str1, str2); 
  	//strcpy(str2, temp); 
	
	// Without using any built-in functions
	temp = str1;
	str1 = str2;
	str2 = temp;

    cout << "Swapped strings are: " << " str1 = " << str1 << " str2 = " << str2 << endl;


    return 0;
}
