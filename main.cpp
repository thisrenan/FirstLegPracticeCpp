#include <iostream>

using namespace std;

int main()
{
    cout << "# FirstLegPracticeCpp"<<endl<<endl;
    cout << "# Lets practice what we have been studying."<<endl<<endl;
    
    cout << "1. Create a program that displays the message \"Hello world\" on the screen." <<endl<<endl;
    
    cout << "Hello World";

    cout <<endl<<endl;
    
    cout << "2. Create a program that requests a number and then displays the message \"The number entered was [number]\"." <<endl<<endl;

    float number;
    cout<<"Inform a number: ";
    cin >> number;
    cout<<"The informed number was: " << number;

    cout <<endl<<endl;

    cout << "3. Create a program that requests two numbers and prints the sum." <<endl<<endl;
    
    float num1, num2, soma;
    cout <<"Inform a number: ";
    cin >> num1;
    cout << "Inform another number: ";
    cin >> num2;
    soma = num1 + num2;
    cout << "The sum of the numbers was: " << soma;

    cout <<endl<<endl;

    cout << "4. Create a program that requests the 4 bimonthly grades and shows the average." <<endl<<endl;

    float nota1, nota2, nota3, nota4, media;
    cout << "Inform the first bimonthly grade: ";
    cin >> nota1;
    cout << "Inform the second bimonthly grade: ";
    cin >> nota2;
    cout << "Inform the third bimonthly grade: ";
    cin >> nota3;
    cout << "Inform the fourth bimonthly grade: ";
    cin >> nota4;
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "A average grade is " << media;

    cout <<endl<<endl;   

    cout << "5. Create a program that converts meters to centimeters." <<endl<<endl;

    float meters, centimeters;   
    cout << "Inform the size in meters: ";
    cin >> meters;
    centimeters = meters * 100;
    cout << meters << "m corresponds to " << centimeters <<"cms";

    
    cout <<endl<<endl;  

    cout << "6. Create a program that asks how much you earn per hour and the number of hours worked in the month. Calculate and display your total salary for the month in question." <<endl<<endl;
    
    float salaryHours, salary, workHours;
    cout << "Tell me how much do you gain per hour: ";
    cin >> salaryHours;
    cout << "Tell me how much hours do you worked this month: ";
    cin >> workHours;
    salary = salaryHours * workHours;
    cout << "Your month salary is $ " << salary;

    cout <<endl<<endl;  

    cout << "7. Create a program that requests the temperature in degrees Fahrenheit, converts it and displays it in degrees Celsius." <<endl<<endl;
    cout << "Use the formula = C = (5 * (F-32) / 9)." << endl;

    float degreesC, degreesF;
    cout << "Inform the temperature in Farenheit: ";
    cin >> degreesF;
    degreesC = (5 * (degreesF - 32) / 9);
    cout << degreesF << " Farenheit corresponds to " << degreesC << " Celsius";       

    cout <<endl<<endl;  

    cout << "8. Create a program that calculates a person's ideal weight using the person's height as input data. Use the following formula: (72.7*height) - 58" <<endl<<endl;

    float height, weight;
    cout << "Inform your height:";
    cin >> height;
    weight = (72.7 * height) - 58;
    cout << "Your ideal weight is: " << weight << "kg";
   
    cout <<endl<<endl;
     
    cout << "9. Create a program that calculates a person's ideal weight, using the person's height (h) as input. Use the following formulas:" << endl;
    cout << "For men: (72.7*h) - 58" << endl;
    cout << "For women: (62.1*h) - 44.7" <<endl<<endl;

    float weightIdealH, weightIdealM;
    cout << "Inform your height:";
    cin >> height;
    weightIdealH = (72.7 * height) - 58;
    weightIdealM = (62.1 * height) - 44.7;
    cout << "Your ideal weight is: " << weightIdealH  << "kg if you are a man " << weightIdealM << "kg if you are woman";
    
    cout <<endl<<endl;  

    cout << "10. Create a program that asks how much you earn per hour and the number of hours worked in the month." << endl;
    cout << "Calculate and display your total salary for the month, knowing that 11% is deducted for income tax, 8% for social security and 5% for the union. Create a program that gives us:" << endl;
    cout << "gross salary." << endl;
    cout << "how much you paid to social security." << endl;
    cout << "how much you paid to the union." << endl;
    cout << "net salary. Calculate the discounts and the net salary, according to the table below: + Gross Salary: R$ - IR (11%): R$ - INSS (8%): ​​R$ - Union (5%): R$ = Net Salary: R$ Note: Gross Salary - Discounts = Net Salary. "<<endl<<endl;
        
    float hourSalary, hoursWorked, IR, INSS, socialsecurity, netSalary, grossSalary;

    cout << "Digite quanto voce recebe por hora: ";
    cin >> hourSalary;
    cout << "Digite quantas horas voce trabalhou esse mes: ";
    cin >> hoursWorked;

    grossSalary = hourSalary * hoursWorked;
    IR = grossSalary * (11.0 / 100);
    INSS = grossSalary * (8.0 / 100);
    socialsecurity = grossSalary * (5.0 / 100);
    netSalary = grossSalary - IR - INSS - socialsecurity;

    cout << "+ Gross Salary: " << grossSalary << endl;
    cout << "- IR (11%): " << IR << endl;
    cout << "- INSS (8%): " << INSS << endl;
    cout << "- Social Security (5%): " << socialsecurity << endl;
    cout << "= Net Salary: " << netSalary << endl;
        
    cout <<endl<<endl;      
    
    cout << "11. Create a program that asks for the size of a file to download (in MB) and the speed of an Internet link (in Mbps), calculate and inform the approximate download time of the file using this link (in minutes). "<<endl<<endl;

    float archiveSize, internetSpeed, archiveSizeMegaBits, downloadTime;

    cout << "Enter the file size in MB (Mega Bytes):";
    cin >> archiveSize;
    cout << "Enter your internet speed in Mbps (Mega bits per second): ";
    cin >> internetSpeed;
    // I created the variable below just to make it clear that 1MB is 8Mb // But It is not necessary
    archiveSizeMegaBits = archiveSize * 8;
    downloadTime = archiveSizeMegaBits / internetSpeed;
    cout << "The approximate time to download the file is " << downloadTime << " seconds";

    cout <<endl<<endl;  
   
    cout << "12. Create a program to generate the Fibonacci series. Fibonacci is a sequence of terms that have as the first 2 terms, respectively, the numbers 0 and 1. From there, the other terms are formed following a certain rule. The Fibonacci series can be seen below:" << endl;
    cout << "0 1 1 2 3 5 8 13 21..." <<endl<<endl;

    int n, aux=3, temp, last=1, lastButOne=0;

    cout << "How much terms to show?";
    cin >> n;

    cout << lastButOne << endl << last << endl;

    while(aux<=n){
        cout << (last+lastButOne) << endl;

        temp = lastButOne;
        lastButOne = last;
        last = last + temp;

        aux++;
    }   

    cout <<endl<<endl;  
    
    cout << "# Decision structures" <<endl<<endl;
    
    cout << "13. Create a program that asks for two numbers and prints the largest of them." <<endl<<endl;

    int number1, number2;
    cout << "Enter an integer number:";
    cin >> number1;
    cout << "Enter another integer number:";
    cin >> number2;

    if (number1 > number2)
    {
        cout << number1;
    }
    else
    {
        cout << number2;
    }

     


    cout <<endl<<endl;      
    
    cout << "14. Create a program that asks for a value and shows on the screen whether the value is positive or negative." <<endl<<endl;

    float value;
    cout << "Enter a value:";
    cin >> value;
    if (value > 0)
    {
        printf("The value entered is positive.");
    }
    else if (value < 0)
    {
        printf("The value entered is negative.");
    }
  
    cout <<endl<<endl;   
    
    cout << "15. Create a program that checks whether a typed letter is a vowel or a consonant." <<endl<<endl;

    char letter;
    cout << "Enter a letter: ";
    cin >> letter
    ;
    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    //or
    
    letter = '\0'; //"reset" the char variable with a null value
    cout << "Digite uma letter: ";
    cin >> letter;

    // toupper is in ctype library
    //Now the letter is capitalized, and so we reduce the comparisons
    letter = toupper(letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    cout <<endl<<endl; 
    
    cout << "16. Create a program to read two partial grades of a student." << endl;    
    cout << "The program should calculate the average achieved by each student and display:" << endl;
    cout << "The message \"Approved\", if the average achieved is greater than or equal to seven;" << endl;
    cout << "The message \"Failed\", if the average is less than seven;" << endl;
    cout << "The message \"Approved with Distinction\", if the average is equal to ten." <<endl<<endl;

    float firstGrade, secondGrade, averageGrade;
    cout << "Enter the first grade: ";
    cin >> firstGrade;
    cout << "Enter the second grade: ";
    cin >> secondGrade;
    averageGrade = (firstGrade + secondGrade) / 2.0;

    if (averageGrade == 10)
        cout << "Approved with Distinction";
    else if (averageGrade >= 7)
        cout << "Approved";
    else
        cout << "Failed";

    //If the if (or else if or else) has ONLY ONE COMMAND ending with a semicolon (;) it is not necessary to create a block (put the curly braces {})

    cout <<endl<<endl; 

    cout << "17. Create a program that reads three numbers and displays the largest of them." <<endl<<endl;

    float firstNumber, secondNumber, thirdNumber;
    printf("Enter the first number: ");
    cin >> firstNumber;
    printf("Enter the second number: ");
    cin >> secondNumber;
    printf("Enter the third number: ");
    cin >> thirdNumber;
    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        cout << firstNumber << " has the bigger number.";
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        cout << secondNumber << " has the bigger number.";
    }
    else
    {
        cout << thirdNumber << " has the bigger number.";
    }

     /*
    cout << "18. Create a program that reads three numbers and displays the largest and smallest of them." <<endl<<endl;

    float numero1, numero2, numero3;
    printf("Digite um numero: ");
    scanf("%f", &numero1);
    printf("Digite outro numero: ");
    getchar();
    scanf("%f", &numero2);
    printf("Digite mais um numero: ");
    getchar();
    scanf("%f", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
        printf("%f foi o maior numero digitado.", numero1);
    else if (numero2 > numero1 && numero2 > numero3)
        printf("%f foi o maior numero digitado.", numero2);
    else
        printf("%f foi o maior numero digitado.", numero3);

    if (numero1 < numero2 && numero1 < numero3)
        printf("\n%f foi o menor numero digitado.", numero1);
    else if (numero2 < numero1 && numero2 < numero3)
        printf("\n%f foi o menor numero digitado.", numero2);
    else
        printf("\n%f foi o menor numero digitado.", numero3);

    
    cout << "19. Create a program that asks for the price of three products and tells you which product you should buy, knowing that the decision is always the cheapest." <<endl<<endl;
    
    float preco1, preco2, preco3;
    printf("Digite o preço do produto 1: ");
    scanf("%f", &preco1);
    printf("Digite o preço do produto 2: ");
    scanf("%f", &preco2);
    printf("Digite o preço do produto 3: ");
    scanf("%f", &preco3);
    if (preco1 < preco2 && preco1 < preco3)
        printf("O produto com o menor preco é o 1, custando R$%.2f", preco1);
    else if (preco2 < preco1 && preco2 < preco3)
        printf("O produto com o menor preco é o 2, custando R$%.2f", preco2);
    else
        printf("O produto com o menor preco é o 3, custando R$%.2f", preco3);


    cout << "20. Create a program that reads three numbers and displays them in descending order." <<endl<<endl;

    float numero1, numero2, numero3;
    printf("Digite um numero: ");
    scanf("%f", &numero1);
    printf("Digite outro numero: ");
    scanf("%f", &numero2);
    printf("Digite mais um numero: ");
    scanf("%f", &numero3);
    if (numero1 > numero2 && numero2 > numero3)
        printf("%f %f %f", numero1, numero2, numero3);
    else if (numero1 > numero3 && numero3 > numero2)
        printf("%f %f %f", numero1, numero3, numero2);
    else if (numero2 > numero1 && numero1 > numero3)
        printf("%f %f %f", numero2, numero1, numero3);
    else if (numero2 > numero3 && numero3 > numero1)
        printf("%f %f %f", numero2, numero3, numero1);
    else if (numero3 > numero1 && numero1 > numero2)
        printf("%f %f %f", numero3, numero1, numero2);
    else
        printf("%f %f %f", numero3, numero2, numero1);

    
    cout << "21. Create a program that reads the price of a product and inflates that price by 10% if it is less than 100 and by 20% if it is greater than or equal to 100." <<endl<<endl;
    
    
    









*/

    return 0;
}
