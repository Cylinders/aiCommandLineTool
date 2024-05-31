#include <iostream>
#include <string>
#include <windows.h>
#include <curl/curl.h>
using namespace std;

int main(int argc, char *argv[]) {
    string command = "";
    // sizeof(argv) gives the size of the pointer array, not the number of elements.
    // Use argc to iterate through the arguments.
    for (int i = 1; i < argc; i++ ) {
        command += argv[i];
        if (i < argc - 1) {
            command += " "; // Add a space between arguments for readability.
        }
    }

    cout << "requested command: " << command << endl;

    system("dir");

    return 0;
}
