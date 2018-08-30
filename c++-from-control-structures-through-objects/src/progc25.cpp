// madlibs like folder
#include<iostream>
#include<string>

int main(){
    std::string name, age, city, college, profession, animal, petName;
    
    // prompting for information
    // NOTE: a function could be made to prompt and take info from user, but I don't feel like making it
    std::cout << "The following is a madlib like program\nName: ";
    std::cin >> name;
    std::cout << "Number: ";
    std::cin >> age;
    std::cout << "City: ";
    std::cin >> city;
    std::cout << "Name of college: ";
    std::cin >> college;
    std::cout << "Type of profession: ";
    std::cin >> profession;
    std::cout << "Animal: ";
    std::cin >> animal;
    std::cout << "Animal name: ";
    std::cin >> petName;
    std::cout << "\n\n";

    // printing out the story
    std::cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Than, " << name << "adopted an " << animal << " named " << petName << ". The both lived happily ever after!";

    return 0;
}