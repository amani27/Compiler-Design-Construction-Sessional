#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int flagc = 0, flagb = 0, i;

    cout << "Enter a string: ";
    cin >> str;

    //if(str.length()==1 && str[0]=='c') cout << str << " is accepted under rule 'ca*' " << endl;
    //else if(str.length()==1 && str[0]=='b')  cout << str << " is accepted under rule 'b+c*' " << endl;
  
	if(str[0]=='c') 
	{
		if(str.length()==1) flagc=1;
		else 
		{
			   for(i=1; i<str.length(); i++)
				{
					if(str[i]!='a')
					{
						flagc = 0;
						break;
					}
					else flagc = 1;
				}		
		}
	}

 	if(str[0]=='b') 
	{
		if(str.length()==1) flagb=1;
		else 
		{	  
			for(i=1; i<str.length(); i++)
			{
				if(str[i]!='b'){
				    if(str[i]=='c'){
						flagb = 1;
						//break;
					}
					else{
						flagb	 = 0;
						//break;				
					}
				}
			}
		}
	}

    if(flagc==1)  cout << str << " is accepted under rule 'ca*' " << endl;
    else if(flagb==1)  cout << str << " is accepted under rule 'b+c*' " << endl;
	else cout << str << " is not recognized by any of these grammar." << endl;

    return 0;
}
