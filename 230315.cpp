#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ Extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
/*
ctrl + shift + b : 빌드
이후 터미널(ctrl + j)에서 ./파일이름

f9중단점 f5 디버깅
*/