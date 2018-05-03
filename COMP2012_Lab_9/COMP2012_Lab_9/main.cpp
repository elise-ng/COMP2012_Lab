#include <iostream>
#include <string>
#include <sstream>
#include "BST.h"
#include "BSTExercises.h"
using namespace std;

/*
 * 	 **** You should not modify this function! ****
 *   Inputs
 *   (1) bst		    : The BST shown in the lab page. You need to build this in main().
 *   (2) encoded_message: A series of morse code symbols. Each word is separated by a '/', and each character is separated by a ' '.
 *   (3) word_delim     : The delimiter of words.
 *   (4) char_delim     : The delimiter of characters.
 *
 *   Output
 *   The decoded message.
 */
string decode_message(const BST<int, char>& bst, const string& encoded_message, char word_delim='/', char char_delim=' ') {
	// Example: The original message is "AB CD".
	//      	A => .-
	// 			B => -...
	// 		   AB => .- -...
	//          C => -.-.
	//          D => -..
	// 		   CD => -.-. -..
	// 		AB CD => .- -.../-.-. -..
	// 			Then, the encoded message is ".- -.../-.-. -..".

	stringstream ss(encoded_message);
	string decoded_message, symbols, symbol;
	while (getline(ss, symbols, word_delim)) {
		// Here we split the encoded_message by '/'. In the first iteration,  symbols = ".- -..."
		//											 In the second iteration, symbols = "-.-. -.."
		stringstream ss_(symbols);
		while (getline(ss_, symbol, char_delim))
			// Here we split the symbols by ' '.
			// The variable symbol will be the morse code symbols (i.e., ".-", "-...", "-.-.", "-..") in the encoded_message,
			// and you are going to decode it in the following line.
			decoded_message += decode(bst, symbol);
		decoded_message += ' ';
	}
	return decoded_message;
}

int main() {
	cout << "======================================" << endl;
	cout << "Part A: Implementation" << endl;
	cout << "======================================" << endl;

	BST<int, char> bst_a;
	cout << "Tree:" << endl;
	bst_a.print();
	cout << boolalpha << "isBalanced : " << isBalanced(bst_a) << endl;
	cout << "diameter : " << diameter(bst_a) << endl;
	cout << "**************************************" << endl;

	bst_a.insert(5, 'a');
	bst_a.insert(10, 'b');
	cout << "Tree:" << endl;
	bst_a.print();
	cout << boolalpha << "isBalanced : " << isBalanced(bst_a) << endl;
	cout << "diameter : " << diameter(bst_a) << endl;
	cout << "**************************************" << endl;

	bst_a.insert(15, 'c');
	bst_a.insert(2, 'd');
	cout << "Tree:" << endl;
	bst_a.print();
	cout << boolalpha << "isBalanced : " << isBalanced(bst_a) << endl;
	cout << "diameter : " << diameter(bst_a) << endl;
	cout << "**************************************" << endl;

	bst_a.insert(30, 'e');
	bst_a.insert(3, 'f');
	bst_a.insert(1, 'g');
	bst_a.insert(0, 'h');

	cout << "Tree:" << endl;
	bst_a.print();
	cout << boolalpha << "isBalanced : " << isBalanced(bst_a) << endl;
	cout << "diameter : " << diameter(bst_a) << endl;


	cout << endl << endl;
	cout << "======================================" << endl;
	cout << "Part B: Morse Code Decoder " << endl;
	cout << "======================================" << endl;
    BST<int, char> bst_b;

	/****** START YOUR IMPLEMENTATION FOR PART B1 HERE ******/
    bst_b.insert(14, '*');
    bst_b.insert(7, 'E');
    bst_b.insert(22, 'T');
    bst_b.insert(4, 'I');
    bst_b.insert(10, 'A');
    bst_b.insert(18, 'N');
    bst_b.insert(26, 'M');
    bst_b.insert(2, 'S');
    bst_b.insert(6, 'U');
    bst_b.insert(9, 'R');
    bst_b.insert(12, 'W');
    bst_b.insert(16, 'D');
    bst_b.insert(20, 'K');
    bst_b.insert(24, 'G');
    bst_b.insert(27, 'O');
    bst_b.insert(1, 'H');
    bst_b.insert(3, 'V');
    bst_b.insert(5, 'F');
    bst_b.insert(8, 'L');
    bst_b.insert(11, 'P');
    bst_b.insert(13, 'J');
    bst_b.insert(15, 'B');
    bst_b.insert(17, 'X');
    bst_b.insert(19, 'C');
    bst_b.insert(21, 'Y');
    bst_b.insert(23, 'Z');
    bst_b.insert(25, 'Q');

	/******* END YOUR IMPLEMENTATION FOR PART B1 HERE *******/
    bst_b.print();
	cout << boolalpha << "isBalanced : " << isBalanced(bst_b) << endl;
	cout << "diameter : " << diameter(bst_b) << endl << endl;

    string message_1("- .... .. .../.. .../- .... ./.-.. .- ... -/.-.. .- -.../.. -./- .... .. .../-.-. --- ..- .-. ... .");
    cout << decode_message(bst_b, message_1) << endl;

    string message_2("- .... .- -. -.-/-.-- --- ..-/... ---/-- ..- -.-. ....");
	cout << decode_message(bst_b, message_2) << endl;

	string message_3("--. --- --- -../.-.. ..- -.-. -.-/.-- .. - ..../-.-- --- ..- .-./. -..- .- -- ...");
	cout << decode_message(bst_b, message_3) << endl;

}
