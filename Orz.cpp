//
// Created by akshat on 12/11/20.
//
#pragma comment(linker, "/stack:256000000")
#pragma gcc optimize("O3")
#pragma gcc target("sse4")
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define FAST_BUILTINS
//#define MULTIPRECISION
//#define BIG_FACTORIZATOR
//#define TREE
//#define lazySegtree
//#define mergesorttree
#define FOURIER_TRANSFORM
#define mp make_pair
#define gl getline
#define pb push_back
#ifndef ONLINE_JUDGE
#define _getchar_nolock getchar_unlocked
#define pc putchar_unlocked
#else
#define pc _putchar_nolock
#endif
#define eb emplace_back
#define ob pop_back
#define sz(x) ((int)(x.size()))
#define UM unordered_map
#define US unordered_set
#define X first
#define Y second
#define whole(x) x.begin(), x.end()

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <nmmintrin.h>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>
#include <cmath>
#include <climits>
#include <bitset>
#include <random>
#include <ctime>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <sstream>
#include <stack>

using namespace std;
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef pair<int, int> pii;
typedef vector <pii> vpii;
typedef vector <vpii> vvpii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector <vi> vvi;
typedef vector <vvi> vvvi;
typedef vector<bool> vb;
typedef vector <vb> vvb;
typedef vector <pll> vpll;
typedef vector <ll> vl;
typedef vector <vl> vvl;
typedef pair<bool, ll> pbl;
typedef vector <pbl> vpbl;
typedef vector<double> vd;
typedef vector <vd> vvd;
typedef vector <pdd> vpdd;
typedef vector <string> vs;
typedef pair<ul, int> pui;
typedef vector <pui> vpui;
typedef vector <ul> vu;
#define F1 Flusher(); pc(' ');
#define F2 Flusher(); pc('\n');
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define rep(i, a, b) for(int i=a;i<=b;i++)
#define repr(i, a, b) for(int i=a;i>=b;i--)
template<typename T>
int SIZE(T (&t)) { return t.size(); }
template<typename T, size_t N>
int SIZE(T (&t)[N]) { return N; }
string to_string(char t) { return "'" + string({t}) + "'"; }
string to_string(bool t) { return t ? "true" : "false"; }
string to_string(const string &t, int x1 = 0, int x2 = 1e9) {
    string ret = "";
    for (int i = min(x1, SIZE(t)), _i = min(x2, SIZE(t) - 1); i <= _i; ++i) { ret += t[i]; }
    return '"' + ret + '"';
}
string to_string(const char *t) {
    string ret(t);
    return to_string(ret);
}
template<size_t N>
string to_string(const bitset <N> &t, int x1 = 0, int x2 = 1e9) {
    string ret = "";
    for (int i = min(x1, SIZE(t)); i <= min(x2, SIZE(t) - 1); ++i) { ret += t[i] + '0'; }
    return to_string(ret);
}
template<typename T, typename... Coords>
string to_string(const T (&t), int x1 = 0, int x2 = 1e9, Coords... C);
template<typename T, typename S>
string to_string(const pair <T, S> &t) { return "(" + to_string(t.first) + ", " + to_string(t.second) + ")"; }
template<typename T, typename... Coords>
string to_string(const T (&t), int x1, int x2, Coords... C) {
    string ret = "[";
    x1 = min(x1, SIZE(t));
    auto e = begin(t);
    advance(e, x1);
    for (int i = x1, _i = min(x2, SIZE(t) - 1); i <= _i; ++i) {
        ret += to_string(*e, C...) + (i != _i ? ", " : "");
        e = next(e);
    }
    return ret + "]";
}
template<int Index, typename... Ts>
struct print_tuple {
    string operator()(const tuple<Ts...> &t) {
        string ret = print_tuple<Index - 1, Ts...>{}(t);
        ret += (Index ? ", " : "");
        return ret + to_string(get<Index>(t));
    }
};
template<typename... Ts>
struct print_tuple<0, Ts...> {
    string operator()(const tuple<Ts...> &t) { return to_string(get<0>(t)); }
};
template<typename... Ts>
string to_string(const tuple<Ts...> &t) {
    const auto Size = tuple_size < tuple < Ts...>>::value;
    return print_tuple<Size - 1, Ts...>{}(t);
}
void dbgr() { ; }
template<typename Heads, typename... Tails>
void dbgr(Heads H, Tails... T) {
    cout << to_string(H) << " | ";
    dbgr(T...);
}
void dbgs() { ; }
template<typename Heads, typename... Tails>
void dbgs(Heads H, Tails... T) {
    cout << H << " ";
    dbgs(T...);
}
#define dbgv(...) cout << to_string(__VA_ARGS__) << endl;
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]: "; dbgv(__VA_ARGS__);
#define dbgr(...) dbgr(__VA_ARGS__); cout << endl;
#define dbgm(...) cout << "[" << #__VA_ARGS__ << "]: "; dbgr(__VA_ARGS__);
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(ld x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template<typename T, typename V>
void __print(const pair <T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template<typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i: x) cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}
template<typename A, typename B, typename C>
string to_string(tuple <A, B, C> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
template<typename A, typename B, typename C, typename D>
string to_string(tuple <A, B, C, D> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " +
           to_string(get<3>(p)) + ")";
}
void debug_out() { cerr << endl; }
template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#ifndef ONLINE_JUDGE
#define debugt(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debugt(...) 42
#endif
constexpr ll inf = 2223372036854775807;
constexpr int mod1 = (1e9 + 7);
constexpr int mod2 = (998244353);
constexpr int MAX = (1e5 + 3);
namespace FastIO {
    struct Reader {
    private:
        FILE *file;
        std::vector<char> buffer;
        int pos;
        bool was;

        void read() {
            if (!buffer.empty()) {
                buffer.resize(fread(&buffer[0], 1, (int) buffer.size(), file));
                pos = 0;
            }
        }

    public:
        Reader(FILE *file_ = stdin, const int size_ = 1 << 16) : file(file_), buffer(size_, '\0'), pos(size_),
                                                                 was(true) {}

        operator bool() const { return was; }

        char getChar() {
            if (pos == (int) buffer.size()) { read(); }
            if (pos == (int) buffer.size()) {
                was = false;
                return EOF;
            } else {
                was = true;
                return buffer[pos++];
            }
        }

        string getStr() {
            char c = ' ';
            while (std::isspace(c)) { c = getChar(); }
            string answ;
            while (c != EOF && !std::isspace(c)) {
                answ.push_back(c);
                c = getChar();
            }
            was = !answ.empty();
            return answ;
        }

        string getLine() {
            char c = '\n';
            string answ;
            while (c == '\n') { c = getChar(); }
            while (c != '\n' && c != EOF) {
                answ.push_back(c);
                c = getChar();
            }
            was = !answ.empty();
            return answ;
        }

        template<typename T>
        T getInt() {
            char c = '?';
            while (!(c == '-' || ('0' <= c && c <= '9') || c == EOF)) { c = getChar(); }
            bool positive = true;
            if (c == '-') {
                positive = false;
                c = getChar();
            }
            T answ(0);
            bool flag = false;
            while ('0' <= c && c <= '9') {
                flag = true;
                (answ *= 10) += (c - '0');
                c = getChar();
            }
            was = flag;
            return positive ? answ : -answ;
        }

        template<typename T>
        T getReal() {
            bool flag = false;
            char c = '?';
            while (!(c == '-' || ('0' <= c && c <= '9') || c == EOF)) { c = getChar(); }
            bool positive = (c != '-');
            if (c == '-') { c = getChar(); }
            ll first = 0;
            while ('0' <= c && c <= '9') {
                flag = true;
                (first *= 10) += (c - '0');
                c = getChar();
            }
            was = flag;
            if (c != '.') { return T(positive ? first : -first); }
            c = getChar();
            ll second = 0, pow = 1;
            while ('0' <= c && c <= '9') {
                (second *= 10) += (c - '0');
                c = getChar();
                pow *= 10;
            }
            T answ = first + (T) second / (T) pow;
            return positive ? answ : -answ;
        }
    };

    Reader &operator>>(Reader &reader, char &c) { return c = reader.getChar(), reader; }

    Reader &operator>>(Reader &reader, std::string &s) { return s = reader.getStr(), reader; }

    template<class T>
    typename std::enable_if<std::is_floating_point<T>::value, Reader &>::type
    operator>>(Reader &reader, T &t) { return t = reader.getReal<T>(), reader; }

    template<class T>
    typename std::enable_if<std::is_integral<T>::value, Reader &>::type
    operator>>(Reader &reader, T &t) { return t = reader.getInt<T>(), reader; }

    template<class T>
    Reader &operator>>(Reader &reader, std::vector <T> &vec) {
        for (auto &it : vec) { reader >> it; }
        return reader;
    }

    struct Writer {
    private:
        FILE *file;
        std::vector<char> buffer;
        int pos, defaultPrecision, defaultWidth;
        char defaultFill;
    public:
        Writer(FILE *file_ = stdout, const int size_ = 1 << 16)
                : file(file_), buffer(size_, '\0'), pos(0), defaultPrecision(6), defaultWidth(0), defaultFill(' ') {}

        ~Writer() { flush(); }

        void flush() { putChar(EOF); }

        void setprecision(int precision) { defaultPrecision = precision; }

        void setw(int width) { defaultWidth = width; }

        void setfill(char fill) { defaultFill = fill; }

        int getPrecision() const { return defaultPrecision; }

        int getWidth() const { return defaultWidth; }

        char getFill() const { return defaultFill; }

        void putChar(char c) {
            if (pos == (int) buffer.size() || c == EOF) {
                fwrite(&buffer[0], 1, pos, file);
                pos = 0;
            }
            if (c != EOF) { buffer[pos++] = c; }
        }

        void putStr(const std::string &s) { for (auto it : s) putChar(it); }

        template<typename T>
        void putInt(T value, int width = 0, char fill = ' ') {
            bool positive = !(value < 0);
            if (value < 0) { value = -value; }
            char buf[24];
            int p = 0;
            do {
                buf[p++] = char(value % 10 + '0');
                value /= 10;
            } while (value > 0);
            if (!positive) { buf[p++] = '-'; }
            while (p < width) buf[p++] = fill;
            while (p > 0)putChar(buf[--p]);
        }

        template<typename T>
        void putReal(T value, int precision = 6, int width = 0, char fill = ' ') {
            putInt((long long) value, width - precision - 1, fill);
            value = std::abs(value - (long long) value);
            if (precision == 0) { return; }
            putChar('.');
#define PRINT_PART(cnt, pow) while(precision>=cnt){value*=pow; putInt((int)value,cnt,'0'); value-=(int)value; precision-=cnt; }
            PRINT_PART(6, 1000000)
            PRINT_PART(3, 1000)
            PRINT_PART(1, 10)
#undef PRINT_PART
        }
    };

    Writer &operator<<(Writer &writer, const char c) { return writer.putChar(c), writer; }

    Writer &operator<<(Writer &writer, const std::string &s) { return writer.putStr(s), writer; }

    template<class T>
    typename std::enable_if<std::is_floating_point<T>::value, Writer &>::type
    operator<<(Writer &writer, const T &t) {
        writer.putReal(t, writer.getPrecision(), writer.getWidth(), writer.getFill());
        return writer;
    }

    template<class T>
    typename std::enable_if<std::is_integral<T>::value, Writer &>::type
    operator<<(Writer &writer, const T &t) {
        writer.putInt(t, writer.getWidth(), writer.getFill());
        return writer;
    }
}

template<typename V>
inline void rd(V &x) {
    char c;
    while (c = _getchar_nolock(), c <= ' ');
    bool sign(c == '-');
    if (sign) { c = _getchar_nolock(); }
    x = (c - '0');
    while (c = _getchar_nolock(), !((c < '0') | (c > '9'))) { x = 10 * x + c - '0'; }
    if (sign) x = -x;
}

template<typename H, typename... T>
void rd(H &h, T &... t) {
    rd(h);
    rd(t...);
}

static const int buf_len = (1 << 14);
static const int buf_max = (1 << 04);
static char buf_out[buf_len];
static char buf_num[buf_max];
static int buf_pos = 0;

template<typename T>
inline void writeChar(T x) {
    if (buf_pos == buf_len)fwrite(buf_out, 1, buf_len, stdout), buf_pos = 0;
    buf_out[buf_pos++] = x;
}

template<typename L>
inline void print(L x, char end = 0) {
    if (abs(x) > 1000000000000000) {
        cout << x;
        return;
    }
    if (x < 0) writeChar('-'), x = -x;
    int n = 0;
    do buf_num[n++] = x % 10 + '0'; while (x /= 10);
    while (n--) writeChar(buf_num[n]);
    if (end) writeChar(end);
}

struct Flusher {
    ~Flusher() { if (buf_pos)fwrite(buf_out, 1, buf_pos, stdout), buf_pos = 0; }
} flusher;

template<typename H, typename... T>
void print(H h, T... t) {
    print(h);
    F1;
    print(t...);
}

template<typename T>
void print(vector <T> v) {
    for (auto i:v) {
        print(i);
        F1;
    }
}

template<typename T>
void print(set <T> v) {
    for (auto i:v) {
        print(i);
        F1;
    }
}

template<typename R>
void input(vector <R> &a, int n) { rep(i, 0, n - 1) rd(a[i]); }

mt19937 rng(2391);
mt19937 gnr(chrono::high_resolution_clock::now().time_since_epoch().count());

template<typename A>
istream &operator>>(istream &fin, vector <A> &v) {
    for (auto it = v.begin(); it != v.end(); ++it) fin >> *it;
    return fin;
}

template<typename A, typename B>
istream &operator>>(istream &fin, pair <A, B> &p) {
    fin >> p.X >> p.Y;
    return fin;
}

template<typename A, typename B>
pair <A, B> operator+(const pair <A, B> &a, const pair <A, B> &b) {
    return mp(a.X + b.X, a.Y + b.Y);
}

template<typename A, typename B>
pair <A, B> operator+=(pair <A, B> &a, const pair <A, B> &b) {
    a.X += b.X;
    a.Y += b.Y;
    return a;
}

template<typename A, typename B>
pair <A, B> operator-(const pair <A, B> &a, const pair <A, B> &b) {
    return mp(a.X - b.X, a.Y - b.Y);
}

template<typename A, typename B>
pair <A, B> operator-(const pair <A, B> &a) {
    return mp(-a.X, -a.Y);
}

template<typename A, typename B>
pair <A, B> &operator++(pair <A, B> &a) {
    ++a.X;
    ++a.Y;
    return a;
}

template<typename A, typename B>
pair <A, B> &operator--(pair <A, B> &a) {
    --a.X;
    --a.Y;
    return a;
}

template<typename A>
vector <A> &operator++(vector <A> &a) {
    for (auto it = a.begin(); it != a.end(); ++it)
        ++*it;
    return a;
}

template<typename A>
vector <A> &operator--(vector <A> &a) {
    for (auto it = a.begin(); it != a.end(); ++it)
        --*it;
    return a;
}

template<typename A, typename B>
pair <A, B> operator++(pair <A, B> &a, int) {
    pair <A, B> b = a;
    ++a;
    return b;
}

template<typename A, typename B>
pair <A, B> operator--(pair <A, B> &a, int) {
    pair <A, B> b = a;
    --a;
    return b;
}

template<typename A>
vector <A> &operator++(vector <A> &a, int) {
    vector <A> b = a;
    ++a;
    return b;
}

template<typename A>
vector <A> &operator--(vector <A> &a, int) {
    vector <A> b = a;
    --a;
    return b;
}

vvi adjlist_from_edgelist(const vpii &e, const int &n) {
    vvi g(n);
    for (auto it = e.begin(); it != e.end(); ++it) {
        g[it->X].pb(it->Y);
        g[it->Y].pb(it->X);
    }
    return g;
}

vvi adjlist_from_arrowlist(const vpii &e, const int &n) {
    vvi g(n);
    for (auto it = e.begin(); it != e.end(); ++it)
        g[it->X].pb(it->Y);
    return g;
}

template<typename A, typename B>
pair <A, B> operator-=(pair <A, B> &a, const pair <A, B> &b) {
    a.X -= b.X;
    a.Y -= b.Y;
    return a;
}

template<typename A>
A operator*(const pair <A, A> &p, const pair <A, A> &q) {
    return p.X * q.X + p.Y * q.Y;
}

template<typename A>
pair <A, A> operator*(const pair <A, A> &p, const A &q) {
    return mp(p.X * q, p.Y * q);
}

template<typename A>
A operator%(const pair <A, A> &p, const pair <A, A> &q) {
    return p.X * q.Y - p.Y * q.X;
}

template<typename A>
A sq_len(const pair <A, A> &p) {
    return p * p;
}

template<typename A>
A sq_dist(const pair <A, A> &p, const pair <A, A> &q) {
    return sq_len(p - q);
}

template<typename A>
double len(const pair <A, A> &p) {
    return sqrt(sq_len(p));
}

template<typename A>
double dist(const pair <A, A> &p, const pair <A, A> &q) {
    return len(p - q);
}

template<typename A>
bool is_rhombus(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c, const pair <A, A> &d) {
    A x = sq_dist(a, b);
    A y = sq_dist(b, c);
    A z = sq_dist(c, d);
    A t = sq_dist(d, a);
    return ((x == y) && (y == z) && (z == t));
}

template<typename A>
bool is_rectangle(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c, const pair <A, A> &d) {
    pair <A, A> x = a - b,
            y = b - c,
            z = c - d,
            t = d - a;
    return ((x * y == 0) && (y * z == 0) && (z * t == 0) && (t * x == 0));
}

template<typename A>
bool are_parallel(const pair <A, A> &a, const pair <A, A> &b) {
    return (a % b == 0);
}

template<typename A>
bool are_orthogonal(const pair <A, A> &a, const pair <A, A> &b) {
    return (a * b == 0);
}

template<typename A>
bool are_codirected(const pair <A, A> &a, const pair <A, A> &b) {
    return (are_parallel(a, b) && (a * b >= 0));
}

template<typename A>
bool is_parallelogram(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c, const pair <A, A> &d) {
    return ((a - b) == (d - c));
}

template<typename A>
bool is_trapezoid(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c, const pair <A, A> &d) {
    pair <A, A> x = a - b, z = d - c;
    return are_codirected(x, z);
}

template<typename A>
bool is_convex_polygon(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c, const pair <A, A> &d) {
    pair <A, A> x = a - b,
            y = b - c,
            z = c - d,
            t = d - a;
    A p = x % y, q = y % z, r = z % t, s = t % x;
    return (((p >= 0) && (q >= 0) && (r >= 0) && (s >= 0)) ||
            ((p <= 0) && (q <= 0) && (r <= 0) && (s <= 0)));
}

// nestrogo protiv chasovoj strelki
template<typename A>
bool nprcs(const pair <A, A> &a, const pair <A, A> &c) {
    return ((a % c) >= 0);
}

template<typename A>
bool nprcs(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c) {
    return nprcs(a - b, a - c);
}

// nestrogo po chasovoj strelke
template<typename A>
bool npocs(const pair <A, A> &a, const pair <A, A> &c) {
    return ((a % c) <= 0);
}

template<typename A>
bool npocs(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c) {
    return npocs(a - b, a - c);
}

// strogo protiv chasovoj strelki
template<typename A>
bool prcs(const pair <A, A> &a, const pair <A, A> &c) {
    return ((a % c) > 0);
}

template<typename A>
bool prcs(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c) {
    return prcs(a - b, a - c);
}

// strogo po chasovoj strelke
template<typename A>
bool pocs(const pair <A, A> &a, const pair <A, A> &c) {
    return ((a % c) < 0);
}

template<typename A>
bool pocs(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c) {
    return pocs(a - b, a - c);
}

template<typename A>
bool different_sides(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c, const pair <A, A> &d) {
    pair <A, A> x = b - a;
    A p = x % (c - b), q = x % (d - b);
    return (((p >= 0) && (q <= 0)) ||
            ((p <= 0) && (q >= 0)));
}

template<typename A>
bool sharply_different_sides(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c, const pair <A, A> &d) {
    pair <A, A> x = b - a;
    A p = x % (c - b), q = x % (d - b);
    return (((p > 0) && (q < 0)) ||
            ((p < 0) && (q > 0)));
}

template<typename A>
pair <A, A> rot_90(const pair <A, A> &p) {
    return mp(-p.Y, p.X);
}

template<typename A>
pair <A, A> rot_90(const pair <A, A> &p, const pair <A, A> &c) {
    return c + rot_90(p - c);
}

template<typename A>
bool intersecting_segments(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c,
                           const pair <A, A> &d) // true if two segs on one line
{
    return different_sides(a, b, c, d) && different_sides(c, d, a, b);
}

template<typename A>
bool sharply_intersecting_segments(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c,
                                   const pair <A, A> &d) // true if two segs on one line
{
    return sharply_different_sides(a, b, c, d) && sharply_different_sides(c, d, a, b);
}

template<typename A>
pair <pair<A, A>, A> line_with_normal_vector_through_point(const pair <A, A> &normal, const pair <A, A> &point) {
    return mp(normal, -(normal * point));
}

template<typename A>
pair <pair<A, A>, A> serper(const pair <A, A> &a, const pair <A, A> &b) {
    //pdd q = (a + b) * .5;
    //pdd p = b - a;
    //return line_with_normal_vector_through_point(p, q);
    ////////// instead of (p, -(p * q)), we take (p * 2, -(p * (q * 2))
    pair <A, A> p = b - a;
    return mp(p + p, -(p * (a + b)));
}

pdd ints(const pdd &p, const double &a,
         const pdd &q, const double &b) {
    double D = p % q;
    double E = pdd(-a, p.Y) % pdd(-b, q.Y);
    double F = pdd(p.X, -a) % pdd(q.X, -b);
    return pdd(E / D, F / D);
}

pdd circumcenter(const pdd &x, const pdd &y, const pdd &z) {
    auto p1 = serper(x, y),
            p2 = serper(x, z);
    return ints(p1.X, p1.Y, p2.X, p2.Y);
}

template<typename A>
pair <pair<A, A>, A> l_th_2(const pair <A, A> &p, const pair <A, A> &q) {
    return mp(mp(q.Y - p.Y, p.X - q.X), -p % q);
}

template<typename A>
vector <pdd> circle_intersection(const pair <pair<A, A>, A> &a, const pair <pair<A, A>, A> &b) {
    pair <A, A> c = b.X - a.X;
    A rr1 = a.Y * a.Y, rr2 = b.Y * b.Y, cc = c * c,
            rrrr1 = rr1 * rr1, rrrr2 = rr2 * rr2, cccc = cc * cc,
            D = 2 * (rr1 * rr2 + rr2 * cc + cc * rr1) - (rrrr1 + rrrr2 + cccc);
    if (D >= 0) {
        double E = (((double) (rr1 - rr2)) / cc + 1) / 2;
        pdd baza = pdd(a.X.X, a.X.Y) + pdd(c.X, c.Y) * E;
        if (D) {
            double lll = sqrt((double) (D)) / (2 * cc);
            pair <A, A> cr = rot_90(c);
            pdd pmm = pdd(cr.X, cr.Y) * lll;
            return {baza + pmm, baza - pmm};
        } else
            return vector<pdd>(1, baza);
    } else
        return vector<pdd>();
}

template<typename A, typename B>
pair <A, B> sopr(const pair <A, B> &p) {
    return mp(p.X, -p.Y);
}

template<typename A>
bool on_segment(const pair <A, A> &a, const pair <A, A> &b, const pair <A, A> &c) {
    return are_codirected(b - a, c - b);
}

template<typename A>
pair <pair<A, A>, A> perpendicular(const pair <A, A> &line, const pair <A, A> &point) {
    return line_with_normal_vector_through_point(rot_90(line), point);
}

pdd projection(const pair<pdd, double> &line, const pdd &point) {
    pair<pdd, double> temp = perpendicular(line.X, point);
    return ints(line.X, line.Y, temp.X, temp.Y);
}

pdd height(const pdd &a, const pdd &b, const pdd &c) {
    return projection(l_th_2(a, c), b);
}

pdd unitvector(const pdd &a) {
    return a * (1 / len(a));
}

template<typename T>
vi z_function(const vector <T> &s) {
    int n = sz(s);
    vi z(n);
    int l = 0, r = 1;
    for (int i = 1; i < n; ++i) {
        z[i] = max(0, min(r - i, z[i - l]));
        while (i + z[i] < n && (s[i + z[i]] == s[z[i]]))
            ++z[i];
        if (r < i + z[i]) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

pii euc(const int &m, const int &n) {
    if (n == 0)
        return pii((m >= 0) ? 1 : -1, 0);
    int t = m / n;
    pii ans1 = euc(n, m - t * n);
    return pii(ans1.Y, ans1.X - ans1.Y * t);
}

int prod(const int &a, const int &b, const int &M) {
    return ((ll) (a)) * b % M;
}

int sum(const int &a, const int &b, const int &M) {
    int c = a + b;
    return c >= M ? c - M : c;
}

int raz(const int &a, const int &b, const int &M) {
    int c = a - b;
    return c < 0 ? c + M : c;
}

const int LITTLE_BORDER = 400;

struct factorizator {
    int N;
    vi pr;
    vi md;
    vi pw;
    vi without_md;

    factorizator(const int &n) : N(n), md(n), pw(n), without_md(n, 1) {
        for (int i = 2; i < N; ++i)
            md[i] = i;
        for (int i = 2; i < N; ++i) {
            if (md[i] == i)
                pr.pb(i);
            bool worth = true;
            for (int j = 0; worth && (j < sz(pr)) && (pr[j] <= md[i]); ++j) {
                ll temp = ((ll) (pr[j])) * i;
                if (temp < N)
                    md[((int) temp)] = pr[j];
                else
                    worth = false;
            }
        }
        for (int i = 2; i < N; ++i) {
            int t = md[i], s = i / t;
            if (md[s] == t) {
                pw[i] = 1 + pw[s];
                without_md[i] = without_md[s];
            } else {
                pw[i] = 1;
                without_md[i] = s;
            }
        }
    }

    void known_factorization(int n, vpui &v) {
        while (n > 1) {
            v.eb(md[n], pw[n]);
            n = without_md[n];
        }
    }

    vpui pollardRho(const ul &n);

    vpui factor(ul n);

    template<typename T>
    vector <pair<T, int>> merge(const vector <pair<T, int>> &p1, const vector <pair<T, int>> &p2) {
        vector <pair<T, int>> ans;
        int m = sz(p1);
        int n = sz(p2);
        int i = 0;
        int j = 0;
        while ((i < m) || (j < n)) {
            if (i < m) {
                if (j < n) {
                    if (p1[i].X < p2[j].X)
                        ans.pb(p1[i++]);
                    else if (p1[i].X > p2[j].X)
                        ans.pb(p2[j++]);
                    else {
                        ans.eb(p1[i].X, p1[i].Y + p2[j].Y);
                        ++i;
                        ++j;
                    }
                } else
                    ans.pb(p1[i++]);
            } else
                ans.pb(p2[j++]);
        }
        return ans;
    }
};

#ifdef BIG_FACTORIZATOR
factorizator fac(2000000);
#else
factorizator fac(LITTLE_BORDER);
#endif

ul experimental_prodll(const ul &a, const ul &b, const ul &M, const int &helper) {
    if (M == 0)
        return 0;
    ul q = ((ld) a) * b / M;
    ul a1 = a * b - q * M;
    ul a2 = a1;
    int rm = M % helper;
    int ra = a % helper;
    int rb = b % helper;
    int rq = q % helper;
    int r1 = raz(prod(ra, rb, helper), prod(rq, rm, helper), helper);
    int r2 = r1;
    while (true) {
        if (a1 % helper == r1 && a1 < M)
            return a1;
        a1 -= M;
        r1 = raz(r1, rm, helper);

        a2 += M;
        r2 = sum(r2, rm, helper);
        if (a2 % helper == r2 && a2 < M)
            return a2;
    }
}

inline int find_helper(const ul &M) {
    int i = 30;
    while (M % fac.pr[i] == 0)
        ++i;
    return fac.pr[i];
}

ul prodll(const ul &a, const ul &b, const ul &M) {
    if (M == 0)
        return 0;
    ul helper = find_helper(M);
    return experimental_prodll(a, b, M, helper);
}

ul sumll(const ul &a, const ul &b, const ul &M) {
    if (a < M - b)
        return a + b;
    else
        return a + b - M;
}

ul razll(const ul &a, const ul &b, const ul &M) {
    if (a >= b)
        return a - b;
    else
        return a + M - b;
}

template<typename T>
T diff(const T &a, const T &b) {
    return (a > b) ? (a - b) : (b - a);
}

// comparator of {angle, distance}
template<typename A>
bool angdis_cmp(const pair <A, A> &a, const pair <A, A> &b) {
    A p;
    if (p = a % b)
        return (p > 0);
    else
        return sq_len(a) < sq_len(b);
}

template<typename T>
int find_min_idx(const vector <T> &v) {
    int ans = 0, n = sz(v);
    for (int i = 1; i < n; ++i)
        if (v[i] < v[ans])
            ans = i;
    return ans;
}

// indices of convex hull vertices in counterclockwise order, starting from the bottom of leftmost
template<typename T>
vi convex_hull(vector <pair<T, T>> &a) {
    int n = sz(a);
    if (n) {
        int mt = find_min_idx(a);
        pair <T, T> d = a[mt];
        for (int i = 0; i < n; ++i)
            a[i] -= d;

        vi idx(n);
        for (int i = 0; i < n; ++i)
            idx[i] = i;
        sort(idx.begin(), idx.end(), [&](const int &l, const int &r) { return angdis_cmp(a[l], a[r]); });

        vi h(1, idx.front());
        for (auto it = idx.begin() + 1; it != idx.end(); ++it) {
            auto temp = a.begin() + *it;
            if (sz(h) >= 2) {
                if (are_parallel(a[h.back()], *temp))
                    h.pop_back();
                while ((sz(h) >= 3) && npocs(a[h[sz(h) - 2]], a[h.back()], *temp))
                    h.pop_back();
            }
            h.push_back(*it);
        }

        for (int i = 0; i < n; ++i)
            a[i] += d;
        return h;
    } else
        return vi();
}

pii cool_gcd(const int &a, const int &b) {
    if (b) {
        int c = a / b;
        pii ans1 = cool_gcd(b, a - b * c);
        return pll(ans1.Y, ans1.X - ans1.Y * c);
    } else
        return pii(1, 0);
}

pll cool_gcdll(const ll &a, const ll &b) {
    if (b) {
        ll c = a / b;
        pll ans1 = cool_gcdll(b, a - b * c);
        return pll(ans1.Y, ans1.X - ans1.Y * c);
    } else
        return pll(1ll, 0ll);
}

template<typename T>
T gcd(T a, T b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// everything is not larger that 1e12
ll pr_p(const ll &a, const ll &b, const ll &p) {
    if (b < 1000000)
        return (a * b) % p;
    ll temp = pr_p(a, b >> 1ll, p);
    temp = sumll(temp, temp, p);
    if (b & 1ll)
        return sumll(temp, a, p);
    else
        return temp;
}

ll po_p(const ll &a, const ll &b, const ll &p) {
    if (b < 2) {
        if (b == 0)
            return 1;
        else
            return a;
    }
    ll temp = po_p(a, b >> 1ll, p);
    temp = pr_p(temp, temp, p);
    if (b & 1ll)
        return pr_p(temp, a, p);
    else
        return temp;
}

int pow_mod(const int &a, const int &b, const int &p) {
    if (b < 2) {
        if (b == 0)
            return 1;
        else
            return a;
    }
    int temp = pow_mod(a, b >> 1, p);
    temp = prod(temp, temp, p);
    if (b & 1)
        return prod(temp, a, p);
    else
        return temp;
}

ll pow_modll(const ll &a, const ll &b, const ll &p) {
    if (b < 2) {
        if (b == 0)
            return 1;
        else
            return a;
    }
    ll temp = pow_modll(a, b >> 1ll, p);
    temp = prodll(temp, temp, p);
    if (b & 1ll)
        return prodll(temp, a, p);
    else
        return temp;
}

int inverse(int a, int n) {
    int c = cool_gcd(a, n).X;
    if (c < 0)
        c += n;
    return c;
}

ll inversell(ll a, ll n) {
    ll c = cool_gcdll(a, n).X;
    if (c < 0)
        c += n;
    return c;
}

template<typename A>
pii equal_elements(const vector <A> &u, const vector <A> &v) {
    pii ans(INT_MAX, INT_MAX);
    int m = sz(u), n = sz(v);
    vi id_u(m);
    for (int i = 1; i < m; ++i)
        id_u[i] = i;
    vi id_v(n);
    for (int i = 1; i < n; ++i)
        id_v[i] = i;
    sort(id_u.begin(), id_u.end(), [&](const int &x, const int &y) { return u[x] < u[y]; });
    sort(id_v.begin(), id_v.end(), [&](const int &x, const int &y) { return v[x] < v[y]; });
    int i = 0;
    int j = 0;
    while ((i < m) && (j < n)) {
        if (u[id_u[i]] < v[id_v[j]])
            ++i;
        else if (v[id_v[j]] < u[id_u[i]])
            ++j;
        else {
            ans = min(ans, pii(id_v[j], id_u[i]));
            ++j;
        }
    }
    if (ans.X == INT_MAX)
        return pii(-1, -1);
    else
        return pii(ans.Y, ans.X);
}

ll discr_log(ll a, ll b, ll n) {
    int k = ((int) (sqrt((long double) n)));
    ll a1 = inversell(a, n);
    int l = k + 20;
    ll a2 = po_p(a1, k, n);
    vl seq1(k), seq2(l);
    seq1.front() = 1;
    for (int i = 1; i < k; ++i)
        seq1[i] = pr_p(seq1[i - 1], a, n);
    seq2.front() = b;
    for (int i = 1; i < l; ++i)
        seq2[i] = pr_p(seq2[i - 1], a2, n);
    pll e = equal_elements(seq1, seq2);
    if (e.X == -1)
        return -1;
    else
        return e.X + e.Y * k;
}

ll common_discr_log(ll a, ll b, ll n) {
    const int C = 70;
    a %= n;
    b %= n;
    if (gcd(n, a) != 1) {
        for (int i = 0; i < C; ++i) {
            if (po_p(a, i, n) == b) {
                return i;
            }
        }
        ll multp = po_p(a, C, n);
        ll g = gcd(multp, n);
        if (b % g) {
            return -1;
        } else {
            b /= g;
            n /= g;
            multp /= g;
            ll ob = inversell(multp, n);
            b = pr_p(b, ob, n);
            ll ans = discr_log(a, b, n);
            if (ans == -1)
                return -1;
            else
                return ans + C;
        }
    } else
        return discr_log(a, b, n);
}

const ul minimum_composites[] =
        {
                1ull,
                2046ull,
                1373652ull,
                25326000ull,
                3215031750ull,
                2152302898746ull,
                3474749660382ull,
                341550071728320ull,
                341550071728320ull,
                3825123056546413050ull,
                3825123056546413050ull,
                18446744073709551615ull
        };
const int little_primes[] =
        {
                2,
                3,
                5,
                7,
                11,
                13,
                17,
                19,
                23,
                29,
                31,
                37
        };

bool miller_rabin_check(const ul &n, const ul &prime, const ul &odd, const ul &pot, const ul &nmo) {
    long long x = pow_modll(prime, odd, n);
    if ((x == nmo) || (x == 1))
        return true;
    for (int i = 1; i < pot; ++i) {
        x = prodll(x, x, n);
        if (x == nmo)
            return true;
        if (x == 1)
            return false;
    }
    return false;
}

bool is_prime(const ul &n) {
    if (n <= 2)
        return (n == 2);
    ul odd, pot, nmo;
    nmo = n - 1;
    odd = nmo;
    pot = 0;
    while ((odd & 1ll) == 0) {
        odd >>= 1ll;
        ++pot;
    }
    int i = 0;
    while (n > minimum_composites[i]) {
        if (miller_rabin_check(n, little_primes[i], odd, pot, nmo) == false)
            return false;
        ++i;
    }
    return true;
}

vpui factorizator::pollardRho(const ul &n) {
    if (is_prime(n))
        return vpui(1, pui(n, 1));
    int step = 1;
    while (true) {
        step <<= 1;
        ul a = rng();
        ul b = a;
        ul d = 1;
        for (int j = 0; j < step; ++j) {
            a = sumll(1, prodll(a, a, n), n);
            b = sumll(1, prodll(b, b, n), n);
            b = sumll(1, prodll(b, b, n), n);
            d = gcd(diff(a, b), n);
            if (d > 1) {
                break;
            }
        }
        if (1 < d && d < n)
            return merge(pollardRho(d), pollardRho(n / d));
    }
    return vpui();
}

vpui factorizator::factor(ul n) {
    vpui ans;
    for (int i = 0; n >= N && i < sz(pr) && pr[i] < LITTLE_BORDER; ++i)
        while (n % pr[i] == 0) {
            if (sz(ans) && ans.back().X == pr[i])
                ++ans.back().Y;
            else
                ans.eb(pr[i], 1);
            n /= pr[i];
        }
    if (n < N) {
        known_factorization(n, ans);
        return ans;
    } else
        return merge(ans, pollardRho(n));
}

template<typename T>
T phi(const vector <pair<T, int>> &v) {
    T ans = 1;
    for (int i = 0; i < sz(v); ++i) {
        ans *= v[i].X - 1;
        for (int j = 1; j < v[i].Y; ++j)
            ans *= v[i].X;
    }
    return ans;
}

ul phi(const ul &n) {
    return phi(fac.factor(n));
}

bool check_primitive_root(const int &ph, const vi &to_check, const int &r, const int &n) {
    for (int i = 0; i < sz(to_check); ++i)
        if (pow_mod(r, to_check[i], n) == 1)
            return false;
    return (pow_mod(r, ph, n) == 1);
}

int primitive_root(const int &n) {
    if (n < 3)
        return n - 1;
    int p = phi(n);
    vpui f = fac.factor(p);
    vi to_check(sz(f));
    for (int i = 0; i < sz(f); ++i)
        to_check[i] = p / f[i].X;
    for (int i = 2; i < n; ++i)
        if (check_primitive_root(p, to_check, i, n))
            return i;
    return -1;
}

int unite_mod(const int &a, const int &p, const int &b, const int &q) {
    pii c = cool_gcd(p, q);
    int pr = p * q;
    int ans = ((a * c.Y * q + b * c.X * p) % pr + pr) % pr;
    return ans;
}

ll unite_modll(const ll &a, const ll &p, const ll &b, const ll &q) {
    pll c = cool_gcdll(p, q);
    ll pr = p * q;
    ll ans = ((a * c.Y * q + b * c.X * p) % pr + pr) % pr;
    return ans;
}

pii power_v(int n, const int &p) {
    int ans = 0;
    while (n % p == 0) {
        n /= p;
        ++ans;
    }
    return pii(ans, n);
}

int square_root_prime_modulo(int c, int n, const int &pr, const int &k) {
    c %= n;
    if (c) {
        pii kek = power_v(c, pr);
        int l = kek.X;
        if (l & 1)
            return -1;
        if (l > 0) {
            int pwl = 1;
            for (int i = 0; i < l; ++i)
                pwl *= pr;
            n /= pwl;
            c /= pwl;
            int ans1 = square_root_prime_modulo(c, n, pr, k - l);
            if (ans1 == -1)
                return -1;
            for (int i = 0; i < (l >> 1); ++i)
                ans1 *= pr;
            return ans1;
        } else {
            int primitive;
            if (n & 1)
                primitive = primitive_root(n);
            else
                primitive = 5;
            int u = ((int) discr_log(primitive, c, n));
            if (u == -1)
                return -1;
            if (u & 1)
                return -1;
            return pow_mod(primitive, u >> 1, n);
        }
    } else
        return 0;
}

int square_root_modulo(const int &c, const int &n) {
    vpui f = fac.factor(n);
    int a = 0, p = 1;
    for (int i = 0; i < sz(f); ++i) {
        int q = 1;
        for (int j = 0; j < f[i].Y; ++j)
            q *= f[i].X;
        int b = square_root_prime_modulo(c, q, f[i].X, f[i].Y);
        if (b == -1)
            return -1;
        a = unite_mod(a, p, b, q);
        p *= q;
    }
    return a;
}

namespace BGF {
    inline int cntd(unsigned x) {
        int ans = 0;
        while (x) {
            if (x & 1)
                ++ans;
            x >>= 1;
        }
        return ans;
    }

    inline ll cntdll(ul x) {
        ll ans = 0;
        while (x) {
            if (x & 1)
                ++ans;
            x >>= 1;
        }
        return ans;
    }

    inline int clzd(unsigned x) {
        int ans = 32;
        while (x) {
            --ans;
            x >>= 1;
        }
        return ans;
    }

    inline ll clzdll(ul x) {
        ll ans = 64;
        while (x) {
            --ans;
            x >>= 1;
        }
        return ans;
    }

    inline int ctzd(unsigned x) {
        if (x == 0)
            return 32;
        int ans = 0;
        while ((x & 1) == 0) {
            ++ans;
            x >>= 1;
        }
        return ans;
    }

    inline ll ctzdll(ul x) {
        if (x == 0)
            return 64;
        ll ans = 0;
        while ((x & 1) == 0) {
            ++ans;
            x >>= 1;
        }
        return ans;
    }
}

#ifdef FAST_BUILTINS
namespace BGF // builtin gnu c++ functions
{
    const unsigned BHC = 65535u;
    const ul BHCL = 65535ull;
    const unsigned BHN = 65536u;
    const unsigned BHL = 16u;
    const unsigned LH = 4294901760u;
    const unsigned RH = 65535u;
    const ul BHLL1 = 16ull;
    const ul BHLL2 = 32ull;
    const ul BHLL3 = 48ull;
    const ul LHL = 18446744069414584320ull;
    const ul RHL = 4294967295ull;
    int CNT[BHN];
    int CLZ[BHN];
    int CTZ[BHN];

    inline void initialize() {
        CNT[0] = 0;
        CLZ[0] = BHL + BHL;
        CTZ[0] = BHL;
        for (unsigned i = 1; i < BHN; ++i) {
            CNT[i] = cntd(i);
            CLZ[i] = clzd(i);
            CTZ[i] = ctzd(i);
        }
    }

    inline int cntc(const unsigned &x) {
        return CNT[x & BHC] + CNT[(x >> BHL) & BHC];
    }

    inline ll cntcll(const ul &x) {
        return CNT[x & BHCL] + CNT[(x >> BHLL1) & BHCL] + CNT[(x >> BHLL2) & BHCL] + CNT[(x >> BHLL3) & BHCL];
    }

    inline int clzc(const unsigned &x) {
        if (x & LH)
            return CLZ[x >> BHL] - BHL;
        else
            return CLZ[x];
    }

    inline ll clzcll(const ul &x) {
        if (x & LHL)
            return clzc(x >> BHLL2);
        else
            return clzc(x) + BHLL2;
    }

    inline int ctzc(const unsigned &x) {
        if (x & RH)
            return CTZ[x & RH];
        else
            return CTZ[x >> BHL] + BHL;
    }

    inline ll ctzcll(const ul &x) {
        if (x & RHL)
            return ctzc(x);
        else
            return ctzc(x >> BHLL2) + BHLL2;
    }
}
#define __builtin_popcount BGF::cntc
#define __builtin_popcountll BGF::cntcll
#define __builtin_ctzll BGF::ctzcll
#if !defined(__GNUC__)
#define __builtin_ctz BGF::ctzc
#define __builtin_clz BGF::clzc
#define __builtin_clzll BGF::clzcll
#endif
#elif !defined(__GNUC__)
#define __builtin_popcount BGF::cntd
#define __builtin_popcountll BGF::cntdll
#define __builtin_ctzll BGF::ctzdll
#define __builtin_ctz BGF::ctzd
#define __builtin_clz BGF::clzd
#define __builtin_clzll BGF::clzdll
#endif
#define um unordered_map
#ifdef MULTIPRECISION
namespace MPA
{
  enum {
    DIGITS_IN_BASE = 4,
    BASE = 10000,

    MAXN = 500 * 1000 + 1,
    MAX_FFT_LOG_SIZE = 20,
    MAX_FFT_SIZE = 1 << MAX_FFT_LOG_SIZE,

    BASECASE_MULTIPLY_THRESHOLD = 200,

    BASECASE_DIVIDE_THRESHOLD = 30,
  };

  //---------------------- MY COMPLEX ----------------------------------

  struct MyComplex {
    double re;
    double im;

    MyComplex() {
      re = im = 0.0;
    }

    MyComplex(double re_, double im_) {
      re = re_;
      im = im_;
    }

    inline const MyComplex operator*(const MyComplex& a) const {
      return MyComplex(re * a.re - im * a.im, re * a.im + im * a.re);
    }

    inline const MyComplex operator-(const MyComplex& a) const {
      return MyComplex(re - a.re, im - a.im);
    }

    inline const MyComplex& operator+=(const MyComplex& a) {
      re += a.re;
      im += a.im;
      return *this;
    }

    inline const MyComplex& operator*=(double a) {
      re *= a;
      im *= a;
      return *this;
    }
  };

  //---------------------- COMMON FUNCTIONS ----------------------------

  const int ONE = 1;

  // a should have enough capacity; custom_string_number should terminate with '\0' not accounted in number_size
  void read_number(int* a, int& size, char* custom_string_number, int number_size) {
    int real_size = 0;
    char memorized;
    for (int i = number_size; i > 0; i -= DIGITS_IN_BASE) {
      memorized = custom_string_number[i];
      custom_string_number[i] = 0;
      a[real_size++] = atoi(i >= DIGITS_IN_BASE ? custom_string_number + i - DIGITS_IN_BASE : custom_string_number);
      custom_string_number[i] = memorized;
    }
    size = real_size;
  }

  // a should have enough capacity
  void read_number(int* a, int& size) {
    string s;
    cin >> s;
    read_number(a, size, ((char*)(s.c_str())), sz(s));
  }

  // a should have enough capacity
  void read_number(int* a, int& size, const string& s) {
    read_number(a, size, ((char*)(s.c_str())), sz(s));
  }

  string to_string(const int* a, int size) {
    if (size == 0) {
      return "0";
    }
    else {
      ostringstream str;
      str << a[size - 1];
      for (int i = size - 2; i >= 0; --i)
        str << setw(4) << setfill('0') << a[i];
      return str.str();
    }
  }

  void write_number(const int* a, int size) {
    if (size == 0) {
      cout << '0';
      return;
    }
    else {
      cout << a[size - 1];
      for (int i = size - 2; i >= 0; --i)
        cout << setw(4) << setfill('0') << a[i];
    }
  }

  int upper_pow2(int n) {
    int ans = 1;
    while (ans < n) {
      ans <<= 1;
    }
    return ans;
  }

  int log2(int n) {
    int ans = 0;
    while (n > 1) {
      n >>= 1;
      ++ans;
    }
    return ans;
  }

  int num_len(int n) { // n > 0
    int ans = 0;
    while (n > 0) {
      n /= 10;
      ++ans;
    }
    return ans;
  }

  void set_size(const int* result, int size, int* result_size) {
    int real_size = size;
    while (real_size > 0 && !result[real_size - 1]) {
      --real_size;
    }
    *result_size = real_size;
  }

  int compare(const int* a, int a_size, const int* b, int b_size) {
    while (a_size > 0 && a_size > b_size) {
      if (a[--a_size]) {
        return 1;
      }
    }

    while (b_size > 0 && b_size > a_size) {
      if (b[--b_size]) {
        return -1;
      }
    }

    // now sizes are equal
    int a_digit, b_digit;
    for (int i = a_size - 1; i >= 0; --i) {
      a_digit = a[i];
      b_digit = b[i];
      if (a_digit < b_digit) {
        return -1;
      }
      if (a_digit > b_digit) {
        return 1;
      }
    }
    return 0;
  }

  // a must be >= b
  void inplace_subtract(int* a, int a_size, const int* b, int b_size, int* result_size) {
    int carry = 0, diff;
    for (int i = 0; i < b_size || carry; ++i) {
      diff = a[i] - carry - (i < b_size ? b[i] : 0);
      carry = diff < 0;
      if (carry) {
        diff += BASE;
      }
      a[i] = diff;
    }
    set_size(a, a_size, result_size);
  }

  // a must be long enough to contain the result
  void inplace_add(int* a, int a_size, const int* b, int b_size, int* result_size) {
    int i, carry = 0;
    for (i = 0; i < max(a_size, b_size) || carry; ++i) {
      a[i] = (i < a_size ? a[i] : 0) + carry + (i < b_size ? b[i] : 0);
      carry = a[i] >= BASE;
      if (carry) {
        a[i] -= BASE;
      }
    }
    *result_size = i;
  }

  void multiply_by_short(const int* a, int a_size, int b, int* result, int* result_size) {
    if (a_size == 0) {
      *result_size = 0;
      return;
    }
    int i, sum, carry = 0;
    for (i = 0; i < a_size || carry; ++i) {
      sum = (i < a_size ? a[i] : 0) * b + carry;
      carry = sum / BASE;
      result[i] = sum - carry * BASE;
    }
    *result_size = i;
  }

  // returns residual
  int inplace_divide_by_short(int* a, int a_size, int b, int* result_size) {
    if (a_size == 0) {
      *result_size = 0;
      return 0;
    }
    int sum, carry = 0;
    for (int i = a_size - 1; i >= 0; --i) {
      sum = a[i] + carry * BASE;
      a[i] = sum / b;
      carry = sum - a[i] * b;
    }
    set_size(a, a_size, result_size);
    return carry;
  }

  //--------------------- MULTIPLICATION -------------------------------

  const double PI = 3.14159265358979323846;

  // FFT MULTIPLICATION
  int* rev[MAX_FFT_LOG_SIZE];
  MyComplex* wlen_pw[MAX_FFT_LOG_SIZE - 1], * wlen_pw_inv[MAX_FFT_LOG_SIZE - 1];

  void prepare_fft() {
    // rev
    rev[0] = (int*)malloc(1 * sizeof(int));
    rev[0][0] = 0;
    for (int log_size = 1; log_size < MAX_FFT_LOG_SIZE; ++log_size) {
      int size = 1 << log_size, half_size = 1 << (log_size - 1);
      rev[log_size] = (int*)malloc(size * sizeof(int));
      for (int i = 0; i < half_size; ++i) {
        rev[log_size][i] = 2 * rev[log_size - 1][i];
        rev[log_size][i + half_size] = rev[log_size][i] + 1;
      }
    }

    // wlen_pw
    wlen_pw[MAX_FFT_LOG_SIZE - 2] = (MyComplex*)malloc((MAX_FFT_SIZE >> 2) * sizeof(MyComplex));
    wlen_pw_inv[MAX_FFT_LOG_SIZE - 2] = (MyComplex*)malloc((MAX_FFT_SIZE >> 2) * sizeof(MyComplex));
    wlen_pw[MAX_FFT_LOG_SIZE - 2][0] = wlen_pw_inv[MAX_FFT_LOG_SIZE - 2][0] = MyComplex(1, 0);

    int half_size = 1 << (MAX_FFT_LOG_SIZE - 2);
    double ang = 2 * PI / (half_size << 1);
    MyComplex wlen(cos(ang), sin(ang));
    MyComplex* p = wlen_pw[MAX_FFT_LOG_SIZE - 2], * p_inv = wlen_pw_inv[MAX_FFT_LOG_SIZE - 2];
    *p++ = *p_inv++ = MyComplex(1, 0);
    for (int i = 1; i < half_size; ++i, ++p, ++p_inv) {
      *p = *(p - 1) * wlen;
      *p_inv = MyComplex(p->re, -(p->im));
    }

    for (int i = MAX_FFT_LOG_SIZE - 3; i >= 0; --i) {
      half_size >>= 1;
      wlen_pw[i] = (MyComplex*)malloc(half_size * sizeof(MyComplex));
      wlen_pw_inv[i] = (MyComplex*)malloc(half_size * sizeof(MyComplex));
      for (int j = 0; j < half_size; ++j) {
        wlen_pw[i][j] = wlen_pw[i + 1][j * 2];
        wlen_pw_inv[i][j] = wlen_pw_inv[i + 1][j * 2];
      }
    }
  }

  void free_fft() {
    for (int i = 0; i < MAX_FFT_LOG_SIZE; ++i) {
      free(rev[i]);
    }
    for (int i = 0; i < MAX_FFT_LOG_SIZE - 2; ++i) {
      free(wlen_pw[i]);
      free(wlen_pw_inv[i]);
    }
  }

  void fft(MyComplex arr[], int size, bool invert) {
    for (int len = 8, log = 2; len <= size; len <<= 1, ++log) {
      int len_half = len >> 1;
      for (int i = 0; i < size; i += len) {
        MyComplex temp,
          * pu = arr + i,
          * pv = arr + i + len_half,
          * pu_end = arr + i + len_half,
          * pw = invert ? wlen_pw_inv[log] : wlen_pw[log];
        for (; pu != pu_end; ++pu, ++pv, ++pw) {
          temp = *pv * *pw;
          *pv = *pu - temp;
          *pu += temp;
        }
      }
    }
    if (invert) {
      double inv_size = 1.0 / size;
      for (int i = 0; i < size; ++i) {
        arr[i] *= inv_size;
      }
    }
  }

  void get_fft_inv(MyComplex* a, int fft_size) {
    if (fft_size == 2) {
      MyComplex tmp = a[1];
      a[1] = a[0] - a[1];
      a[0] += tmp;
      a[0] *= 0.5;
      a[1] *= 0.5;
      return;
    }

    int log_size = log2(fft_size), p;
    int* r = rev[log_size];
    MyComplex tmp;
    for (int i = 0; i < fft_size; ++i) {
      p = r[i];
      if (i < p) {
        tmp = a[i];
        a[i] = a[p];
        a[p] = tmp;
      }
    }
    for (int i = 0; i < fft_size; i += 2) {
      tmp = a[i + 1];
      a[i + 1] = a[i] - tmp;
      a[i] += tmp;
    }
    for (int i = 0; i < fft_size; i += 4) {
      tmp = a[i + 2];
      a[i + 2] = a[i] - tmp;
      a[i] += tmp;

      tmp = a[i + 3];
      a[i + 3] = MyComplex(a[i + 1].re - tmp.im, a[i + 1].im + tmp.re);
      a[i + 1] = MyComplex(a[i + 1].re + tmp.im, a[i + 1].im - tmp.re);
    }
    fft(a, fft_size, true);
  }

  int fft_int_multiplier[MAX_FFT_SIZE];
  int fft_int_multiplier_size;

  // doing first 2 iterations of fft int ints
  // result must be at least of fft_size
  void get_fft(const int* a, int a_size, MyComplex* result, int fft_size) {
    for (int i = 0, j = 0; i < a_size; ++i, j += 2) {
      fft_int_multiplier[j] = a[i] % 100;
      fft_int_multiplier[j + 1] = a[i] / 100;
    }
    memset(fft_int_multiplier + a_size * 2, 0, (fft_size - a_size * 2) * sizeof(int));

    if (fft_size == 2) {
      result[0] = MyComplex((fft_int_multiplier[0] + fft_int_multiplier[1]), 0);
      result[1] = MyComplex((fft_int_multiplier[0] - fft_int_multiplier[1]), 0);
      return;
    }

    int log_size = log2(fft_size);
    int* r = rev[log_size];
    int p, tmp;
    for (int i = 0; i < fft_size; ++i) {
      p = r[i];
      if (i < p) {
        tmp = fft_int_multiplier[i];
        fft_int_multiplier[i] = fft_int_multiplier[p];
        fft_int_multiplier[p] = tmp;
      }
    }
    for (int i = 0; i < fft_size; i += 2) {
      tmp = fft_int_multiplier[i + 1];
      fft_int_multiplier[i + 1] = fft_int_multiplier[i] - tmp;
      fft_int_multiplier[i] += tmp;
    }
    for (int i = 0; i < fft_size; i += 4) {
      result[i] = MyComplex(fft_int_multiplier[i] + fft_int_multiplier[i + 2], 0);
      result[i + 2] = MyComplex(fft_int_multiplier[i] - fft_int_multiplier[i + 2], 0);

      result[i + 1] = MyComplex(fft_int_multiplier[i + 1], fft_int_multiplier[i + 3]);
      result[i + 3] = MyComplex(fft_int_multiplier[i + 1], -fft_int_multiplier[i + 3]);
    }
    fft(result, fft_size, false);
  }

  MyComplex fft_multiplier1[MAX_FFT_SIZE], fft_multiplier2[MAX_FFT_SIZE];
  int tmp[MAX_FFT_SIZE];

  // result must have capacity for at least a_size + b_size elements, function fills them
  void fft_multiply(const int* a, int a_size, const int* b, int b_size, int* result, int* result_size) {
    if (a_size == 0 || b_size == 0) {
      *result_size = 0;
      return;
    }

    int a_digits = (a_size - 1) * DIGITS_IN_BASE + num_len(a[a_size - 1]);
    int b_digits = (b_size - 1) * DIGITS_IN_BASE + num_len(b[b_size - 1]);
    int size = upper_pow2(max((a_digits + 1) / 2, (b_digits + 1) / 2)) << 1;
    get_fft(a, a_size, fft_multiplier1, size);
    get_fft(b, b_size, fft_multiplier2, size);
    for (int i = 0; i < size; ++i) {
      fft_multiplier1[i] = fft_multiplier1[i] * fft_multiplier2[i];
    }
    get_fft_inv(fft_multiplier1, size);

    int sum, carry = 0;
    for (int i = 0; i < size; ++i) {
      sum = int(fft_multiplier1[i].re + 0.5) + carry;
      carry = sum / 100;
      tmp[i] = sum - carry * 100;
    }
    for (int i = 0, j = 0; j < size; ++i, j += 2) {
      result[i] = tmp[j] + tmp[j + 1] * 100;
    }
    set_size(result, size / 2, result_size);
  }

  // BASECASE MULTIPLICATION
  long long basecase_intermediate_result[2 * MAXN];

  // result must have capacity for at least a_size + b_size elements, function fills them
  void basecase_multiply(const int* a, int a_size, const int* b, int b_size, int* result, int* result_size) {
    if (a_size == 0 || b_size == 0) {
      *result_size = 0;
      return;
    }

    memset(basecase_intermediate_result, 0, (a_size + b_size) * sizeof(long long));
    for (int i = 0; i < a_size; ++i) {
      for (int j = 0; j < b_size; ++j) {
        basecase_intermediate_result[i + j] += a[i] * b[j];
      }
    }
    long long sum, carry = 0;
    for (int i = 0; i < a_size + b_size; ++i) {
      sum = basecase_intermediate_result[i] + carry;
      carry = sum / BASE;
      result[i] = sum - carry * BASE;
    }

    set_size(result, a_size + b_size, result_size);
  }

  void multiply(const int* a, int a_size, const int* b, int b_size, int* result, int* result_size) {
    if (max(a_size, b_size) <= BASECASE_MULTIPLY_THRESHOLD) {
      basecase_multiply(a, a_size, b, b_size, result, result_size);
    }
    else {
      fft_multiply(a, a_size, b, b_size, result, result_size);
    }
  }

  //-------------------- DIVISION -----------------------------------

  int basecase_divide_buf[MAXN];

  // a >= b, a contains the ans, q & r should have size of a
  void basecase_divide(
    const int* a, int a_size,
    const int* b, int b_size,
    int* q, int* q_size,
    int* r, int* r_size)
  {
    int d = b[b_size - 1], curr_q, not_used;
    assert(d >= BASE / 2); // normalized divisor
    memcpy(r, a, a_size * sizeof(int));
    if (compare(a, a_size, b, b_size) < 0) {
      *q_size = 0;
      *r_size = a_size;
      return;
    }

    int m = a_size - b_size;
    if (compare(r + a_size - b_size, b_size, b, b_size) >= 0) {
      *q_size = m + 1;
      q[m] = 1;
      inplace_subtract(r + a_size - b_size, b_size, b, b_size, &not_used);
    }
    else {
      *q_size = m;
    }

    for (int i = m - 1; i >= 0; --i) {
      curr_q = min((r[i + b_size] * BASE + r[i + b_size - 1]) / d, BASE - 1);
      int b_mult_size;
      multiply_by_short(b, b_size, curr_q, basecase_divide_buf, &b_mult_size);
      while (compare(r + i, b_size + 1, basecase_divide_buf, b_mult_size) < 0) {
        inplace_subtract(basecase_divide_buf, b_mult_size, b, b_size, &b_mult_size);
        --curr_q;
      }
      inplace_subtract(r + i, b_size + 1, basecase_divide_buf, b_mult_size, &not_used);
      q[i] = curr_q;
    }
    set_size(r, a_size, r_size);
  }

  int recursive_divide_mul_buf[2 * MAXN];

  void recursive_divide(
    const int* a, int a_size,
    const int* b, int b_size,
    int* q, int* q_size,
    int* r, int* r_size)
  {
    assert(b[b_size - 1] >= BASE / 2); // normalized divisor
    int m = a_size - b_size;
    assert(a_size >= m);

    if (m <= BASECASE_DIVIDE_THRESHOLD) {
      basecase_divide(a, a_size, b, b_size, q, q_size, r, r_size);
      return;
    }

    int* a_tick = (int*)calloc(2 * a_size, sizeof(int));
    int* q0 = (int*)calloc(2 * a_size, sizeof(int));

    int a_tick_size, mult_size, q1_size, r1_size, q0_size, r0_size, sub = 0;
    int k = m >> 1;

    recursive_divide(
      a + 2 * k, a_size - 2 * k,
      b + k, b_size - k,
      q + k, &q1_size,
      a_tick + 2 * k, &r1_size
    );

    memcpy(a_tick, a, min(a_size, 2 * k) * sizeof(int));
    set_size(a_tick, r1_size + 2 * k, &a_tick_size);
    multiply(q + k, q1_size, b, k, recursive_divide_mul_buf, &mult_size);

    int* a_tick_without_k = a_tick + k;
    int a_tick_without_k_size = max(a_tick_size - k, 0);

    while (compare(a_tick_without_k, a_tick_without_k_size, recursive_divide_mul_buf, mult_size) < 0) {
      inplace_add(a_tick_without_k, a_tick_without_k_size, b, b_size, &a_tick_without_k_size);
      ++sub;
    }
    inplace_subtract(a_tick_without_k, a_tick_without_k_size, recursive_divide_mul_buf, mult_size, &a_tick_without_k_size);
    assert(sub <= 4);
    if (sub) {
      inplace_subtract(q + k, q1_size, &sub, 1, &q1_size);
    }

    recursive_divide(
      a_tick_without_k, a_tick_without_k_size,
      b + k, b_size - k,
      q0, &q0_size,
      r + k, &r0_size
    );

    memset(r, 0, k * sizeof(int));
    memcpy(r, a_tick, min(k, a_tick_size) * sizeof(int));
    set_size(r, r0_size + k, r_size);
    free(a_tick);

    multiply(q0, q0_size, b, k, recursive_divide_mul_buf, &mult_size);
    sub = 0;
    while (compare(r, *r_size, recursive_divide_mul_buf, mult_size) < 0) {
      inplace_add(r, *r_size, b, b_size, r_size);
      ++sub;
    }
    inplace_subtract(r, *r_size, recursive_divide_mul_buf, mult_size, r_size);
    assert(sub <= 4);
    if (sub) {
      inplace_subtract(q0, q0_size, &sub, 1, &q0_size);
    }

    memset(q, 0, k * sizeof(int));
    set_size(q, k + q1_size, q_size);
    inplace_add(q, k + q1_size, q0, q0_size, q_size);
    free(q0);
  }

  int divide_new_a[MAXN], divide_new_b[MAXN];
  int new_a_size, new_b_size;

  void divide(
    const int* a, int a_size,
    const int* b, int b_size,
    int* q, int* q_size,
    int* r, int* r_size)
  {
    if (b[b_size - 1] < BASE / 2) {
      int mul = 1;
      do {
        mul *= 2;
        multiply_by_short(b, b_size, mul, divide_new_b, &new_b_size);
      } while (divide_new_b[new_b_size - 1] < BASE / 2);
      multiply_by_short(a, a_size, mul, divide_new_a, &new_a_size);
      recursive_divide(divide_new_a, new_a_size, divide_new_b, new_b_size, q, q_size, r, r_size);
      assert(inplace_divide_by_short(r, *r_size, mul, r_size) == 0);
    }
    else {
      recursive_divide(a, a_size, b, b_size, q, q_size, r, r_size);
    }
  }

  //--------------------- SQUARE ROOT -------------------------------

  int newton_next[2 * MAXN], division_res[2 * MAXN];

  // result should have size not less than a_size
  void newton_square_root(int* a, int a_size, int* result, int* result_size, int* residue, int* residue_size) {
    if (a_size == 0) {
      *result_size = 0;
      return;
    }

    int base_pow = (a_size + 1) >> 1;
    memset(result, 0, base_pow * sizeof(int));
    result[base_pow] = 1;
    *result_size = base_pow + 1;

    int next_size, division_res_size;
    while (true) {
      divide(a, a_size, result, *result_size, newton_next, &next_size, residue, residue_size);
      memcpy(division_res, newton_next, next_size * sizeof(int));
      division_res_size = next_size;

      inplace_add(newton_next, next_size, result, *result_size, &next_size);
      inplace_divide_by_short(newton_next, next_size, 2, &next_size);
      if (compare(result, *result_size, newton_next, next_size) <= 0) {
        break;
      }
      *result_size = next_size;
      memcpy(result, newton_next, next_size * sizeof(int));
    }

    while (compare(result, *result_size, division_res, division_res_size) < 0) {
      inplace_subtract(division_res, division_res_size, &ONE, 1, &division_res_size);
      inplace_add(residue, *residue_size, result, *result_size, residue_size);
    }
  }
}
#endif
/////////////////////////////////Tree/////////////////////////////////////
#ifdef TREE
constexpr int N=2e5+6; vector<int>v[N]; vector<int>euler; int fidx[N],lidx[N]; int d[N],log1[N];
int st[N][40];
int find_lca(int a,int b)
{
  int l=fidx[a],r=fidx[b];
  if(l>r) swap(l,r); debug(l,r);
  int j=log1[r-l+1];
  int lca=min(st[l][j],st[r-(1<<j)+1][j]); return lca;
}
int find_dist(int a,int b)
{
  int k=find_lca(a,b);
  return d[a]+d[b]-2*d[k];
}
void dfs(int s,int p,int k)
{
 d[s]=k;
 if(sz(v[s])==1 and v[s][0]==p){ euler.eb(s); return; }
 euler.eb(s);
 for(auto i:v[s]){ if(i!=p) { dfs(i,s,k+1); euler.eb(s); }  }
 euler.eb(s);
}
#endif
//////////////////////////////////BIGINT//////////////////////////////////
constexpr int base = 1000000000;
constexpr int base_digits = 9;

struct Int {
    vector<int> a;
    int sign;

    int size() {
        if (a.empty())return 0;
        int ans = (a.size() - 1) * base_digits, ca = a.back();
        while (ca)
            ans++, ca /= 10;
        return ans;
    }

    Int operator^(const Int &v) {
        Int ans = 1, a = *this, b = v;
        while (!b.isZero()) {
            if (b % 2) ans *= a;
            a *= a, b /= 2;
        }
        return ans;
    }

    string to_string() {
        stringstream ss;
        ss << *this;
        string s;
        ss >> s;
        return s;
    }

    int sumof() {
        string s = to_string();
        int ans = 0;
        for (auto c:s) ans += c - '0';
        return ans;
    }

    Int() :
            sign(1) {
    }

    Int(long long v) { *this = v; }

    Int(const string &s) { read(s); }

    void operator=(const Int &v) {
        sign = v.sign;
        a = v.a;
    }

    void operator=(long long v) {
        sign = 1;
        a.clear();
        if (v < 0)
            sign = -1, v = -v;
        for (; v > 0; v = v / base)
            a.push_back(v % base);
    }

    Int operator+(const Int &v) const {
        if (sign == v.sign) {
            Int res = v;
            for (int i = 0, carry = 0; i < (int) max(a.size(), v.a.size()) || carry; ++i) {
                if (i == (int) res.a.size())
                    res.a.push_back(0);
                res.a[i] += carry + (i < (int) a.size() ? a[i] : 0);
                carry = res.a[i] >= base;
                if (carry)
                    res.a[i] -= base;
            }
            return res;
        }
        return *this - (-v);
    }

    Int operator-(const Int &v) const {
        if (sign == v.sign) {
            if (abs() >= v.abs()) {
                Int res = *this;
                for (int i = 0, carry = 0; i < (int) v.a.size() || carry; ++i) {
                    res.a[i] -= carry + (i < (int) v.a.size() ? v.a[i] : 0);
                    carry = res.a[i] < 0;
                    if (carry)
                        res.a[i] += base;
                }
                res.trim();
                return res;
            }
            return -(v - *this);
        }
        return *this + (-v);
    }

    void operator*=(int v) {
        if (v < 0)
            sign = -sign, v = -v;
        for (int i = 0, carry = 0; i < (int) a.size() || carry; ++i) {
            if (i == (int) a.size())
                a.push_back(0);
            long long cur = a[i] * (long long) v + carry;
            carry = (int) (cur / base);
            a[i] = (int) (cur % base);
        }
        trim();
    }

    Int operator*(int v) const {
        Int res = *this;
        res *= v;
        return res;
    }

    void operator*=(long long v) {
        if (v < 0)
            sign = -sign, v = -v;
        for (int i = 0, carry = 0; i < (int) a.size() || carry; ++i) {
            if (i == (int) a.size())
                a.push_back(0);
            long long cur = a[i] * (long long) v + carry;
            carry = (int) (cur / base);
            a[i] = (int) (cur % base);
        }
        trim();
    }

    Int operator*(long long v) const {
        Int res = *this;
        res *= v;
        return res;
    }

    friend pair <Int, Int> divmod(const Int &a1, const Int &b1) {
        int norm = base / (b1.a.back() + 1);
        Int a = a1.abs() * norm;
        Int b = b1.abs() * norm;
        Int q, r;
        q.a.resize(a.a.size());

        for (int i = a.a.size() - 1; i >= 0; i--) {
            r *= base;
            r += a.a[i];
            int s1 = r.a.size() <= b.a.size() ? 0 : r.a[b.a.size()];
            int s2 = r.a.size() <= b.a.size() - 1 ? 0 : r.a[b.a.size() - 1];
            int d = ((long long) base * s1 + s2) / b.a.back();
            r -= b * d;
            while (r < 0)
                r += b, --d;
            q.a[i] = d;
        }

        q.sign = a1.sign * b1.sign;
        r.sign = a1.sign;
        q.trim();
        r.trim();
        return make_pair(q, r / norm);
    }

    Int operator/(const Int &v) const {
        return divmod(*this, v).first;
    }

    Int operator%(const Int &v) const {
        return divmod(*this, v).second;
    }

    void operator/=(int v) {
        if (v < 0)
            sign = -sign, v = -v;
        for (int i = (int) a.size() - 1, rem = 0; i >= 0; --i) {
            long long cur = a[i] + rem * (long long) base;
            a[i] = (int) (cur / v);
            rem = (int) (cur % v);
        }
        trim();
    }

    Int operator/(int v) const {
        Int res = *this;
        res /= v;
        return res;
    }

    int operator%(int v) const {
        if (v < 0)
            v = -v;
        int m = 0;
        for (int i = a.size() - 1; i >= 0; --i)
            m = (a[i] + m * (long long) base) % v;
        return m * sign;
    }

    void operator+=(const Int &v) { *this = *this + v; }

    void operator-=(const Int &v) { *this = *this - v; }

    void operator*=(const Int &v) { *this = *this * v; }

    void operator/=(const Int &v) { *this = *this / v; }

    Int operator++() {
        *this += 1;
        return *this;
    }

    Int operator++(int) {
        Int temp = *this;
        *this += 1;
        return temp;
    }

    Int operator--() {
        *this -= 1;
        return *this;
    }

    Int operator--(int) {
        Int temp = *this;
        *this -= 1;
        return temp;
    }

    bool operator<(const Int &v) const {
        if (sign != v.sign)
            return sign < v.sign;
        if (a.size() != v.a.size())
            return a.size() * sign < v.a.size() * v.sign;
        for (int i = a.size() - 1; i >= 0; i--)
            if (a[i] != v.a[i])
                return a[i] * sign < v.a[i] * sign;
        return false;
    }

    bool operator>(const Int &v) const { return v < *this; }

    bool operator<=(const Int &v) const { return !(v < *this); }

    bool operator>=(const Int &v) const { return !(*this < v); }

    bool operator==(const Int &v) const { return !(*this < v) && !(v < *this); }

    bool operator!=(const Int &v) const { return *this < v || v < *this; }

    void trim() {
        while (!a.empty() && !a.back())
            a.pop_back();
        if (a.empty())
            sign = 1;
    }

    bool isZero() const { return a.empty() || (a.size() == 1 && !a[0]); }

    Int operator-() const {
        Int res = *this;
        res.sign = -sign;
        return res;
    }

    Int abs() const {
        Int res = *this;
        res.sign *= res.sign;
        return res;
    }

    long long longValue() const {
        long long res = 0;
        for (int i = a.size() - 1; i >= 0; i--)
            res = res * base + a[i];
        return res * sign;
    }

    friend Int gcd(const Int &a, const Int &b) { return b.isZero() ? a : gcd(b, a % b); }

    friend Int lcm(const Int &a, const Int &b) { return a / gcd(a, b) * b; }

    void read(const string &s) {
        sign = 1;
        a.clear();
        int pos = 0;
        while (pos < (int) s.size() && (s[pos] == '-' || s[pos] == '+')) {
            if (s[pos] == '-')
                sign = -sign;
            ++pos;
        }

        for (int i = s.size() - 1; i >= pos; i -= base_digits) {
            int x = 0;
            for (int j = max(pos, i - base_digits + 1); j <= i; j++)
                x = x * 10 + s[j] - '0';
            a.push_back(x);
        }
        trim();
    }

    friend istream &operator>>(istream &stream, Int &v) {
        string s;
        stream >> s;
        v.read(s);
        return stream;
    }

    friend ostream &operator<<(ostream &stream, const Int &v) {
        if (v.sign == -1)
            stream << '-';
        stream << (v.a.empty() ? 0 : v.a.back());
        for (int i = (int) v.a.size() - 2; i >= 0; --i)
            stream << setw(base_digits) << setfill('0') << v.a[i];
        return stream;
    }

    static vector<int> convert_base(const vector<int> &a, int old_digits, int new_digits) {
        vector<long long> p(max(old_digits, new_digits) + 1);
        p[0] = 1;
        for (int i = 1; i < (int) p.size(); i++)
            p[i] = p[i - 1] * 10;
        vector<int> res;
        long long cur = 0;
        int cur_digits = 0;
        for (int i = 0; i < (int) a.size(); i++) {
            cur += a[i] * p[cur_digits];
            cur_digits += old_digits;
            while (cur_digits >= new_digits) {
                res.push_back(int(cur % p[new_digits]));
                cur /= p[new_digits];
                cur_digits -= new_digits;
            }
        }
        res.push_back((int) cur);
        while (!res.empty() && !res.back())
            res.pop_back();
        return res;
    }

    typedef vector<long long> vll;

    static vll karatsubaMultiply(const vll &a, const vll &b) {
        int n = a.size();
        vll res(n + n);
        if (n <= 32) {
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    res[i + j] += a[i] * b[j];
            return res;
        }

        int k = n >> 1;
        vll a1(a.begin(), a.begin() + k);
        vll a2(a.begin() + k, a.end());
        vll b1(b.begin(), b.begin() + k);
        vll b2(b.begin() + k, b.end());

        vll a1b1 = karatsubaMultiply(a1, b1);
        vll a2b2 = karatsubaMultiply(a2, b2);

        for (int i = 0; i < k; i++)
            a2[i] += a1[i];
        for (int i = 0; i < k; i++)
            b2[i] += b1[i];

        vll r = karatsubaMultiply(a2, b2);

        for (int i = 0; i < (int) a1b1.size(); i++)
            r[i] -= a1b1[i];
        for (int i = 0; i < (int) a2b2.size(); i++)
            r[i] -= a2b2[i];

        for (int i = 0; i < (int) r.size(); i++)
            res[i + k] += r[i];
        for (int i = 0; i < (int) a1b1.size(); i++)
            res[i] += a1b1[i];
        for (int i = 0; i < (int) a2b2.size(); i++)
            res[i + n] += a2b2[i];
        return res;
    }

    Int operator*(const Int &v) const {
        vector<int> a6 = convert_base(this->a, base_digits, 6);
        vector<int> b6 = convert_base(v.a, base_digits, 6);

        vll a(a6.begin(), a6.end());
        vll b(b6.begin(), b6.end());

        while (a.size() < b.size())
            a.push_back(0);
        while (b.size() < a.size())
            b.push_back(0);
        while (a.size() & (a.size() - 1))
            a.push_back(0), b.push_back(0);

        vll c = karatsubaMultiply(a, b);
        Int res;
        res.sign = sign * v.sign;
        for (int i = 0, carry = 0; i < (int) c.size(); i++) {
            long long cur = c[i] + carry;
            res.a.push_back((int) (cur % 1000000));
            carry = (int) (cur / 1000000);
        }
        res.a = convert_base(res.a, 6, base_digits);
        res.trim();
        return res;
    }

    //Added part.

    friend Int max(const Int &a, const Int &b) {
        if (a < b) {
            return a;
        }
        return b;
    }

    friend Int max(const Int &a, const int32_t &B) {
        Int b = B;
        return max(a, b);
    }

    friend Int max(const Int &a, const int64_t &B) {
        Int b = B;
        return max(a, b);
    }

    friend Int min(const Int &a, const Int &b) {
        if (a > b) {
            return b;
        }
        return a;
    }

    friend Int min(const Int &a, const int32_t &B) {
        Int b = B;
        return min(a, b);
    }

    friend Int min(const Int &a, const int64_t &B) {
        Int b = B;
        return min(a, b);
    }

    friend Int pow(const Int &a, const Int &b) {
        Int _c = 1;
        Int _b = b;
        Int _a = a;
        while (_b != 0) {
            if (_b % 2) {
                _c *= _a;
            }
            _a *= _a;
            _b /= 2;
        }
        return _c;
    }

    friend Int pow(const Int &a, const int32_t &B) {
        Int b = B;
        return pow(a, b);
    }

    friend Int pow(const Int &a, const int64_t &B) {
        Int b = B;
        return pow(a, b);
    }

    friend Int sqrt(Int a) {
        Int x0 = a, x1 = (a + 1) / 2;
        while (x1 < x0) {
            x0 = x1;
            x1 = (x1 + a / x1) / 2;
        }
        return x0;
    }
};
/////////////////////////////////MergeSortTree///////////////////////////
#ifdef mergesorttree
constexpr int nax=2e5+6:
vector<int>st[4*nax]; int a[nax];
void build(int ss,int se,int si)
{
    if(ss==se)
    {
        st[si].eb(a[ss]); return;
    }
    int mid=(ss+se)>>1;
    build(ss,mid,2*si+1); build(mid+1,se,2*si+2);
    merge(st[2*si+1].begin(),st[2*si+1].end(),st[2*si+2].begin(),st[2*si+2].end(),back_inserter(st[si]));
}
int query(int ss,int se,int si,int l,int r)
{
    if(ss>r||se<l||se>ss) return;
}
#endif
/////////////////////////////////LazysegmentTree/////////////////////////
#ifndef lazySegtree
constexpr int nax = 2e5 + 6;
int st[4 * nax], lazy[nax];
int a[nax];

void build(int ss, int se, int si) {
    if (ss == se) {
        st[si] = a[ss];
        return;
    }
    int mid = (ss + se) >> 1;
    build(ss, mid, 2 * si + 1);
    build(mid + 1, se, 2 * si + 2);
}

void update(int ss, int se, int si, int l, int r, int x) {
    if (lazy[si] != 0) {
        //apply changes to node si
        //
        //
        if (ss != se) {
            lazy[2 * si + 1] += lazy[si];
            lazy[2 * si + 2] += lazy[si];
        }
        lazy[si] = 0;
    }
    if (ss > r || se < l || ss > se) return;
    if (l <= ss and se <= r) {
        //apply change of x to node si
        //
        //
        if (ss != se) {
            lazy[2 * si + 1] += x;
            lazy[2 * si + 2] += x;
        }
        return;
    }
    int mid = (ss + se) >> 1;
    update(ss, mid, 2 * si + 1, l, r, x);
    update(mid + 1, se, 2 * si + 2, l, r, x);
    st[si] = st[2 * si + 1] + st[2 * si + 2];
}

int query(int ss, int se, int si, int l, int r) {
    if (lazy[si] != 0) {
        //apply changes to node si
        //
        //
        if (ss != se) {
            lazy[2 * si + 1] += lazy[si];
            lazy[2 * si + 2] += lazy[si];
        }
        lazy[si] = 0;
    }
    if (l <= ss and se <= r) {
        return st[si];
    }
    int mid = (ss + se) >> 1;
    return query(ss, mid, 2 * si + 1, l, r) + query(mid + 1, se, 2 * si + 2, l, r);
}

#endif

/////////////////////////////////My Stuff/////////////////////////////////
template<typename T, typename V>
T ce(T a, V b) {
    if (a < 0) return a / b;
    T res;
    if (a % b == 0)res = a / b; else res = a / b + 1;
    return res;
}

template<typename W, typename F>
W fl(W a, F b) {
    if (abs(a) % abs(b) == 0) return a / b;
    if (a < 0) return a / b - 1;
    return a / b;
}

ll multiplym2(ll a, ll b) {
    ll res = 0;
    while (b) {
        if (b & 1) res = (res + a) % mod2;
        b >>= 1;
        a = (a * 2) % mod2;
    }
    return res;
}

ll multiplym1(ll a, ll b) {
    ll res = 0;
    while (b) {
        if (b & 1) res = (res + a) % mod1;
        b >>= 1;
        a = (a * 2) % mod1;
    }
    return res;
}

ll multiply(ll a, ll b) {
    ll res = 0;
    while (b) {
        if (b & 1) res += a;
        b >>= 1;
        a = (a << 1);
    }
    return res;
}

ll powerm2(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod2;
        a = (a * a) % mod2;
        b >>= 1;
    }
    return res;
}

ll powerm1(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod1;
        a = (a * a) % mod1;
        b >>= 1;
    }
    return res;
}

ll power(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a);
        a = (a * a);
        b >>= 1;
    }
    return res;
}

