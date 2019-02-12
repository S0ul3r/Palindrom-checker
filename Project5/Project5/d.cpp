#include <iostream>
#include <cctype>

using namespace std;

bool i(char *tab, int n);

int main() {
	char tab[10] = { 'k','o','m','m','p','p','m','m','o','k'};
	bool x;
	x = i(tab, 10);
	cout << x;
	char c;
	cin >> c;
}

bool i(char *tab, int n) {
	for (int i = 0; i < 10; i++) {
		cout << tab[i];
	}
	cout << "\n";
	for (int i = 0; i < 10; i++) {
		n--;
		if (tab[i] != tab[n]) {
			return false;
		}
	}
	return true;
}