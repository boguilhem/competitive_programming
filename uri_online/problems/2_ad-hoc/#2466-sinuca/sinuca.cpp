/*
    Nadine e Celine inventaram um passatempo com bolas de sinuca, pretas e brancas, que são colocadas uma por vez na mesa, de acordo com uma regra fixa. Agora elas estão tentando descobrir, com um computador, a cor da bola que vai ser colocada por último! Você pode ajuda-las?

    Funciona assim. No início, são colocadas N bolas formando a primeira fileira. Em seguida, um triângulo equilátero é formado, fileira a fileira, de acordo com a seguinte regra. Ao se colocar uma bola na nova fileira, ela ficará encostada em duas bolas da fileira anterior e sua cor será:

    Preta, se estiver encostada em duas bolas de mesma cor;
    Branca, se estiver encostada em duas bolas de cores diferentes.

    Nesta tarefa, você deve escrever um programa que, dadas as cores das bolas da primeira fileira, descubra qual é a cor da bola que será colocada por último. Na figura, foi uma bola branca!

    Entrada
    A entrada é composta por duas linhas. A primeira linha contém um inteiro N (2 ≤ N ≤ 64), o número de bolas da primeira fileira. A segunda linha contém N inteiros representando as cores das bolas da primeira fileira. Se a bola é preta, o número será “1”, se for branca, será “-1”.

    Saída
    Seu programa deve imprimir uma linha contendo a palavra “preta”, se a última bola for preta; ou a palavra “branca”, se for branca.
*/

#include <iostream>
 
using namespace std;

/* Test Function to print array */
// void print_array(int array[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << '\t';
//     }
//     cout << endl;
// }

/* Function to iterate over array evaluating each color and setting 0 to the last position after iteration */
void iter_array(int array[], int size){
    for (int i = 0, j = 1; j < size; i++, j++)
    {
        if (array[i] == array[j])
        {
            array[i] = -1;
        } else {
            array[i] = 1;
        } 
    }
    array[size-1] = 0;
}
 
int main() {
 
    int N;
    cin >> N;

    int fileira[N];

    for (int i = 0; i < N; i++)
    {
        cin >> fileira[i];
    }

    for (int i = N; i > 1; i--)
    {
        iter_array(fileira, N);
        N = N-1;
    }

    if (fileira[0] == 1)
    {
        cout << "branca" << endl;
    } else if (fileira[0] == -1)
    {
        cout << "preta" << endl;
    }
    
    return 0;
}