#include <iostream>
#include <fstream>
using namespace std;
ifstream f("graf.txt");
int n, m, a[100][100], viz[100];
void dfs(int x) {
	viz[x] = 1;
	cout << x << " ";
	for (int i = 0; i <= n; i++)
		if (a[i][x] == 1 && viz[i] == 0) dfs(i);
}
void dfs_visit() {
	for (int i = 1; i <= n; i++)
		if (viz[i] == 0) {
			dfs(i);
			cout << endl;
		}
}
int main() {
	int x, y;
	f >> n >> m;
	for (int i = 0; i <= m; i++)
	{
		f >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	cout << "Grupurile de copii prieteni sunt: " << endl;
	dfs_visit();
	return 0;
}

