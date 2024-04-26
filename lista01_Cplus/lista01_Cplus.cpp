// ATIVIDADE 1 //

/*A empresa TERMAL conhecida pelos seus serviços de instalação de
banheiras solicitou um sistema que para somar os serviços feitos pelos seus
funcionários. Os serviços são:

Instalação – R$300.00
Limpeza – R$150.00
Manutenção – 499.99

Quando o cliente deverá pagar para a empresa?*/


/*
#include <iostream>

using namespace std;

int main() {
    double num1 = 300.00;
    double num2 = 250.00;
    double num3 = 499.99;
    double soma = num1 + num2 + num3;


    cout << "O cliente devera pagar R$" << soma << " à empresa TERMAL." << endl;

    return 0;
}
*/

// ATIVIDADE 2 //

/*Joaquim trabalha em uma empresa e recebe R$35.00 reais por hora e
trabalha 8 horas por dia. Ele solicitou um programa que calcule quanto ao final
de um dia ele deve receber*/


/*
#include <iostream>

using namespace std;

int main() {
   
    int pagamento = 35;
    int hora = 8;
    int mult = pagamento * hora;
    
    cout << "O pagamento trabalhando 8h: R$" << mult << endl;


}
*/

// ATIVIDADE 3 //

/*Cada caixa de bombom vem 27 unidades, Pamela comprou 16 unidades da
caixa de bombom, quantos bombons ela tem?*/


/*
#include <iostream>

using namespace std;

int main() {
    int caixa = 27;
    int compra = 16;
    int total = caixa * compra;

    cout << "O total de bombom em 16 caixas sao: " << total << "bombons" << endl;
}
*/


//ATIVIDADE 4 //

/*Uma loja vendeu 300 garrafas de água, cada caixa vem 20 garrafas,
quantas caixas eles usaram?*/


/*
#include <iostream>

using namespace std;

int main() {

    int caixa = 20;
    int garrafa = 300;
    int total = garrafa / caixa;

    cout << "300 grarrafas sao " << total << " caixas" << endl;
}
*/

// ATIVIDADE 5 //

/*Uma loja comprou 120 camisetas e vendeu 80 delas, cada uma custou R$
30.00. E logo em seguida comprou mais 50 camisetas, quantas camisetas ele
tem agora e qual foi seu faturamento?*/


/*
#include <iostream>

using namespace std;

int main() {
    int camisas = 120;
    int venda = 80;
    int preco_venda = 30;
    int compra = 50;
    int preco_compra = 20;

    int total = camisas - venda + compra;

    int lucro = (venda * preco_venda) - (compra * preco_compra);

    cout << "Ha " << total << " camisas no estoque. Lucro: R$" << lucro << endl;

    return 0;
}

*/