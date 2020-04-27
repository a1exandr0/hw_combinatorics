#include </Users/a1exandr0/geanyCompetetiveCPP/stdc++.h>
#define ll long long

using namespace std;

void test_case() {
    int N;
    scanf("%dl", &N);
    ll confMatrix[N][N];

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            scanf("%lld", &confMatrix[i][j]);
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j){
            for (int k = 0; k < N; ++k) {
                ll temp = confMatrix[j][i] + confMatrix[i][k];
                if(confMatrix[j][k] > temp) {
                    confMatrix[j][k] = temp;
                }
            }
        }
    }

    ll ans = 0;
    int R;
    scanf("%dl", &R);

    for (int i = 0; i < R; ++i) {
        int from, to;
        scanf("%dl", &from);
        scanf("%dl", &to);
        ans += confMatrix[from-1][to-1];
    }

    cout << ans << endl;
}


int main() {
    int T;
    scanf("%dl",  &T);
    for (int test=1; test <= T; test++) {
        printf("Case #%d: ", test);
        test_case();
    }
    return 0;
}