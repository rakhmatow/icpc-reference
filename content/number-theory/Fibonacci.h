/**
 * Author: Atai Rakhmatov
 * Source: https://stackoverflow.com/a/32273141
 * Description: Returns n-th Fibonacci number modulo m.
 * Time: $\log(n)$
 * Status: semi-tested
 */
#pragma once

using ull = unsigned ll;
// for mod and result bigger than int, use modmul
// from "ModMulLL.h" for all multiplications
int fib(ull n, int m) {
	ull a, b, p, q, aq, qq;
	a = q = 1;
	b = p = 0;
	while (n) {
		if (n & 1) {
			aq = a*q % m;
			a = (b*q + aq + a*p) % m;
			b = (b*p + aq) % m;
			--n;
		}
		qq = q*q % m;
		q = (2*p*q + qq) % m;
		p = (p*p + qq) % m;
		n >>= 1;
	}
	return b;
}