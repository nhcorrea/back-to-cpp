#include <iostream>
using namespace std;

int main(){
    // string names[3] = {"Nathã", "João", "Maria"};
    // string cities[3] = {"Pelotas", "Porto Alegre", "Rio Grande"};

    // // quantidade de itens / quantidade de valores [3 linhas] [2 colunas]
    // string users[3][2] = {
    //     {"Nathã", "Pelotas"},
    //     {"João", "Porto Alegre"},
    //     {"Maria", "Rio Grande"}
    // };

    // int sizeOfRows = sizeof(users)/sizeof(users[0]);
    // int sizeOfColumns = sizeof(users[0])/sizeof(users[0][0]);

    // for(int i = 0; i < sizeOfRows; i++){
    //     for(int j = 0; j < sizeOfColumns; j++){
    //         cout << users[i][j];
    //     }

    //     cout << endl;
    // }
    // int n;

    // cout << "Digite o tamanho da matriz: ";
    // cin >> n;

    // int matriz[n][n];

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << "Digite o valor da posição" << i << " " << j << ": ";
    //         cin >> matriz[i][j];
    //     }
    // }
    
    // Digite o nome do aluno, nota 1, nota 2, nota 3, nota 4 e nota 5, e calcule a média, 
    // Caso a média seja maior que 7, o aluno está aprovado, caso contrário, está reprovado.

    string student;
    double grades[5];
   

    cout << "Digite o nome do aluno: ";
    cin >> student;

    double acc = 0;

    for(int i = 0; i < 5; i++){
        cout << "Digite a nota da prova " << i + 1 << ": ";
        cin >> grades[i];

        acc += grades[i];
    }

    double media = acc / 5;
    
    if(media >= 7){
        cout << student << " tirou uma média acima de 7 e você passou! Sua média foi: " << media << endl;
    } else {
        cout << student << " tirou uma média abaixo de 7 e você reprovou! Sua média foi: " << media << endl;
    }

    return 0;
}