ll fact[MAX + 7];

void fac_compute() {
    fact[0] = 1;
    fact[1] = 1;
    rep(i, 2, MAX - 1) fact[i] = (fact[i - 1] * i) % mod1;
}

ll modInv(int n) { return powerm1(n, mod1 - 2); }

int ncr(int n, int r) {
    if (r == 0) return 1;
    return (fact[n] * modInv(fact[r]) % mod1 * modInv(fact[n - r]) % mod1) % mod1;
}

template<typename T, typename V>
int find_divisor_power(T n, V a) {
    T res = 1;
    int p = -1;
    while (n % res == 0) {
        p++;
        res *= a;
    }
    return p;
}

template<typename T, typename V>
T find_exponent(T n, V p) {
    T x = 0;
    while (n) {
        n /= p;
        x += n;
    }
    return x;
}

template<typename L>
void factorise(L a, vector <L> &f) {
    int limit = sqrt(a);
    rep(i, 1, limit) {
        if (a % i == 0) {
            f.push_back(i);
            if (i != a / i) f.push_back(a / i);
        }
    }
}

vector<int> prime;

void sieve(int limit) {
    prime.eb(2);
    prime.eb(3);
    bool sieve[limit];
    for (int i = 0; i < limit; i++)sieve[i] = false;
    for (int x = 1; x * x < limit; x++) {
        for (int y = 1; y * y < limit; y++) {
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5)) { sieve[n] ^= true; }
            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7) { sieve[n] ^= true; }
            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11) { sieve[n] ^= true; }
        }
    }
    for (int r = 5; r * r < limit; r++) {
        if (sieve[r]) {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }
    for (int a = 5; a < limit; a++) { if (sieve[a]) prime.eb(a); }
}

