#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
#include <functional>
#include <cmath>

#define FOR(i,x,y) for(int i=(x);i<(y);i++)
#define RFOR(i,x,y) for(int i=(y)-1;i>=(x);i--)
#define REP(i,x) for(int i=0;i<(x);i++)
#define RREP(i,x) for(int i=(x)-1;i>=0;i--)
#define all(x) (x).begin(),(x).end()
// #define int long long

// conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#define dump(x)  cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl
#else
#define eprintf(...) 42
#define dump(x) 42
#define debug(x) 42
#endif

typedef long long ll;

using namespace std;

const int MAX_N = 100000;
int N;
int A[MAX_N];

int solve() {
    return 0;
}

signed main() {
    // to shorten execution time for iostream
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N;
    REP(i,N) cin >> A[i];
    cout << solve() << "\n";
    return 0;
}

