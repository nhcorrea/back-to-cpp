#include <iostream>
// struct User {
//     std::string name;
//     std::string city;
//     int age;
// };

// Nome aluno, idade aluno, nota do 1/2/3/4 período, caso deseje cadastrar mais um aluno (s/n)
// Exibe lista de alunos, nome idade e média,

struct Aluno {
    std::string name;
    int idade;
    double notas[4];
    double avg;
};

int main(){
    int n = 1;
    char continuarInserindo = 's';
    std::string addMore;
    Aluno alunos[n];

    for(int i = 0; continuarInserindo == 's'; i++){
        std::cout << "Digite o nome do aluno: ";
        std::cin >> alunos[i].name;

        std::cout << "Digite a idade do aluno: ";
        std::cin >> alunos[i].idade;

        size_t notasLength = sizeof(alunos[i].notas) / sizeof(alunos[i].notas[0]);

        for(int j = 0; j < notasLength; j++){
            std::cout << "Digite a nota do " << j + 1 << " periodo: ";
            std::cin >> alunos[i].notas[j];

            if(alunos[i].notas[j] > 10.0){
                alunos[i].notas[j] = 10.0;
            }

            alunos[i].avg += alunos[i].notas[j];

            if(j + 1 == notasLength){
                alunos[i].avg /= notasLength;
            }
        }

        std::cout << "Deseja adicionar mais um aluno ? (s/n)\n";
        std::cin >> continuarInserindo;

        if(continuarInserindo == 's'){
            n++;
        } else {
            continuarInserindo = 'n';
        }
        
        
    }

    for(int i = 0; i < n; i++){
        std::cout << "Nome: " << alunos[i].name << "\nIdade: " << alunos[i].idade << "\nMédia: " << alunos[i].avg << "\n" << std::endl;
    }

    return 0;
}


// int main(){
//     // User natha;

//     // natha.name = "Nathã";
//     // natha.age = 25;
//     // natha.city = "Pelotas";

//     // User natha = {
//     //     "Nathã", 
//     //     "Pelotas", 
//     //     25
//     // };

//     // User users[10];

//     // for(int i = 0; i < 10; i++){
//     //     users[i].name = "Nathã";
//     //     users[i].city = "Pelotas";
//     //     users[i].age = i;

//     //     std::cout << users[i].age << " " << users[i].city << std::endl;
//     // }

//     // std::cout << users[8].age << std::endl;

//     desafio();
     
//     return 0;
// }