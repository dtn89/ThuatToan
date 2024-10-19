#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "Hello! My name is Nam 89";
    for(int i = 0; i < sentence.size(); i++)
    {
        cout << sentence[i] << endl;
        if(sentence[i] == 'N')
        {
            cout << "Found " << sentence[i] << " at " << i << "th index" << endl;
            continue;
        }
        else if (sentence[i] == '8')
        {
            cout << "Found a number " << sentence[i] << " at " << i << "th index" << endl;
            break;
        }
        
    }
    cout << "Done!" << endl;
    return 0;
}