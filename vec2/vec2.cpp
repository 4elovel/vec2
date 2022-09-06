#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int res = 0;
	int j = 0;
	srand(NULL);
    vector <int> vec;
	
	for (size_t i = 0; i < 365; i++)
	{
		vec.push_back(rand() % 2);
		cout << vec[i] << " ";
	}
	for (auto i = vec.begin(); i < vec.end(); i++)
	{
		if (*i == 1) {
			res = j;
			break;
		}
		j++;
	}
	cout << endl << endl << "First element with value 1 have an serial number " << res << endl;
}

