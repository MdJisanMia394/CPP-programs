#include<iostream>
using namespace std;

const int N = 105; // this should be > n and m => means > 100
char s[N][N]; // declare globally
int n, m;

// check if the cell s[i][j] is inside the 2D array
bool is_inside(int i, int j) {
  if (i >= 0 and i < n and j >= 0 and j < m) {
    return true;
  }
  return false;
}

// check if the cell s[i][j] is inside the 2D array
// and if it is, then also check if the cell contains 'x'
bool is_valid(int i, int j) {
  // if the cell is not inside the array then nothing to check for, so just return true as it is also valid
  if (!is_inside(i, j)) return true;
  if (s[i][j] == 'x') {
    return true;
  }
  return false;
}

int main() {
  cin >> n >> m; // input the global variables
  // let's do 0-indexing
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int x, y; cin >> x >> y;
  --x; --y; // convert it to 0-indexed as we have considered the 2D string s[][] as 0-indexed

  // now check for all 8 niehgbours
  if (is_valid(x - 1, y) and is_valid(x, y - 1) and is_valid(x + 1, y) and is_valid(x, y + 1)
    and is_valid(x - 1, y - 1) and is_valid(x - 1, y + 1) and is_valid(x + 1, y - 1) and is_valid(x + 1, y + 1)) {
    cout << "yes\n";
  }
  else {
    cout << "no\n";
  }
  return 0;
}

