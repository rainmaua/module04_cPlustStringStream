#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>
using namespace std;
/* Key point:
 * stringstream is string form of anything separated by spaces (?)
 * getline(file, variable) stores an entire line, not just a word
 * istringstream iss("test 123 12h2h hh"):
 * parse a given line into word chunks. You can save them as variables
 * e.g. iss >> word_1 and print them out one by one.
 * ostringstream oss:
 * creates
 * */
//int main() {
//    string stringNumber = "44";
//    stringstream sso;
//    sso << stringNumber; // insert stringNumber in stringstream
//    int input;
//    sso >> input;   // read the value stored in stringstream sso
//    cout << input + 2 << endl;   // number
//    cout << stringNumber + "2" << endl;  // string form of number
//
//
//    cout << "Enter a number: " <<endl;
//    int input2;
//    cin >> input2;
//    stringstream sso2; // creates stringstream object
//    sso2 << input2;  // insert input2 in stringstream
//
//    string stringInput;
//    sso2 >> stringInput; // read the value stored in stringstream sso2
//
//    cout << "The integer number: " << input2 << endl;
//    cout << "The string form of integer value: " << stringInput + " 2" << endl;
//    return 0;
//}


//      <Lecture example>
//      <istringstream>
//int main(int, char*[])
//{
//    ifstream ifs ("/Users/yiryoungkim/CLionProjects/in.txt");
//    if (ifs.is_open()) {
//        string line_1;
//        string word_1;
//        string word_2, word_3, word_4;
//        getline(ifs, line_1); // extract first LINE of in.txt as variable line_1
//        // istringstream iss(line_1) analyzes the first line 'Apple  Banana         Orange'
//        // and parse it into word chunks 'Apple' 'Banana' 'Orange'
//        istringstream iss(line_1); // store the first word in line_1
//        iss >> word_1; // save the input iss as word_1
//        iss >> word_2;
//        iss >> word_3;
//        cout << word_1 << endl;
//        cout << word_2 << endl;
//        cout << word_3 << endl;
//       //  cout << iss << endl; why doesn't it work?
//    }
//    return 0;
//}


int main(int argc, char *argv[])
{
    if (argc < 3) return 1;
    ostringstream oss; // creates ostringstream object
    oss << argv[1] << " " << argv[2] << "hello" << 90232; // write a line 'argv[1] argv[2]' in oss
    istringstream iss (oss.str()); // print out the line inside oss using .str() function
    float f, g;
    string h;
    int j;
    iss >> f;    // store first word in iss (i.e. argv[1]) as f
    iss >> g;    // store second word in iss(i.e. argv[2]) as g
    iss >> h;
    iss >> j;
    cout << f << " / " << g << " is " << f/g << endl;
    cout << "h: " << h << endl;
    cout << "j: " << j << endl;
    /* well.. result does not show up on console, but when you type it in terminal, you get the result:
     * Yis-MacBook-Pro:module04_cPlustStringStream yiryoungkim$ ./a.out 34 11
     * 34 / 11 is 3.09091 */
    return 0;
}
