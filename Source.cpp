#include <iostream>
using namespace std;
bool Include(const char* s, const char c, const char a, int i)
{
	if (c == s[i])
		return true;
	if (s[i] != '\0')
		return Include(s,a, c, i + 1);
	else
		return false;
}

int main()
{
	char s[10] = "mnoneof";
	char c = 'no';
	char a = 'on';
	if (Include(s, c, a, 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}