/**
 * Author: someone from CF
 * Source: https://codeforces.com/contest/1559/submission/126034469
 * Description: debug output for various classes
 * Usage: dbg(x);
 * Status: untested
 */
#pragma once

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename Tc, typename T = typename enable_if<!is_same<Tc, string>::value, typename Tc::value_type>::type> ostream& operator<<(ostream &os, const Tc &v) { os << '{'; string s; for (const T &x : v) os << s << x, s = ", "; return os << '}'; }
void d() { cerr << endl; }
template<typename Head, typename... Tail> void d(Head H, Tail... T) { cerr << ' ' << H; d(T...); }
#ifdef NOT_OJ
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", d(__VA_ARGS__)
#else
#define dbg(...)
#endif
