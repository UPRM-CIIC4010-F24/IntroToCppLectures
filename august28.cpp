#include<iostream>
#include<typeinfo>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;
/*
    Covers:
    - Coercing rules
    - Casting
    - Overflow example
    - Constant
    - Input with cin
    - Input with getline()
*/


void coercingRulesExample() {
    cout << "Coercing Rules Example" << endl;
    int int_v = 100;
    short short_v = 19;
    float float_v = 100.5;
    char char_v = 'd';

    // Print original values
    cout << "int int_v = " << int_v << "\nshort short_v = " << short_v << endl;
    cout << "float float_v = " << float_v << "\nchar char_v = " << char_v << endl;
    
    // Promotion of int and short to double
    cout << "What type will int_v * 0.5 be? " << typeid(int_v*0.5).name() << endl;
    cout << "What type will short_v + 0.5 be? " << typeid(short_v + 0.5).name() << endl;
    
    // Promotion of short to int
    cout << "What type will int_v + short_v be? " << typeid(short_v + int_v).name() << endl;
    
    // Promotion of int to float
    cout << "What type will float_v + value1 be? " << typeid(float_v + int_v).name() << endl;
    
    // Promotion of char to int (Lowest posible rank is int)
    cout << "What type will char_v + short_v be? " << typeid(short_v + char_v).name() << endl<< endl;

    int int_from_float = float_v;

    // Demotion of float to int 
    cout << "float_v is " << float_v << endl;
    cout << "After calling int int_from_float = float_v;" << endl;
    cout << "int_from_float is " << int_from_float << endl << endl;

}

void castingExample() {
    cout << "Casting Example" << endl;
    float float_val = 123.67;
    // Standard way
    int value1 = static_cast<int>(float_val);
    // C style
    int short_v = (int) float_val;

    cout << "OG value: " << float_val << endl;
    cout << "Converted the standard way: " << value1 << endl;
    cout << "Converted the C style way: " << short_v << endl;
    // Show that the original value doesn't get modified
    cout << "OG value again: " << float_val << endl << endl;
}

void overflowExample() {
    cout << "Overflow Example" << endl;
    // We assign it at its maximum value
    short regularValue = 32767;
    cout << "short regularValue = 32767;" << endl;
    // We add +1
    regularValue++;
    cout << "after regularValue + 1" << endl;
    // Now it suddenly became negative, why?
    cout << "regularValue = " << regularValue << endl;

    // Let's do this again but with the bits
    cout << "Let's do this again but let's look at the bits\n";
    regularValue = 32767;
    cout << "regularValue = 32767 (" << bitset<16>(regularValue) <<")\n";
    regularValue++;
    cout << "after regularValue + 1" << endl;
    // Now it suddenly became negative, why?
    cout << "regularValue = -32768 (" << bitset<16>(regularValue) <<")\n\n";
}

void constantExample() {
    cout << "Constant Example" << endl;
    // Usually named in all caps 
    const float PI = 3.14;
    float radius = 12;
    cout << "PI= "<< PI << endl;
    cout << "radius = " << radius << endl;
    cout << "Area of circle: " << PI*pow(radius, 2) << endl << endl;
    // PI++; // Uncomment to receive error
}

void assignmentsExample() {
    cout << "Assigment Example" << endl;
    int a, b, c, d, e;
    // Must be declared first for this to work
    a = b = c = d = e = 10;
    // Otherwise we assign like this
    int val1 = 5, val2 = 2;

    // Apply all assignment shorthands
    a+=val1;
    b-=val1;
    c*=val1;
    d/=val1;
    e%=val1;
    // Apply shorthand on an expression
    val2 *= val1 + 12;

    cout << "a = b = c = d = e = 10;" << endl;
    cout << "val1 = 5;" << endl;
    cout << "a+=val1 -> " << a << endl; 
    cout << "b-=val1 -> " << b << endl; 
    cout << "c*=val1 -> " << c << endl; 
    cout << "d/=val1 -> " << d << endl; 
    cout << "e%=val1 -> " << e << endl;

    cout<<"\nval2=2\n";
    // We can assign expressions as well
    cout << "val2 *= val1 + 12 -> " << val2 << endl << endl;

    // Short hand notation for incrementing by one
    // This first passes its value to cout ad then increments it
    cout << val2++ << endl;
    // This first increments the value and then passes it to cout
    cout << ++val2 << endl;
}

