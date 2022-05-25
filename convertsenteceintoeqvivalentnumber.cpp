#include "bits/stdc++.h"
using namespace std;
string printSequence(string S)
{
    // code here.
    unordered_map<char,int> num={{'A',2},{'B',22},{'C',222},{'D',3},{'E',33},{'F',333},{'G',4},{'H',44},{'I',444},{'J',5},{'K',55},{'L',555},
    {'M',6},{'N',66},{'O',666},{'P',7},{'Q',77},{'R',777},{'S',7777},{'T',8},{'U',88},{'V',888},{'W',9},{'X',99},{'Y',999},{'Z',9999},{' ',0}};

    string ans="";
    int n=S.length();
    for(int i=0;i<n;i++)
    {
        int temp=num[S[i]];
        ans+=to_string(temp);
    }

    cout<<ans;
}

int main()
{
    string nums="SANKET";
    printSequence(nums);
}



// Good solution with good intution 
#include <bits/stdc++.h>
using namespace std;

// Function which computes the sequence
string printSequence(string arr[],
					string input)
{
	string output = "";

	// length of input string
	int n = input.length();
	for (int i=0; i<n; i++)
	{
		// Checking for space
		if (input[i] == ' ')
			output = output + "0";

		else
		{
			// Calculating index for each
			// character
			int position = input[i]-'A';
			output = output + arr[position];
		}
	}

	// Output sequence
	return output;
}

// Driver function
int main()
{
	// storing the sequence in array
	string str[] = {"2","22","222",
					"3","33","333",
					"4","44","444",
					"5","55","555",
					"6","66","666",
					"7","77","777","7777",
					"8","88","888",
					"9","99","999","9999"
				};

	string input = "GEEKSFORGEEKS";
	cout << printSequence(str, input);
	return 0;
}