void dfs(int s, vector <vector<int>> v, vector<int> f) {
    stack<int> q;
    q.push(s);
    while (!q.empty()) {
        int m = q.top();
        q.pop();
        f[m] = 1;
        for (auto i = v[m].begin(); i != v[m].end(); ++i) {
            if (!f[*i]) {
                q.push(*i);
                f[*i] = 1;
            }
        }
    }
}

void bfs(int s, vector <vector<int>> v, vector<int> f) {
    queue<int> q;
    q.push(s);
    f[s] = 1;
    while (!q.empty()) {
        int m = q.front();
        q.pop();
        for (auto i = v[m].begin(); i != v[m].end(); ++i) {
            if (!f[*i]) {
                f[*i] = 1;
                q.push(*i);
            }
        }
    }
}

template<typename G>
void primeFactors(G n, vector <G> &pf) {
    if (n % 2 == 0) pf.eb(2);
    while (n % 2 == 0)n = n / 2;
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i = i + 2) {
        if (n % i == 0) pf.eb(i);
        while (n % i == 0) n = n / i;
    }
    if (n > 2) pf.eb(n);
}

template<typename T>
int find_highest_set_bit(T n) { repr(i, 60, 0) { if (bit(n, i)) return i; }}

vector<int> divisor[MAX + 7];

