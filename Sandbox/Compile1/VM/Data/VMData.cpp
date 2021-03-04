#include <iostream>
#include <vector>
#include <stdexcept>
// Start of script
// RecursionBot Virtual Machine player. I am not good at C++ so this is currently just bad code.
int main() {
    // Exception handling
    try {
        std::vector<int> vec{3, 4, 3, 1};
        int i{vec.at(4)}; // Throws an exception, std::out_of_range (indexing for vec is from 0-3 not 1-4)
    }
    // An exception handler, catches std::out_of_range, which is thrown by vec.at(4)
    catch (std::out_of_range &e) {
        std::cerr << "Accessing a non-existent element: " << e.what() << '\n';
    }
    // To catch any other standard library exceptions (they derive from std::exception)
    catch (std::exception &e) {
        std::cerr << "Exception thrown: " << e.what() << '\n';
    }
    // Catch any unrecognised exceptions (i.e. those which don't derive from std::exception)
    catch (...) {
        std::cerr << "Some fatal error\n";
}}
int object1() {
	// Object 1 - The first object defined for the VM
	userInput1 = float(VM/INPUT.xml) char 1 for char 32; // Incomplete, I am not very good at C++ | If functional (likely not) this should fetch the first 32 characters of the file as an object, which would be on line 1
	userInput2 = float(VM/INPUT.xml) char 33 for char 64; // Bad code
	// userInput3 = float(VM/INPUT.xml) char 65 for char 96; // ^ also unknown if a 3rd input is needed
}
// Demo example: every time I do 1 pushup | I do 1 pushup object=pushup, value=1for1
int playBar() {
	// The play button for the VM post
	struct button1 = "/VM/Data/VM_Timer.xml"; // Virtual machine execution timer
	struct button2 = "/VM/Data/VM_Band.xml"; // Virtual Machine Bandwidth usage
	struct button3A = "/VM/Data/VM_Pause.py"; // Pauses the execution process
	:: button3B = "/VM/Data/VM_Resume.py"; // Resumes the execution process
	struct button4 = "/VM/About.py";
}
// End of script
