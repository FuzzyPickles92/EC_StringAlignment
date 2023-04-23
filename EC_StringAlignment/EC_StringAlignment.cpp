// DeMario Russell 
// CIS - 251 C++
// 04/21/2023
// EC - String Alignment
//

#include <iostream>
#include <string>

// Function to center the input string within the specified width
std::string center_string(const std::string& input, int width) {
    // Calculate the left padding required to center the input string
    int padding_left = (width - input.length()) / 2;

    // Calculate the right padding required to center the input string
    int padding_right = width - input.length() - padding_left;

    // Create the centered string with left padding
    std::string result(padding_left, ' ');

    // Add the input string to the result
    result += input;

    // Add the right padding to the result
    result += std::string(padding_right, ' ');

    // Return the centered string
    return result;
}

// Function to print a visual example of the centered string within the specified width
void print_visual_example(const std::string& centered_str, int width) {
    // Print the total width indicator
    std::cout << "Total Width: |";
    for (int i = 0; i < width; ++i) {
        std::cout << "-";
    }
    std::cout << "|\n";

    // Print the centered string
    std::cout << "Centered String: \"" << centered_str << "\"\n";
}

int main() {
    std::string input_str;
    int width;

    // Prompt the user for the input string
    std::cout << "Enter the string: ";
    std::getline(std::cin, input_str);

    // Prompt the user for the width
    std::cout << "Enter the width: ";
    std::cin >> width;

    // Call the center_string function to center the input string within the specified width
    std::string centered = center_string(input_str, width);

    // Call the print_visual_example function to display the result
    print_visual_example(centered, width);

    return 0;
}
