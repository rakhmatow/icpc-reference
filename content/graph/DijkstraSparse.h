/**
 * Author: Atai Rakhmatov
 * Source: http://e-maxx.ru/algo/dijkstra_sparse
 * Description: $e = 1$: find shortest distances from $b$, else find shortest path from $b$ to $e$
 * Time: O(M \log N)
 * Status: tested on https://codeforces.com/group/nGNkhppaA5/contest/479325/problem/B
 */
#pragma once

vll dijkstraSparse(vvpll &a, int b, int e) {
	int n = a.size();
	vll d(n, LLONG_MAX); d[b] = 0;
	auto cmp = [&](int u, int v) {
		return d[u] == d[v] ? u < v : d[u] < d[v]; };
	set<int, decltype(cmp)> q(cmp); q.insert(b);
	vi p(n);
	while (!q.empty()) {
		int v = *q.begin(); q.erase(q.begin());
		if (v == e) break;
		for (auto &[to, len] : a[v])
			if (d[v] + len < d[to]) {
				q.erase(to);
				d[to] = d[v] + len;
				p[to] = v;
				q.insert(to);
			}
	}
	if (e == -1) return d; // find dists to all vertices
	vll res;
	for (; e != b; e = p[e]) res.pb(e);
	res.pb(e);
	reverse(all(res));
	return res;
}
