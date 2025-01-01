#include <iostream>
// Box.h
#include "Box.h"
#include <iostream>
#include <vector>
#include <cstdlib> // For basic random number generation
#include <ctime> // For time function

std::ostream& operator<<(std::ostream& stream, const Box& box)
{
    stream << "Box(" << std::setw(2) << box.getLength() << ','
           << std::setw(2) << box.getWidth() << ','
           << std::setw(2) << box.getHeight() << ')';
    return stream;
}



// Function to generate integral random box dimensions from 1 to max_size
inline double random(double max_size)
{
    return 1 + static_cast<int>(std::rand() / (RAND_MAX / max_size + 1));
}
int main()
{
    const double limit {99.0}; // Upper limit on Box dimensions
    // Initialize the random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    const size_t boxCount {20}; // Number of Box object to be created
    std::vector<Box> boxes; // Vector of Box objects
    // Create 20 Box objects
    for (size_t i {}; i < boxCount; ++i)
        boxes.push_back(Box {random(limit), random(limit), random(limit)});
    size_t first {}; // Index of first Box object of pair
    size_t second {1}; // Index of second Box object of pair
    double minVolume {(boxes[first] + boxes[second]).volume()};
    std::cout<<"min volume = "<<minVolume<<std::endl;
    /*for (size_t i {}; i < boxCount - 1; ++i)
    {
        for (size_t j {i + 1}; j < boxCount; j++)
        {
            if (boxes[i] + boxes[j] < minVolume)
            {
                first = i;
                second = j;
                minVolume = (boxes[i] + boxes[j]).volume();
            }
        }
    }
    std::cout << "The two boxes that sum to the smallest volume are: "
              << boxes[first] << " and " << boxes[second];
    std::cout << "\nThe volume of the first box is " << boxes[first].volume();
    std::cout << "\nThe volume of the second box is " << boxes[second].volume();
    std::cout << "\nThe sum of these boxes is " << (boxes[first] + boxes[second]);
    std::cout << "\nThe volume of the sum is " << minVolume << std::endl;*/
}