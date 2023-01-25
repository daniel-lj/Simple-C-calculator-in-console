// matte.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Det h�r g�r s� att programmet loopar om allt st�mmer och man kan b�rja om utan att programmet st�ngs av.
    while(true)
    {
        //Standard text output
        std::cout << "Write two numbers\n";

        //Float v�rden som �r decimaltal, value1 & value2. Enklaste typen av float v�rde som passar gott till �ndam�let.
        float value1;
        float value2;

        //Den h�r biten kod kollar om v�rdet �r en float eller inte. �r inte v�rdet en float (siffra) s� blir utfallet false.
        // False g�r att break inte triggras, detta betyder att vi m�ste invertera svaret fr�n false till true.
        //"!" g�r s� att v�rdet "value1 & value2" inverteras s� att en false blir en true s� att break kan triggras om man skriver en bokstav ist�llet f�r siffra.
        if (!(std::cin >> value1) || !(std::cin >> value2)) {
            std::cout << "You need to enter a number, please restart.\n";

            //H�r bryter programmet p� grund av felaktig input.
            //Jag f�rs�kte f� det att starta om men det loopade bara s� jag la in en break ist�llet som var en enklare l�sning.
            break;
        }
        //F�rsta delen printar v�rden och + - * tecken mellan varje user input. 
        //Efter = printar den ut svaren.
        //"\n" skapar en ny rad efter varje svar.
        std::cout << value1 << " + " << value2 << " = " << value1 + value2 << "\n";
        std::cout << value1 << " - " << value2 << " = " << value1 - value2 << "\n";
        std::cout << value1 << " * " << value2 << " = " << value1 * value2 << "\n";

        //L�sning f�r att inte kunna dividera med 0
        if (value2 == 0) {
            //Kontrollerar ifall v�rdet �r noll, om det �r det s� printar den texten att det inte g�r att dividera med 0        
            std::cout << "Cannot divide with 0\n";
        //Om v�rdet inte �r noll s� g�r programmet vidare och g�r divisionen p� samma s�tt som de andra ber�kningarna ovan
        }
        else {
            std::cout << value1 << " / " << value2 << " = " << value1 / value2 << "\n";
        }
        

    }


    
    //Paus f�r att konsollen inte ska st�ngas ner efter break kommandot, kr�ver input fr�n tangentbord f�r att st�nga.
    //Detta s� att man ska hinna l�sa felmeddelandet som printas.
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


