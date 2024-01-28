//
//  Sandbox.cpp
//  Remind_You
//
//  Created by Parker Jackman on 1/24/24.
//

#include "Sandbox.hpp"

#include <iostream>
#include <map>

class Template{
    private:
    
        std::string message;
    
    public:
        Template(const std::string mesg = "This is a message for NAME at TIME"): message(mesg) {}
    
        void setMessage(){
            std::string newMesg;
            std::cout <<"Type your new template message. Don't forget to inculde NAME and TIME" << std::endl;
            // clears the input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::getline(std::cin, newMesg);
            message = newMesg;
        }
    void displayMessage()const{
        std:: cout << "Current message:"<< message<< std::endl;
    }
    
};


class Appointments{
    private:
        std::map< std::string, std::string> appointmentList;
    
    public:
    Appointments(const std::map< std::string, std::string> list): appointmentList(list) {}
    
    //appointmentList["Key1"] = "Value1";
};


int main(int argc, const char * argv[]) {
    int choice = 0;
    Template currentTemplate = Template();
    while (choice != 5)
    {
        std::cout <<"select a command: \n"
                <<"1: Edit template\n"
                <<"2: Edit appointments\n"
                <<"3: generate texts\n"
                <<"4: View Current settings\n"
                <<"5: Quit"<< std::endl;
        if(!(std::cin>>choice)){
            std::cin.clear();
            std::cin.ignore(100, '\n'); // Ignore any invalid input in the buffer
            std::cout << "Invalid input. Please enter a number.\n";
        }else{
            if (choice == 1) {
                std::cout << "1: selected" << std::endl;
                currentTemplate.displayMessage();
                currentTemplate.setMessage();
            }else if (choice == 2){
                std::cout << "2: selected" << std::endl;
            }else if (choice == 3){
                std::cout << "3: selected" << std::endl;
            }else if (choice == 4){
                currentTemplate.displayMessage();
                
                
            }
        }
    
        }
    
    
    
    
    
    
    return 0;
}
