#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    // 行列AとBの定義
    vector<vector<long>> A(n, vector<long>(m));
    vector<vector<long>> B(m, vector<long>(l));

    // 行列Aの入力
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    // 行列Bの入力
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < l; ++j) {
            cin >> B[i][j];
        }
    }

    // 行列C（結果を保存する行列）の初期化
    vector<vector<int>> C(n, vector<int>(l, 0));

    // 行列の積計算
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            for (int k = 0; k < m; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 結果の出力
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            cout << C[i][j];
            if (j < l - 1) cout << " ";  // 行の最後以外では空白を出力
        }
        cout << endl;
    }

    return 0;
}