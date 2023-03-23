// These headers define some of the classes and functions we need
#include <iostream>
#include <string>
#include <sstream>
#include <limits>

using std::cin, std::cout, std::endl;
using std::string, std::getline;

void print_instructions();

int main() {
    //prints the instructions for how to use the reading list tool
    print_instructions();

    //load all of the data into the memory from the reading list

    //ask for user input for the data acquisition
}


//////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////

void print_instructions() {
    cout << "Enter grades into a separate txt file with the following format" << endl;
    cout << "<title> <date finished (day/month/year)> <pages> <genre>" << endl;
    cout << "enter an empty line to end input" << endl;
}

// void get_category_and_score(
//     const string& line,
//     string* category,
//     double* score) {
//     // turn the string into an input stream
//     std::istringstream sin(line);

//     // read the category (as string) and score (as double) from the stream
//     sin >> *category;
//     sin >> *score;

//     if (sin.fail()) {
//         // the stream is in a fail state (something went wrong)
//         // clear the flags
//         sin.clear();
//         // clear the stream buffer (throw away whatever garbage is in there)
//         sin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         // signal that the line was invalid
//         *category = "ignore";
//     }
// }

// void print_results(
//     double exam_average,
//     double hw_average,
//     double lw_average,
//     double reading,
//     double engagement,
//     double weighted_total,
//     char final_letter_grade) {
//     cout << "summary:" << endl;
//     cout << "      exam average: " << exam_average << endl;
//     cout << "        hw average: " << hw_average << endl;
//     cout << "        lw average: " << lw_average << endl;
//     cout << "           reading: " << reading << endl;
//     cout << "        engagement: " << engagement << endl;
//     cout << "    ---------------" << endl;

//     cout << "    weighted total: " << weighted_total << endl;

//     cout << "final letter grade: " << final_letter_grade << endl;
// }