void sieve() { rep(i, 1, MAX) { for (int j = i; j <= MAX; j += i) divisor[j].eb(i); }}

template<typename T>
bool ispowertwo(T x) { return x && (!(x & (x - 1))); }

template<typename T>
bool isPrime(T n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) { return false; }
    for (int i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) { return false; }
    return true;
}

template<typename T>
int lbd(vector <T> &v, T p) {
    if (v[0] >= p) { return 0; }
    if (v[sz(v) - 1] < p) return -1;
    auto it = lb(all(v), p);
    return it - v.begin();
}

template<typename T>
int ubd(vector <T> &v, T p) {
    if (v[0] > p) { return 0; }
    if (v[sz(v) - 1] < p) return -1;
    auto it = ub(all(v), p);
    return it - v.begin();
}

void getZarr(string str, vector<int> &Z) {
    int n = str.length(), L, R, k;
    L = R = 0;
    for (int i = 1; i < n; ++i) {
        if (i > R) {
            L = R = i;
            while (R < n && str[R - L] == str[R]) R++;
            Z[i] = R - L;
            R--;
        } else {
            k = i - L;
            if (Z[k] < R - i + 1) Z[i] = Z[k];
            else {
                L = i;
                while (R < n && str[R - L] == str[R]) R++;
                Z[i] = R - L;
                R--;
            }
        }
    }
}

