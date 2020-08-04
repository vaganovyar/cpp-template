#include <bits/stdc++.h>

using namespace std;

//macros
#define max3(a, b, c) max(a, max(b, c));
#define min3(a, b, c) min(a, min(b, c));

//fast types
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef pair<ll, ii> iii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vi> matrix;

//consts
const ull INF_U = 18446744073709551614;
const ll INF = 9223372036854775806;
const ll INF_ = -9223372036854775806;
double pi = 2 * acos(0.0);

//length of two points
double lenght(ii a, ii b){
    return sqrt(pow((a.first - b.first), 2) + pow((a.second - b.second), 2));
}
//upper ceil of a / b
int rmod(ll a, ll b){
    float x = a / b;
    if (x > int(x))
        x = int(x) + 1;
    return x;
}
//-1 if s not in vector, else index
int binSearch(vi n, ll s){
    ull left = 0;
    ull right = n.size();
    ull mid = rmod((right + left), 2);
    ull last_mid = INF_U - 1;
    while (n[mid] != s){
        if (n[mid] < s)
            left = mid;
        else
            right = mid;
        last_mid = mid;
        mid = rmod((left + right), 2);
        if (last_mid == mid){
            return -1;
        }
    }
    return mid;
}
//nok(a, b) = (a * b) / nod(a, b)
ull nod(ull a, ull b){
    while (a % b != 0){
        ull c = a % b;
        a = b;
        b = c;
    }
    return b;
}
//sum of vector
ll v_sum(vi a){
    ll s = 0;
    for (ll i = 0; i < a.size(); i++){
        s += a[i];
    }
    return s;
}
//minimum number in vector
ll v_min (vi a){
    ll minimum;
    minimum = INF;
    for (ll i = 0; i < a.size(); i++){
        if (a[i] < minimum)
            minimum = a[i];
    }
    return minimum;
}
//maximum number in vector
ll v_max (vi a){
    ll maximum;
    maximum = INF_;
    for (ll i = 0; i < a.size(); i++){
        if (a[i] < maximum)
            maximum = a[i];
    }
    return maximum;
}

//debug
#define watch(x) cout << (#x) << " is " << (x) << endl;
void watch_v(vi a){
    for (ull i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void watch_v_p(vii a){
    for (ull i = 0; i < a.size(); i++){
        cout << "{" << a[i].first << ", " << a[i].second << "} ";
    }
    cout << endl;
}
void watch_matrix(matrix a){
    for (ull i = 0; i < a.size(); i++){
        for (ull j = 0; j < a[i].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void code(){
    //your code here

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ull num = 1;
    //cin >> num;
    for (int i = 0; i < num; i++){
        code();
    }
    return 0;
}
