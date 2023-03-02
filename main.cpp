#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(const string& input, int k)
{
	if (input.size() % k)
	{
		cout << "Not periodic "<< k << endl;
		return false;
	}
	string x;
	for (int i = 0; i < k; i++)
	{
		x.push_back(input[i]);
	}
	for (int i = 0; i < input.size(); i = i + k)
	{
		for (int j = 0; j < k; j++)
		{
			if (input[i + j] != x[j])
			{
				cout << "Not periodic " << k << endl;
				return false;
			}
		}
	}
	cout << "Is periodic " << k << endl;
	return true;
		

	
}

int main()
{
	string a = "abcabcabc";
	string b = "qwertyqwertyqwertyqwertyqwerty";
	string c = "xyzxyzxyvxyz";
	IsKPeriodic(a, 3);
	IsKPeriodic(a, 2);
	IsKPeriodic(b, 3);
	IsKPeriodic(b, 6);
	IsKPeriodic(c, 3);



	return 0;
}