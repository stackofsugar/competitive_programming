#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> parse_string(string);

int main() {
    string g_input;
    vector<string> g_vectorInput;
    int g_intTemp;
    string g_strTemp;

    cin >> g_input;                                                                     //  [0]  [1]   [2]   [3]
    g_vectorInput = parse_string(g_input); // <- Method to parse the time as string array [hour][mins][secs][am/pm]

    if (g_vectorInput[3] == (string)"PM"){
        g_intTemp = stoi(g_vectorInput[0],nullptr,10);
        g_intTemp = g_intTemp + 12;
        g_vectorInput[0] = to_string(g_intTemp);
        g_intTemp = 0;

        if (g_vectorInput[0] == "24"){
            g_vectorInput[0] = "12";
        }
    }
    else {
        if (g_vectorInput[0] == "12"){
            g_vectorInput[0] = "00";
        }
    }

    for (int i = 0; i < 4; i++){
        g_strTemp = string(2 - g_vectorInput[i].length(), '0') + g_vectorInput[i];
        g_vectorInput[i] = g_strTemp;
    }

    g_vectorInput.erase(g_vectorInput.begin() + 3);

    const char colon[3] = {':',':',' '};
    for (int i = 0; i < 3; i++){
        cout << g_vectorInput[i] << colon[i];
    }

    cout << endl;

}

vector<string> parse_string(string ps_str){
    istringstream ps_strStream(ps_str);    // stream to recieve the string 
    vector<int> ps_catchInt;               // Recieve the integers from stream
    ps_catchInt.resize(3);                 // Resizing the integer vector
    vector<string> ps_returnVect;          // Vector to return the parsed value
    string ps_catchMeridian;               // String containing AM / PM
    char ps_charDumpStream;                // Basically dumping the ":"

    ps_strStream >> ps_catchInt[0] >> ps_charDumpStream 
                 >> ps_catchInt[1] >> ps_charDumpStream
                 >> ps_catchInt[2] >> ps_catchMeridian;

    for (int i = 0; i < 3; i++){
        ps_returnVect.push_back(to_string(ps_catchInt[i]));
    }
    ps_returnVect.push_back(ps_catchMeridian);

    return ps_returnVect;
}