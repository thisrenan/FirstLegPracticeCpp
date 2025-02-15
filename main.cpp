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

    float grausC, grausF;
    printf("Digite a temperatura em graus Farenheit: ");
    scanf("%f", &grausF);
    grausC = (5 * (grausF - 32) / 9);
    printf("%.2f graus Farenheit correspondem a %.2f graus Celsius", grausF, grausC);    
    
    /*
    cout << "8. Create a program that calculates a person's ideal weight using the person's height as input data. Use the following formula: (72.7*height) - 58" <<endl<<endl;

    float altura, pesoIdeal;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    pesoIdeal = (72.7 * altura) - 58;
    printf("Seu peso ideal eh: %.2fkg", pesoIdeal);

    
    cout << "9. Create a program that calculates a person's ideal weight, using the person's height (h) as input. Use the following formulas:" << endl;
    cout << "For men: (72.7*h) - 58" << endl;
    cout << "For women: (62.1*h) - 44.7" <<endl<<endl;

    float altura2, pesoIdealH, pesoIdealM;
    printf("Digite sua altura em m: ");
    scanf("%f", &altura);
    pesoIdealH = (72.7 * altura2) - 58;
    pesoIdealM = (62.1 * altura2) - 44.7;
    printf( "O seu peso ideal eh:\n%.2fkg se voce for homem\n%.2fkg se voce for mulher",
        pesoIdealH, pesoIdealM);
    
    cout << "10. Create a program that asks how much you earn per hour and the number of hours worked in the month." << endl;
    cout << "Calculate and display your total salary for the month, knowing that 11% is deducted for income tax, 8% for social security and 5% for the union. Create a program that gives us:" << endl;
    cout << "gross salary." << endl;
    cout << "how much you paid to social security." << endl;
    cout << "how much you paid to the union." << endl;
    cout << "net salary. Calculate the discounts and the net salary, according to the table below: + Gross Salary: R$ - IR (11%): R$ - INSS (8%): ​​R$ - Union (5%): R$ = Net Salary: R$ Note: Gross Salary - Discounts = Net Salary. "<<endl<<endl;
    
    
    float salarioHora,
    horasTrabalhadas2,
    IR,
    INSS,
    sindicato,
    salarioLiquido,
    salarioBruto;

    printf("Digite quanto voce recebe por hora: ");
    scanf("%f", &salarioHora);
    printf("Digite quantas horas voce trabalhou esse mes: ");
    getchar();
    scanf("%f", &horasTrabalhadas2);

    salarioBruto = salarioHora * horasTrabalhadas2;
    IR = salarioBruto * (11.0 / 100);
    INSS = salarioBruto * (8.0 / 100);
    sindicato = salarioBruto * (5.0 / 100);
    salarioLiquido = salarioBruto - IR - INSS - sindicato;

    printf("+ Salário Bruto : R$%.2f\n", salarioBruto);
    printf("- IR (11%) : R$%.2f\n", IR);
    printf("- INSS (8%) : R$%.2f\n", INSS);
    printf("- Sindicato ( 5%) : R$%.2f\n", sindicato);
    printf("= Salário Liquido : R$%.2f", salarioLiquido);
        
    
    cout << "11. Create a program that asks for the size of a file to download (in MB) and the speed of an Internet link (in Mbps), calculate and inform the approximate download time of the file using this link (in minutes). "<<endl<<endl;

    float tamanhoDoArquivo,
        velocidadeDaInternet,
        tamanhoDoArquivoEmMegaBits,
        tempoDeDownload;

    printf("Digite o tamanho do arquivo em MB (Mega Bytes): ");
    scanf("%f", &tamanhoDoArquivo);
    printf("Digite a velocidade da internet em Mbps (Mega bits por segundo): ");
    scanf("%f", &velocidadeDaInternet);
    // Eu criei a variável abaixo apenas para deixar claro que 1MB são 8Mb.
    // Ela não é totalmente necessária
    tamanhoDoArquivoEmMegaBits = tamanhoDoArquivo * 8;
    tempoDeDownload = tamanhoDoArquivoEmMegaBits / velocidadeDaInternet;
    printf("O tempo aproximado para o download do arquivo é de %.0f segundos",
           tempoDeDownload);


    cout << "12. Create a program to generate the Fibonacci series. Fibonacci is a sequence of terms that have as the first 2 terms, respectively, the numbers 0 and 1. From there, the other terms are formed following a certain rule. The Fibonacci series can be seen below:" << endl;
    cout << "0 1 1 2 3 5 8 13 21..." <<endl<<endl;

   

    
    cout << "# Decision structures" <<endl<<endl;
    
    cout << "13. Create a program that asks for two numbers and prints the largest of them." <<endl<<endl;

    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num1);
    printf("Digite outro numero inteiro: ");
    getchar();
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("%i", num1);
    }
    else
    {
        printf("%i", num2);
    }

    
    cout << "14. Create a program that asks for a value and shows on the screen whether the value is positive or negative." <<endl<<endl;

    float valor;
    printf("Digite um numero: ");
    scanf("%f", &valor);
    if (valor > 0)
    {
        printf("O valor digitado é positivo");
    }
    else if (valor < 0)
    {
        printf("O valor digitado é negativo");
    }

    
    cout << "15. Create a program that checks whether a typed letter is a vowel or a consonant." <<endl<<endl;

    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        printf("Vogal");
    }
    else
    {
        printf("Consoante");
    }

    //or

    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    // toupper está na biblioteca ctype
    //Agora a letra é maiúscula, e assim reduzimos as comparações
    letra = toupper(letra);

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        printf("Vogal");
    }
    else
    {
        printf("Consoante");
    }


    
    cout << "16. Create a program to read two partial grades of a student." << endl;    
    cout << "The program should calculate the average achieved by each student and display:" << endl;
    cout << "The message \"Approved\", if the average achieved is greater than or equal to seven;" << endl;
    cout << "The message \"Failed\", if the average is less than seven;" << endl;
    cout << "The message \"Approved with Distinction\", if the average is equal to ten." <<endl<<endl;

    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    getchar();
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2.0;
    if (media == 10)
        printf("Aprovado com Distinção");
    else if (media >= 7)
        printf("Aprovado");
    else
        printf("Reprovado");
    //Se o if (ou else if ou else) tem SOMENTE UM COMANDO
    //terminado por ponto e vírgula (;) não é necessário criar
    //um bloco (colocar as chaves {})

    
    cout << "17. Create a program that reads three numbers and displays the largest of them." <<endl<<endl;

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
    {
        printf("%f foi o maior numero digitado.", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        printf("%f foi o maior numero digitado.", numero2);
    }
    else
    {
        printf("%f foi o maior numero digitado.", numero3);
    }

    
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
