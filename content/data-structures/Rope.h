/**
 * Author: Atai Rakhmatov
 * Date: 2023-10-14
 * Source: GeeksForGeeks
 * Description: scalable string implementation
 * Usage: push_back(): This function is used to input a character
 * at the end of the rope. Time Complexity: O(log N).
 *  - pop_back(): Introduced from C++11(for strings), this
 * function is used to delete the last character from the rope.
 * Time Complexity: O(log N).
 *  - insert(int x, crope r1): Inserts the contents of r1 before
 * the xth element. Time Complexity: For Best Case: O(log N) and
 * For Worst Case: O(N).
 *  - erase(int x, int l): Erases l elements, starting with the
 * xth element. Time Complexity: O(log N).
 *  - substr(int x, int l): Returns a new rope whose elements are
 * the l characters starting at the position x.
 * Time Complexity: O(log N).
 *  - replace(int x, int l, crope r1): Replaces the l elements
 * beginning with the xth element with the elements in r1.
 * Time Complexity: O(log N).
 *  - concatenate(+): concatenate two ropes using the ‘+’ symbol.
 * Time Complexity: O(1).
 * Time: O(\log N)
 * Status: untested
 */
#pragma once

#include <bits/extc++.h> /** keep-include */
using namespace __gnu_cxx;

void example() {
	rope<char> r = "abcdefg";
	std::cout << r << '\n';
}
