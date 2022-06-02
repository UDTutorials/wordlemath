#include<iostream>
#include<cmath>
#include <fstream>
#include<string>

using namespace std;

int main() {
	fstream words;
	int size;
	string arr_words[15920];

	words.open("words.txt", ios::in);
	int counter = 0;
	int zi = 0;
	if (words.is_open()) {
		string c_word;
		while (getline(words, c_word)) {
			if (c_word.size() == 5) {
				arr_words[counter] = c_word;
				counter++;
			}
			zi++;
		}


		words.close();
	}
	cout << "Total English Words: " << zi << "\n";
	cout << "5 Letter Words : " << counter << "\n";
	//Next portion will count the letters in the words.
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	a = b = c = d = e = f = g = h = i = j = k = l = m = n = o = p = q = r = s = t = u = v = w = x = y = z = 0;
	for (int zx = 0; zx < 15920; zx++) {
		if (arr_words[zx].find('a') != std::string::npos) {
			a++;
		}
		if (arr_words[zx].find('b') != std::string::npos) {
			b++;
		}
		if (arr_words[zx].find('c') != std::string::npos) {
			c++;
		}
		if (arr_words[zx].find('d') != std::string::npos) {
			d++;
		}
		if (arr_words[zx].find('e') != std::string::npos) {
			e++;
		}
		if (arr_words[zx].find('f') != std::string::npos) {
			f++;
		}
		if (arr_words[zx].find('g') != std::string::npos) {
			g++;
		}
		if (arr_words[zx].find('h') != std::string::npos) {
			h++;
		}
		if (arr_words[zx].find('i') != std::string::npos) {
			i++;
		}
		if (arr_words[zx].find('j') != std::string::npos) {
			j++;
		}
		if (arr_words[zx].find('k') != std::string::npos) {
			k++;
		}
		if (arr_words[zx].find('l') != std::string::npos) {
			l++;
		}
		if (arr_words[zx].find('m') != std::string::npos) {
			m++;
		}
		if (arr_words[zx].find('n') != std::string::npos) {
			n++;
		}
		if (arr_words[zx].find('o') != std::string::npos) {
			o++;
		}
		if (arr_words[zx].find('p') != std::string::npos) {
			p++;
		}
		if (arr_words[zx].find('q') != std::string::npos) {
			q++;
		}
		if (arr_words[zx].find('r') != std::string::npos) {
			r++;
		}
		if (arr_words[zx].find('s') != std::string::npos) {
			s++;
		}
		if (arr_words[zx].find('t') != std::string::npos) {
			t++;
		}
		if (arr_words[zx].find('u') != std::string::npos) {
			u++;
		}
		if (arr_words[zx].find('v') != std::string::npos) {
			v++;
		}
		if (arr_words[zx].find('w') != std::string::npos) {
			w++;
		}
		if (arr_words[zx].find('x') != std::string::npos) {
			x++;
		}
		if (arr_words[zx].find('y') != std::string::npos) {
			y++;
		}
		if (arr_words[zx].find('z') != std::string::npos) {
			z++;
		}
	}
	cout << "A: " << a << "\n";
	cout << "B: " << b << "\n";
	cout << "C: " << c << "\n";
	cout << "D: " << d << "\n";
	cout << "E: " << e << "\n";
	cout << "F: " << f << "\n";
	cout << "G: " << g << "\n";
	cout << "H: " << h << "\n";
	cout << "I: " << i << "\n";
	cout << "J: " << j << "\n";
	cout << "K: " << k << "\n";
	cout << "L: " << l << "\n";
	cout << "M: " << m << "\n";
	cout << "N: " << n << "\n";
	cout << "O: " << o << "\n";
	cout << "P: " << p << "\n";
	cout << "Q: " << q << "\n";
	cout << "R: " << r << "\n";
	cout << "S: " << s << "\n";
	cout << "T: " << t << "\n";
	cout << "U: " << u << "\n";
	cout << "V: " << v << "\n";
	cout << "W: " << w << "\n";
	cout << "X: " << x << "\n";
	cout << "Y: " << y << "\n";
	cout << "Z: " << z << "\n";
	// BEST WORD CODE 
	string best_words_a[800]; // 654 is the number of "best" words we have on our first array
	int aq = 0; // counter for bestwords_a
	for (int zi = 0; zi < 15920; zi++) { // we have to use two letter names for variables as every "single" letter name is in use.
		if (arr_words[zi].find('a') != std::string::npos && arr_words[zi].find('e') != std::string::npos && arr_words[zi].find('s') != std::string::npos) {
			best_words_a[aq] = arr_words[zi];
			aq++; // increment
		}

	}
	cout << "1rst Run Amount : " << aq - 1 << endl;

	// BEST WORD SORTING
	int qa = 0;
	string best_words_b[700];
	for (int ix = 0; ix < 654; ix++) { // we use 654 as we are looking through the 654 words previously found
		if (best_words_a[ix].find('r') != std::string::npos && best_words_a[ix].find('i') != std::string::npos) {
			best_words_b[qa] = best_words_a[ix];
			qa++; // increment
		}

	}
	cout << "2nd Run Amount : " << qa - 1 << endl;
}





