#include "../utilities/template.h"

#include "../../content/numerical/FastSubsetTransform.h"

int main() {
	forn(k,0,10) {
		vi a(1 << k), b = a, c = a, target = a;
		for(auto &x: a) x = rand() % 6 - 2;
		for(auto &x: b) x = rand() % 6 - 2;
		forn(i,0,1 << k) forn(j,0,1 << k) target[i & j] += a[i] * b[j];
		// forn(i,0,1 << k) cout << a[i] << ' '; cout << endl;
		// forn(i,0,1 << k) cout << b[i] << ' '; cout << endl;
		FST(a, false);
		FST(b, false);
		forn(i,0,1 << k) c[i] = a[i] * b[i];
		FST(c, true);
		// forn(i,0,1 << k) cout << c[i] << ' '; cout << endl;
		// forn(i,0,1 << k) cout << target[i] << ' '; cout << endl;
		assert(c == target);
	}
	cout<<"Tests passed!"<<endl;
}