void zfunc(string text, string pattern, vector<int> &index) {
    string concat = pattern + "$" + text;
    int l = concat.length();
    vector<int> Z(l);
    getZarr(concat, Z);
    rep(i, 0, l - 1) { if (Z[i] == (int) pattern.length()) index.eb(i - pattern.length() - 1); }
}

template<typename A, typename B>
B largest_power_less_than(A n, B a) {
    A res = 1;
    B p = -1;
    while (n > res) {
        res *= a;
        p++;
    }
    return p;
}

template<typename A, typename B>
B largest_power_less_or_equal_to(A n, B a) {
    A res = 1;
    B p = -1;
    while (n >= res) {
        res *= a;
        p++;
    }
    return p;
}

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

struct HASH {
    size_t operator()(const pair<int, int> &x) const {
        return hash<long long>()(((long long) x.first) ^ (((long long) x.second) << 32));
    }
};

int spf[MAX];

void spf_compute() {
    spf[1] = 1;
    for (int i = 2; i < MAX; i++) spf[i] = i;
    for (int i = 4; i < MAX; i += 2)spf[i] = 2;
    for (int i = 3; i * i < MAX; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

vector<int> getPF(int x) {
    vector<int> ret;
    um<int, int, custom_hash> repeat;
    while (x != 1) {
        if (!repeat[spf[x]]) {
            ret.eb(spf[x]);
            repeat[spf[x]] = 1;
        }
        x = x / spf[x];
    }
    return ret;
}

template<typename T>
ll sumy(vector <T> &v) {
    ll s = 0;
    for (auto i:v)s += i;
    return s;
}

template<typename T>
T max_ele(vector <T> v) {
    T m = v[0];
    int n = sz(v);
    if (n > 1) { rep(i, 1, n - 1)m = max(m, v[i]); }
    return m;
}

template<typename T>
T min_ele(vector <T> v) {
    T m = v[0];
    int n = sz(v);
    if (n > 1) { rep(i, 1, n - 1)m = min(m, v[i]); }
    return m;
}

template<typename T>
int max_ele_ind(vector <T> v) {
    T m = v[0];
    int ind = 0, n = sz(v);
    if (n > 1) {
        rep(i, 1, n - 1) {
            if (m < v[i]) {
                m = v[i];
                ind = i;
            }
        }
    }
    return ind;
}

template<typename T>
int min_ele_ind(vector <T> v) {
    T m = v[0];
    int ind = 0, n = sz(v);
    if (n > 1) {
        rep(i, 1, n - 1) {
            if (v[i] < m) {
                m = v[i];
                ind = i;
            }
        }
    }
    return ind;
}

////////////////////////////////////////////////////////////////////////////////////
int another_main() {

    return 0;
}
//#define FILES
#define ONPC_FILES
const string INPUT_FILE = "input.txt";
const string OUTPUT_FILE = "output.txt";

int main() {
    FAST_IO;
#ifdef FAST_BUILTINS
    BGF::initialize();
#endif
#ifdef MULTIPRECISION
    MPA::prepare_fft();
#endif
#ifdef ONPC
    #ifdef ONPC_FILES
    freopen(INPUT_FILE.c_str(), "rt", stdin);
    freopen(OUTPUT_FILE.c_str(), "wt", stdout);
#endif
    auto start_time = clock();
    cerr << setprecision(3) << fixed;
#else
#ifdef FILES
    freopen(INPUT_FILE.c_str(), "rt", stdin);
  freopen(OUTPUT_FILE.c_str(), "wt", stdout);
#endif
#endif
    int AMR = another_main();
#ifdef MULTIPRECISION
    MPA::free_fft();
#endif
#ifdef ONPC
    auto end_time = clock();
  cerr << "Execution time: " << (end_time - start_time) * (int)1e3 / CLOCKS_PER_SEC << " ms\n";
#endif
    return AMR;
}
