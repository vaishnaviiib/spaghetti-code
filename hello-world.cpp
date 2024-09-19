#include <iostream>
using namespace std;

int main() {
    
    // my comment

    string words[2] = new string ["Hello", "World"];
    for (int i = 0; i < words.length; i++)
    {
        cout << words[i];
        cout << " ";
    }
    cout << endl;
    return 0;
}
