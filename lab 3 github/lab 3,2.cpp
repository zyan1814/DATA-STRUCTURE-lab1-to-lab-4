#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int main() {
 char str[100];
 cout << "Enter a string: ";
 cin.getline(str, 100);
 char* word = strtok(str, " ");
 int qCount = 1;
 while (word != NULL) {
 queue<char> q;
 for (int i = 0; word[i] != '\0'; i++) {
 q.push(word[i]);
 }
 cout << "Q" << qCount++ << " = ";
 while (!q.empty()) {
 cout << q.front();
 q.pop();
 if (!q.empty()) cout << " ? ";
 }
 cout << "\n\n";
 word = strtok(NULL, " ");
 }
 return 0;
}
