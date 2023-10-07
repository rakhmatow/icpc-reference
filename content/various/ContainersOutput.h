/**
 * Author: someone from CF
 * License: CC0
 * Description: ostream output operator overrides for various containers
 * Usage: cout << x;
 * Status: untested
 */
#pragma once

template<typename L, typename R>
ostream& operator<<(ostream& o, const pair<L, R>& p) {
    o << '(' << p.first << ',' << p.second << ')';
    return o;
}

template<typename T1, typename T2, typename T3>
ostream& operator<<(ostream& o, const tuple<T1, T2, T3>& tp) {
    auto& [t1, t2, t3] = tp;
    o << '(' << t1 << ',' << t2 << ',' << t3 << ')';
    return o;
}

template<typename T>
ostream& operator<<(ostream& o, const vector<T>& v) {
    o << '[';
    for (auto& i : v) o << i << ' ';
    o << "]\n";
    return o;
}

template<typename T>
ostream& operator<<(ostream& o, const set<T>& v) {
    o << '{';
    for (auto& i : v) o << i << ' ';
    o << "}\n";
    return o;
}

template<typename T>
ostream& operator<<(ostream& o, const unordered_set<T>& v) {
    o << '{';
    for (auto& i : v) o << i << ' ';
    o << "}\n";
    return o;
}

template<typename K, typename V>
ostream& operator<<(ostream& o, const map<K, V>& m) {
    o << '{';
    for (auto& [k, v] : m) o << k << ':' << v << ' ';
    o << "}\n";
    return o;
}

template<typename K, typename V>
ostream& operator<<(ostream& o, const unordered_map<K, V>& m) {
    o << '{';
    for (auto& [k, v] : m) o << k << ':' << v << ' ';
    o << "}\n";
    return o;
}
