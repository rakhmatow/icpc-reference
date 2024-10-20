/**
 * Author: Atai Rakhmatov
 * Source: CS With Terry Youtube
 * Description:
 * Find the smallest i in $[l,r)$ for which $f(i) = 0$, assuming that $f(l \dots i-1) = 1 and f(i \dots r) = 0$. 
 * Usage:
	int ind = binSearch(0,n,[\&](int i){return a[i];});
 * Time: O(\log(r - l))
 * Status: untested
 */
#pragma once

template<class F>
ll binSearch(ll l, ll r, F f) {
	--l;
	assert(l < r);
	while (l + 1 != r) {
		ll mid = (l + r) / 2;
		if (f(mid)) l = mid;
		else r = mid;
	}
	return r;
}
