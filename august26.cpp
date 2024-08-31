#include<iostream>

using namespace std;

void escapeSequencesExample() {
    cout << "Escape Sequence Example\n";

    string hello = "Hello";
    string world = "World";
    // Text gets printed together
    cout << "No sequences used"<< endl;
    cout << hello;
    cout << world;
    // A newline separates the words
    cout << endl << "\\n used" << endl;
    cout << hello << endl;
    cout << world << "\n";
    // Tab separates the words
    cout << endl << "\\t used" << endl;
    cout << hello << "\t";
    cout << world << "\n";
    // Deletes the last character from hello before printing world
    cout << endl << "\\b used" << endl;
    cout << hello << "\b";
    cout << world << "\n";
    // MOves cursor back to beginning before printing world
    cout << endl << "\\r used" << endl;
    cout << hello << "\r";
    cout << world << "\n";
    // Sets an alarm
    cout << endl << "\\a used" << endl;
    cout << hello << "\a";
    cout << world << "\n";
    // Can print ' and " 
    cout << endl << "with quotes used" << endl;
    cout << "\'" << hello << "\' \"";
    cout << world << "\" \n\n";
}

void characterExamples() {
    cout << "Character Example\n";

    // Characters only hold a single value
    char c = 'C';
    /* 
    Characters are mapped to integer values
    given by ASCII enconding format
    */
   // This represnets C
    char cnum = 67;

    // Converting a letter to its position in the alphabet
    int alphaphetical_position = c - 'A' + 1;

    string im_here = "I'm a string!";

    cout << "This is a character: " << c << endl;
    cout << "Character created using it's ASCII code: " << cnum << endl;
    cout << "Position of this caracter in the alphabet: " << alphaphetical_position <<endl;

    cout << im_here << endl << endl;

}

void numberExample() {
    cout << "Number Example\n";

    // Floating point values
    float float_value = 456.9743f;
    double double_value = 1.3456E3;
    float float_value2 = 2.278098E-4;

    // Hexadecimal values
    int hex = 0xF;
    int hex2 = 0x9;
    // Octal values
    int oct = 011;

    cout << "Float values\n";
    cout << float_value << endl;
    cout << float_value2 << endl;
    cout << "Double values\n";
    cout << double_value << endl;
    cout << "Hexadecimal values\n";
    cout << hex << endl;
    cout << hex2 << endl;
    cout << hex + hex2 << endl;
    cout << "Octal values\n";
    cout << oct << endl << endl;

    // Passing a float to an int
    int just_an_int = float_value;
    // Passing an int to a float
    float just_a_float = just_an_int;

    cout << "Just an integer: " << just_an_int << endl;
    cout << "Just an float: " << just_a_float << endl;

    double largest_num = 9E20;
    long long int largest_int = largest_num;
    cout << "The largest double number: " << largest_num << endl;
    cout << "The largest number as an integer: " << largest_int << endl;

    // You can store a conditional in a bool
    bool isLarger = largest_num > double_value;
    cout << "Is this larger? 9E20 > 1.3456E3?" << isLarger << endl;

    cout << "Size of a long long int: " << sizeof(long long) << endl;
    cout << "Size of largest number: " << sizeof(largest_int) << endl;

    cout << "Integer division: 1/2 = " << 1/2 << endl;
    cout << "Float division: 1.0/2 = " << 1.0/2 << endl << endl;
}

void multipleInputsExample() {
    cout << "Multiple Input Example\n";

    // Three variables to be assigned through the console
    int day, month, year;
    cout << "Please enter day month year:\n";
    cout << "Separate each value with a whitespace or [Enter]\n";
    // Expectes three integers separated by whitespaces or [Enter]
    // What happens if it wasn't integers?
    cin >> day >> month >> year;
    cout << "Date given: " << day << "/" << month << "/" << year << endl;
}

int main() {
    // For separating the different outputs
    string separator;
    separator.assign(60, '=');
    cout << separator << endl;
    escapeSequencesExample();
    cout << separator << endl;
    characterExamples();
    cout << separator << endl;
    numberExample();
    cout << separator << endl;

}