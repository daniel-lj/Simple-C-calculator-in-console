// matte.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Det här gör så att programmet loopar om allt stämmer och man kan börja om utan att programmet stängs av.
    while(true)
    {
        //Standard text output
        std::cout << "Write two numbers\n";

        //Float värden som är decimaltal, value1 & value2. Enklaste typen av float värde som passar gott till ändamålet.
        float value1;
        float value2;

        //Den här biten kod kollar om värdet är en float eller inte. Är inte värdet en float (siffra) så blir utfallet false.
        // False gör att break inte triggras, detta betyder att vi måste invertera svaret från false till true.
        //"!" gör så att värdet "value1 & value2" inverteras så att en false blir en true så att break kan triggras om man skriver en bokstav istället för siffra.
        if (!(std::cin >> value1) || !(std::cin >> value2)) {
            std::cout << "You need to enter a number, please restart.\n";

            //Här bryter programmet på grund av felaktig input.
            //Jag försökte få det att starta om men det loopade bara så jag la in en break istället som var en enklare lösning.
            break;
        }
        //Första delen printar värden och + - * tecken mellan varje user input. 
        //Efter = printar den ut svaren.
        //"\n" skapar en ny rad efter varje svar.
        std::cout << value1 << " + " << value2 << " = " << value1 + value2 << "\n";
        std::cout << value1 << " - " << value2 << " = " << value1 - value2 << "\n";
        std::cout << value1 << " * " << value2 << " = " << value1 * value2 << "\n";

        //Lösning för att inte kunna dividera med 0
        if (value2 == 0) {
            //Kontrollerar ifall värdet är noll, om det är det så printar den texten att det inte går att dividera med 0        
            std::cout << "Cannot divide with 0\n";
        //Om värdet inte är noll så går programmet vidare och gör divisionen på samma sätt som de andra beräkningarna ovan
        }
        else {
            std::cout << value1 << " / " << value2 << " = " << value1 / value2 << "\n";
        }
        

    }


    
    //Paus för att konsollen inte ska stängas ner efter break kommandot, kräver input från tangentbord för att stänga.
    //Detta så att man ska hinna läsa felmeddelandet som printas.
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