void formattingExample() {
    // Must include iomanip header for this to work
    cout << "Formatting Example" << endl;

    string long_str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string short_str = "Hello";
    string lays_bag = "|      |";
    float simple_float = 13.1f;
    double complex_double = 123.56789003;
    double long_double = 0.1678973e-4;

    cout << "After setting width to 10\n";
    // Will expand beyond 10
    cout << setw(10) << long_str << endl; 
    // Will align to the right since its length < 10
    cout << setw(10) << short_str << endl; 
    // Whitespace occupies space in the string
    cout << setw(10) << lays_bag << endl;
    
    cout << "Width is 10 and align to the left" << endl;
    // Align text to the left
    cout << setw(10) << left << short_str << endl;

    // Working with the presicion of floating point values
    cout << "Values when assigned" << endl;
    cout << "13.1f\t123.5678900\t0.1678973e-4"<< endl;
    // How its typically printed
    cout << "Before formatting floating point" << endl;
    cout << simple_float << "\t" << complex_double << "\t" << long_double << endl;
    // Using the fixed setting
    cout << "After using fixed\n";
    cout << fixed << simple_float << "\t" << complex_double << "\t" << long_double << endl;
    // Specifying the presicion
    cout << "After setting precision to 7\n";
    cout << setprecision(9) << simple_float << "\t" << complex_double << "\t" << long_double << endl << endl;
}

void readingInputExample1(){
    cout << "Reading input examples using cin\n";

    string just_a_str = "";
    cout << "Enter two or more words to see what happens\n";
    cin >> just_a_str;
    // Output should only be first word
    cout << "Input received was: " << just_a_str << endl;
    cout << "It only printed the first value\n";
    cout << "Let's call it again\n";
    cin >> just_a_str;
    // We didn't even get a chance to enter input
    cout << "Input received was: " << just_a_str << endl;
    cout << "Oops it got the values we were missing\n";
}

void readingInputExample2() {
    cout << "Reading input examples using getline()\n";
    string just_a_str = "";
    cout << "Enter two words to see what happens\n";
    getline(cin, just_a_str);
    cout << "Input received was: " << just_a_str << endl;
    cout << "It printed everything\n";

    // Ignoring the first 5 characters
    cout << "Write a 6+ letter sentence\n";
    getline(cin.ignore(5), just_a_str);
    cout << "Input received was: " << just_a_str << endl;
    // Ignoring the first 5 characters or stop when we find 'g'
    cout << "Write a that has g in its first 4 letters\n";
    getline(cin.ignore(5, 'g'), just_a_str);
    cout << "Input received was: " << just_a_str << endl << endl;

}
void stringFunctionExamples() {
    cout << "String function example\n";

    // Getting the length
    string word = "I'm a sentence!";
    string hello = "Hello";
    string name1 = "John";
    string name2 = "Ben";

    cout << "Using the length function\n";
    cout << "\"" << word << "\"" << " has " << word.length() << " letters\n";
    // Accessing to each character
    cout << "Printing every character at an even position\n";
    for (int i = 0; i < word.length(); i+=2)
    {
        cout << word[i] << " at position " << i << endl;
    }
    cout << "Printing every character at an odd position\n";
    for (int i = 1; i < word.length(); i+=2)
    {
        cout << word.at(i) << " at position " << i << endl;
    }

    // Using concatenation
    string greetings = hello + " " + name1 + " and " + name2;
    cout << "Greeting after concatenation: " << greetings << endl;

    int numbers[] = {1, 2, 3, 4, 5, 6};
    string array_out = "[";
    for(int i = 0; i < 6; i++) {
        // To string is needed to convert number to a string
        array_out += to_string(numbers[i]) + ", ";
    }
    array_out = array_out.substr(0, array_out.length() - 2 ) + "]";
    // array_out += "]";
    cout << "Content of the array: " << array_out << endl;

    string scream;
    // Will repeat A 65 times
    cout << "Now I scream thanks to assign\n";
    scream.assign(65, 'A');
    cout << scream + "ahh\n\n";

}
void randomExample() {
    // We need the cstdlib header for this
    cout << "Random value example\n";
    /* 
    This assigns the seed, this determines which sequence of random
    numbers are given 
    */
    srand(15);
    // Printing 5 random values
    cout << "Printing 5 random values\n";
    for(int i = 0; i < 5; i++)
        cout << rand()<<endl;
    // Print 5 random values between 1 and 10
    int max = 10;
    cout << "Print 5 random values between 1 and " << max << endl;
    for(int i = 0; i < 5; i++)
        // Modulus forces the number to be between 0 and max - 1
        // Plus 1 to shift it to 1 and max
        cout << (rand() % max) + 1 <<endl;
}
int main() {
    // For separating the different outputs
    string separator;
    separator.assign(60, '=');
    cout << separator << endl;
    coercingRulesExample();
    cout << separator << endl;
    castingExample();
    cout << separator << endl;
    overflowExample();
    cout << separator << endl;
    constantExample();
    cout << separator << endl;
    assignmentsExample();
    cout << separator << endl;
    formattingExample();
    cout << separator << endl;
    // readingInputExample1();
    cout << separator << endl;
    // readingInputExample2();
    cout << separator << endl;
    stringFunctionExamples();
    cout << separator << endl;
    randomExample();
    cout << separator << endl;
}