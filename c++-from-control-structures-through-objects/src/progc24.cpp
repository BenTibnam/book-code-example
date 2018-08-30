// planting grapevines

#include<iostream>

int main(){
    double vines, rowLength, spaceByEndPost, spaceBetweenVines; // all in feet

    // getting user info from prompt
    std::cout << "Enter all of the following in feet\nRow length: ";
    std::cin >> rowLength;
    std::cout << "Space taken by endpost: ";
    std::cin >> spaceByEndPost;
    std::cout << "Space between vines: ";
    std::cin >> spaceBetweenVines;

    // calculating values
    vines = (rowLength - (2*spaceByEndPost)) / spaceBetweenVines;
    std::cout << "Grapevines/row: " << vines << '\n';
    return 0;
}