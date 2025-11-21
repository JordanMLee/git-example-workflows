#include <iostream>
#include "../src/new_feature.h"

using namespace std;
// Helper function to simulate a test case
void run_test(const string& test_name, void (*test_func)()) {
    cout << "Running test: " << test_name << endl;
    test_func();
    cout << "Test " << test_name << " completed successfully!" << endl;
}

int TOTAL_ERRORS = 0;
int TOTAL_TESTS = 0;

void assert_equal(const string& expected, const string& actual, const string& message) {
    
    if (expected != actual) {
        cerr << "Assertion failed: " << message << endl;
        cerr << "Expected: " << expected << ", but got: " << actual << endl;
        TOTAL_ERRORS++;
    }
    TOTAL_TESTS++;
}

// Test case for functionality()
void test_functionality() {
    cout << "Testing functionality()..." << endl;
    string output = functionality();
    assert_equal("Executing new feature functionality.\n", output, "functionality() output mismatch");
}

// Test case for more_functionality()
void test_more_functionality() {
    cout << "Testing more_functionality()..." << endl;
    string output = more_functionality();
    assert_equal("Executing more functionality of the new feature.\n", output, "more_functionality() output mismatch");
}

int main() {
    cout << "Starting tests for new feature..." << endl;

    // Run individual tests
    run_test("Functionality Test", test_functionality);
    run_test("More Functionality Test", test_more_functionality);
    if (TOTAL_ERRORS > 0) {
        cout << TOTAL_ERRORS << " out of " << TOTAL_TESTS << " tests failed." << endl;
        return 1; // Indicate failure
    } 
    cout << "All " << TOTAL_TESTS << " tests passed successfully!" << endl;
    return 0;
}


// int main() {
//     cout << "Starting tests for new feature..." << endl;
//     functionality();
//     more_functionality();
//     cout << "All tests completed successfully!" << endl;
//     return 0;
// }