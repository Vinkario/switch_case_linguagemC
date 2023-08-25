#include <stdio.h>

int main()
{


    int opcao; // VARIAVEL DO EXERCICIO SWITCH CASE
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    int valor1, valor2, valor3; // VARIAVEIS QUESTAO 01
    int n1, n2, n3; // VARIAVEIS QUESTAO 02
    int l1, l2, l3; // VARIAVEIS QUESTAO 03
    int altura; // VARIAVEIS QUESTAO 04
    int senha; // VARIAVEIS QUESTAO 05
    float nota1, nota2, notaParcial; // VARIAVEIS QUESTAO 06
    float salario, salarioReajustado, ajusteSal; // VARIAVEIS QUESTAO 07
    float valorHora, qtdHorasTrabalhadas, salarioBruto, ir; // VARIAVEIS QUESTAO 07
    float inss, fgts, totalDescontos, salarioLiquido; // VARIAVEIS QUESTAO 08
    int numero;// VARIAVEIS QUESTAO 09
    int pergunta1, pergunta2, pergunta3, pergunta4, pergunta5, resposta; // VARIAVEIS QUESTAO 10

    printf("---- Lista 02 - Condicionais ---- \n");
    printf("QUESTAO 01 \t QUESTAO 02 \n");
    printf("QUESTAO 03 \t QUESTAO 04 \n");
    printf("QUESTAO 05 \t QUESTAO 06 \n");
    printf("QUESTAO 07 \t QUESTAO 08 \n");
    printf("QUESTAO 09 \t QUESTAO 10 \n");

    printf("DIGITE UMA OPCAO CORRESPONDE A QUESTAO A SE RESOLVER: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        printf("-----------------------------------------------------\n");
        printf("Digite o primeiro valor: ");
        scanf("%d", &valor1);

        printf("-----------------------------------------------------\n");
        printf("Digite o segundo valor: ");
        scanf("%d", &valor2);

        printf("-----------------------------------------------------\n");
        printf("Digite o terceiro valor: ");
        scanf("%d", &valor3);

        if (valor1 > valor2)
        {
            int temp = valor1;
            valor1 = valor2;
            valor2 = temp;
        }
        if (valor1 > valor3)
        {
            int temp = valor1;
            valor1 = valor3;
            valor3 = temp;
        }
        if (valor2 > valor3)
        {
            int temp = valor2;
            valor2 = valor3;
            valor3 = temp;
        }

        printf("------------------------------------------------------\n");
        printf("Os valores em ordem crescente: %d %d %d\n", valor1, valor2, valor3);
        break;

    case 2:

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);

        printf("Digite o terceiro numero: ");
        scanf("%d", &n3);

        if (n1 > n2 && n1 > n3)
        {
            printf("O maior numeor eh: %d", n1);
        }
        else if (n2 > n1 && n2 > n3)
        {
            printf("O maior numnero eh: %d", n2);
        }
        else
        {
            printf("O maior numero eh: %d", n3);
        }

        break;

    case 3:

        printf("Digite a medida do primeiro lado do triangulo: ");
        scanf("%d", &l1);

        printf("Digite a medida do seundo lado do triangulo: ");
        scanf("%d", &l2);

        printf("Digite a medida do terceiro lado do triangulo: ");
        scanf("%d", &l3);

        if (l1 == l2 && l2 == l3)
        {
            printf("Triangulo Equilatero \n");
        }
        else if (l1 == l2 || l1 == l3)
        {
            printf("Triangulo Isosceles \n");
        }
        else
        {
            printf("Triangulo Escaleno");
        }
        break;

    case 4:

        printf("Informe a altura em cm: ");
        scanf("%d", &altura);

        if (altura < 150)
        {
            printf("Baixo");
        }
        else if (altura >= 150 && altura < 170)
        {
            printf("Altura media");
        }
        else if (altura > 170)
        {
            printf("Alto");
        }

        break;

    case 5:

        printf("Digite sua senha: ");
        scanf("%d", &senha);

        if (senha == 1234)
        {
            printf("ACESSO PERMITIDO");
        }
        else
        {
            printf("Acesso negado");
        }
        break;

    case 6:

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        notaParcial = (nota1 + nota2) / 2;

        if (notaParcial < 7)
        {
            printf("Reprovado");
        }
        else if (notaParcial >= 7 && notaParcial <= 9.9)
        {
            printf("Aprovado");
        }
        else if (notaParcial == 10)
        {
            printf("Aprovado com Distincao");
        }
        break;

    case 7:
        printf("----------------------------------------------------------------- \n");

        printf("Digite o Salario do colaborador: R$");
        scanf("%f", &salario);

        if (salario < 280)
        {
            salarioReajustado = (salario * 20) / 100;
            salarioReajustado = salario + salarioReajustado;
            ajusteSal = salarioReajustado - salario;
            printf("----------------------------------------------------------------- \n");

            printf("O salario antes do reajuste era de R$%.2f \n", salario);
            printf("----------------------------------------------------------------- \n");

            printf("O aumento salarial eh de 20%% \n");
            printf("----------------------------------------------------------------- \n");

            printf("O valor do aumento foi de R$%.2f \n", ajusteSal);
            printf("----------------------------------------------------------------- \n");

            printf("O valor do salario com reajuste eh de R$%.2f \n", salarioReajustado);
            printf("----------------------------------------------------------------- \n");
        }

        else if (salario >= 280 && salario <= 700)
        {
            salarioReajustado = (salario * 15) / 100;
            salarioReajustado = salario + salarioReajustado;
            ajusteSal = salarioReajustado - salario;
            printf("----------------------------------------------------------------- \n");

            printf("O salario antes do reajuste era de R$%.2f \n", salario);
            printf("----------------------------------------------------------------- \n");

            printf("O aumento salarial eh de 15%% \n");
            printf("----------------------------------------------------------------- \n");

            printf("O valor do aumento foi de R$%.2f \n", ajusteSal);
            printf("----------------------------------------------------------------- \n");

            printf("O valor do salario com reajuste eh de R$%.2f \n", salarioReajustado);
            printf("----------------------------------------------------------------- \n");
        }

        else if (salario >= 700 && salario < 1500)
        {
            salarioReajustado = (salario * 10) / 100;
            salarioReajustado = salario + salarioReajustado;
            ajusteSal = salarioReajustado - salario;
            printf("----------------------------------------------------------------- \n");

            printf("O salario antes do reajuste era de R$%.2f \n", salario);
            printf("----------------------------------------------------------------- \n");

            printf("O aumento salarial eh de 10%% \n");
            printf("----------------------------------------------------------------- \n");

            printf("O valor do aumento foi de R$%.2f \n", ajusteSal);
            printf("----------------------------------------------------------------- \n");

            printf("O valor do salario com reajuste eh de R$%.2f \n", salarioReajustado);
            printf("----------------------------------------------------------------- \n");
        }

        else if (salario > 1500)
        {
            salarioReajustado = (salario * 5) / 100;
            salarioReajustado = salario + salarioReajustado;
            ajusteSal = salarioReajustado - salario;
            printf("----------------------------------------------------------------- \n");

            printf("O salario antes do reajuste era de R$%.2f \n", salario);
            printf("----------------------------------------------------------------- \n");

            printf("O aumento salarial eh de 5%% \n");
            printf("----------------------------------------------------------------- \n");

            printf("O valor do aumento foi de R$%.2f \n", ajusteSal);
            printf("----------------------------------------------------------------- \n");

            printf("O valor do salario com reajuste eh de R$%.2f \n", salarioReajustado);
            printf("----------------------------------------------------------------- \n");
        }

        break;

    case 8:

        printf("---------------------------------------------------\n");
        printf("Digite o valor da sua hora de trabalho: R$");
        scanf("%f", &valorHora);

        printf("---------------------------------------------------\n");
        printf("Informe a quantidade de horas trabalhas no mes: ");
        scanf("%f", &qtdHorasTrabalhadas);

        salarioBruto = valorHora * qtdHorasTrabalhadas;
        inss = (salarioBruto * 10) / 100;
        fgts = (salarioBruto * 11) / 100;
        totalDescontos = inss + ir;
        salarioLiquido = salarioBruto - totalDescontos;

        printf("O salario bruto eh de: R$%.2f \n", salarioBruto);
        printf("---------------------------------------------------\n");

        if (salarioBruto <= 900)
        {
            printf("(-) IR               ISENTO \n");
            printf("(-) INSS (10%%)       : R$%.2f\n", inss);
            printf("FGTS(11%%)            : R$%.2f\n", fgts);
            printf("Total de descontos   : R$%.2f\n", totalDescontos);
            printf("Salario Liquido      : R$%.2f\n", salarioLiquido);
            printf("-----------------------------------------------\n");
        }
        else if (salarioBruto > 900 && salarioBruto <= 1500)
        {
            ir = (salarioBruto * 5) / 100;
            printf("(-) IR   (5%%)        : R$%.2f \n", ir);
            printf("(-) INSS (10%%)       : R$%.2f\n", inss);
            printf("FGTS(11%%)            : R$%.2f\n", fgts);
            printf("Total de descontos   : R$%.2f\n", totalDescontos);
            printf("Salario Liquido      : R$%.2f\n", salarioLiquido);
            printf("-----------------------------------------------\n");
        }
        else if (salarioBruto > 1500 && salarioBruto <= 2499)
        {
            ir = (salarioBruto * 10) / 100;
            printf("(-) IR   (10%%)       : R$%.2f \n", ir);
            printf("(-) INSS (10%%)       : R$%.2f\n", inss);
            printf("FGTS(11%%)            : R$%.2f\n", fgts);
            printf("Total de descontos   : R$%.2f\n", totalDescontos);
            printf("Salario Liquido      : R$%.2f\n", salarioLiquido);
            printf("------------------------------------------------\n");
        }

        else if (salarioBruto > 2500)
        {
            ir = (salarioBruto * 20) / 100;
            printf("(-) IR   (20%%)       : R$%.2f \n", ir);
            printf("(-) INSS (10%%)       : R$%.2f\n", inss);
            printf("FGTS(11%%)            : R$%.2f\n", fgts);
            printf("Total de descontos   : R$%.2f\n", totalDescontos);
            printf("Salario Liquido      : R$%.2f\n", salarioLiquido);
            printf("------------------------------------------------\n");
            break;
        }
    case 9:

        printf("Digite um numero para a comparacao: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("O numero %d eh par \n", numero);
        }
        else
        {
            printf("O numero %d eh impar \n", numero);
        }
        break;

    case 10:

        printf("Use 1 para sim e 0 para nao \n");

        printf("----------------------------------------\n");

        printf("Use 1 para sim e 0 para nao \n");

        printf("Telefonou para a vitima? ");
        scanf("%d", &pergunta1);
        printf("----------------------------------------\n");

        printf("Esteve no local do crime? ");
        scanf("%d", &pergunta2);
        printf("----------------------------------------\n");

        printf("Mora perto da vitima? ");
        scanf("%d", &pergunta3);
        printf("----------------------------------------\n");

        printf("Devia para a vitima? ");
        scanf("%d", &pergunta4);
        printf("----------------------------------------\n");

        printf("Ja trabalhou com a vitima? ");
        scanf("%d", &pergunta5);
        printf("----------------------------------------\n");

        resposta = pergunta1 + pergunta2 + pergunta3 + pergunta4 + pergunta5;

        if (resposta == 2)
        {
            printf("O interrogado  foi considerado Suspeito");
        }
        else if (resposta > 2 && resposta <= 4)
        {
            printf("O interrogado  foi considerado Cumplice");
        }
        else if (resposta == 5)
        {
            printf("O interrogado  foi considerado o Assassino");
        }
        else
        {
            printf("O interrogado  foi considerado Inocente");
        }
        break;
    default:
        printf("Opcao incorreta");
        break;
        return 0;
    }
}
