#include <iostream>
#include <vector>


void part1() {
    //TODO: Implement part 1
    std::vector<int> vec;

    // Adding 50,000 elements
    for (int i = 0; i < 50000; ++i) {
        vec.push_back(i);
    }
    std::cout << "After adding elements: Size = " << vec.size() 
              << ", Capacity = " << vec.capacity() << std::endl;

    // Resizing to half
    vec.resize(vec.size() / 2);
    std::cout << "After resizing: Size = " << vec.size() 
              << ", Capacity = " << vec.capacity() << std::endl;

    // Shrink to fit
    vec.shrink_to_fit();
    std::cout << "After shrink_to_fit(): Size = " << vec.size() 
              << ", Capacity = " << vec.capacity() << std::endl;
}

void part2() {
    //TODO: Implement part 2
    std::vector<bool> boolVec(10000, true);
    std::vector<char> charVec(10000, 'a');

    int boolVecMemory = boolVec.capacity() / 8; // because each bool takes 1 bit for vector<bool> because of bit packing https://en.cppreference.com/w/cpp/container/vector_bool
    int charVecMemory = sizeof(char) * charVec.capacity(); // Each char takes 1 byte

    std::cout << "Memory usage of std::vector<bool>: " << boolVecMemory << " bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: " << charVecMemory << " bytes" << std::endl;
}

int main() {
    part1();
    part2();
    return 0;
}