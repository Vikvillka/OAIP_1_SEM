#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <string> 
#include <sstream> 
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    string s, word;
    cout << "¬ведите строку:\n";
    getline(cin, s);
    size_t min = s.size();

    stringstream words(s), words1(s);
    while (words >> word)
    {
        if (word.size() < min) min = word.size();
    }

    while (words1 >> word)
    {
        if (word.size() == min) cout << word << "\n";
    }

    system("pause");
    return 0;
}
