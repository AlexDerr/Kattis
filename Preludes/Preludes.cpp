#include <iostream>
#include <string>
using namespace std;

string getOutput(string note, string tonality) {
    if (note == "Ab") {
        return "G# " + tonality;
    }
    else if (note == "A#") {
        return "Bb " + tonality;
    }
    else if (note == "Bb") {
        return "A# " + tonality;
    }
    else if (note == "C#") {
        return "Db " + tonality;
    }
    else if (note == "Db") {
        return "C# " + tonality;
    }
    else if (note == "D#") {
        return "Eb " + tonality;
    }
    else if (note == "Eb"){
        return "D# " + tonality;
    }
    else if (note == "Gb") {
        return "F# " + tonality;
    }
    else if (note == "F#") {
        return "Gb " + tonality;
    }
    else if (note == "G#") {
        return "Ab " + tonality;
    }
    else
        return "UNIQUE";
}


int main() {
    string  line, note, tonality, output;
    int caseNum = 1;

    while (getline(cin, line)) {
        note = line.substr(0, line.find(' '));
        tonality = line.substr(line.find(' ') + 1, line.length() - 1);
        
        output = getOutput(note, tonality);

        cout << "Case " << caseNum << ": " << output << endl;

        caseNum++;
    }

    return 0;
}
