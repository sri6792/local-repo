// To implement a C++ program to check matching parenthesis
#include <iostream>
using namespace std;
int main() {
string expr;
cout << "Enter expression: ";
cin >> expr;
char stack[100];
int top = -1;
bool isBalanced = true;
for (int i = 0; i < expr.length(); i++) {
char ch = expr[i];
if (ch == '(') {
stack[++top] = '('; // push to stack
} else if (ch == ')') {
if (top == -1) { // no matching '('
isBalanced = false;
break;
} else {
top--; // pop from stack
}
}
}
if (isBalanced && top == -1) {
cout << "Parentheses are balanced" << endl;
} else {
cout << "Parentheses are not balanced" << endl;
}
return 0;
}