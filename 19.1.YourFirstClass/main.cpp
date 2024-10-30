#include <iostream>

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
// (freeCodeCamp.org)

const double Pi {3.1415926535897932384626433832795};

class Cylinder{ // members of class are private by default
                // but you can make them public using the 'public' keyword
    public :
        // Functions(methods), behavior of your class
        double volume(){    // Classes have functions that let them do things
            return Pi * base_radius * base_radius * height; // Class methods have access to member variables,
                                                            // regardless of whether they are public or private
        }

    public :
        // Member variables
        // they are stack variables, they can also be pointers but they can not be references
        // because references must be initialized
        // In classes, leaving member variables uninitialized is important
        double base_radius {1};
        double height {1};
};

int main(){

    Cylinder cylinder1;    // Objects
    std::cout << "volume : " << cylinder1.volume() << std::endl;
    //std::cout << "base_radius : " << cylinder1.base_radius << std::endl;
    //std::cout << "height : " << cylinder1.height << std::endl;

    // Change member variables
    cylinder1.base_radius = 5;
    cylinder1.height = 3;
    std::cout << "volume is : " << cylinder1.volume() << std::endl;

    return 0;
}