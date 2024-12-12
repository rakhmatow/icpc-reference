/**
 * Author: Atai Rakhmatov
 * Source: http://e-maxx.ru/algo/dijkstra
 * Description: $e = -1$: find shortest distances from $b$, else find shortest path from $b$ to $e$
 * Time: O(N^2 + M)
 * Status: tested on https://codeforces.com/group/nGNkhppaA5/contest/479325/problem/B
 */
#pragma once

vll dijkstraDense(vvpll &a, int b, int e) {
	int n = a.size();
	vll d(n, LLONG_MAX); d[b] = 0;
	vi p(n), u(n);
	forn(i, 0, n) {
		int v = -1;
		forn(j, 0, n) if (!u[j] && (v == -1 || d[j] < d[v]))
				v = j;
		if (d[v] == LLONG_MAX || v == e) break;
		u[v] = 1;
		for (auto &[to, len] : a[v])
			if (d[v] + len < d[to]) {
				d[to] = d[v] + len;
				p[to] = v;
			}
	}
	if (e == -1) return d; // find dists to all vertices
	vll res;
	for (; e != b; e = p[e]) res.pb(e);
	res.pb(e);
	reverse(all(res));
	return res;
}
