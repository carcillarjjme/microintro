#include <iostream>
#include "auxillary.h"

int main()
{
    
    //IF-ELSE statements
    println("\nStarting IF-ELSE statement");
    int a = 1;
    int b = 2;
    if (a == b) {
        println("a is equal to b\n");
    } else {
        println("a is not equal to b\n");
    }

    //IF-ELSE IF statements
    println("\nStarting IF-ElSE IF statement");
    int mynumber = 50;
    if (mynumber < 100){
        println("Mynumber is < 100");
    } else if (mynumber > 100) {
        println("Mynumber is  > 100");
    } else {
        println("Mynumber is = 100");
    }

    //switch statement
    println("\nStarting SWITCH statement");
    int number = 1;
    switch (number)
        {
        case 1:
            println("number is equal to 1");
            break;
        case 2:
            println("number is equal to 2");
            break;
        case 3:
            println("number is equal to 3");
            break;
        case 4:
            println("number is equal to 4");
            break;
        default:
            println("number did not match any value");
            break;
    }

    //for loop
    println("\nStarting FOR loop");
    for (int i = 0; i<100; i++){
        print(i);
        print(" ");
    }

    
    //while loop
    println("\nStarting WHILE loop");
    int i = 0;
    while (i <100){
        print(i);
        print(" ");
        i++;
    }


    //do while loop
    println("\nStarting DO WHILE loop");
    int j = 0;
    do
    {
        print(j);
        print(" ");
        j++;
    } while ( j < 100);
    
    char myCharacter = 'a';
    char myCharacter2 = 97;
    println(myCharacter);
    println(myCharacter2);

    size_t sizeVar = 10000000;
    std::printf("Size = %zu",sizeVar);


    for (int i = 1; i < 100; i = 2*i) {
        print(i);
        print(", ");
    }
    println("");

    int myNumber = 0;
    while (myNumber < 10) {
        if (myNumber == 2){
            myNumber += 2;
		    continue; //skip current iteration
        }

        if (myNumber == 8){
            break;
        }

        print(myNumber);
        print(", ");
        myNumber += 2;
    }
    println("");

    int k = 0;
    while (k < 10) {
        print(k);
        print(", ");
        k += 2;
    }
    println("");

    int n = 0;
    do {
        print(n);
        print(", ");
        n += 2;
    } while (n < 10);
    println("");


    bool isRaining = false;
    bool isHotDay = false;
    bool bringUmbrella = true;

    if (!isRaining && !isHotDay) {
        bringUmbrella = false;
    }
    std::cout << "bringUmbrella = " << bringUmbrella << std::endl;


    const int totalDelay = 2000;
    const float numChops = 100;
    int currentDelay;

    for(int i = 0; i < numChops; i++){
        print(i/numChops);
        print(", ");
    }
    println("");
}
