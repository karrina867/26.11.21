//karina Baslyk 26.11.21
#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main() {
	/*char s;
	s = 'a';//в переменную s записывается символ a*/
	const int n = 3;
	char field[n][n];
	//заполнить масив случайным образом буквами x,o.вывести масив на экран.
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t = rand() % 2;
			if (t == 0)field[i][j] = 'x';
			else field[i][j] = 'o';
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "|---|---|---|" << endl;
		for (int j = 0; j < n; j++) {
			cout <<"| "<<field[i][j] << ' ';
		}
		cout <<'|'<< endl;
    }
	cout << "|---|---|---|" << endl;
	return 0;
}