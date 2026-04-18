
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nome;
    string user;
    string userLogin;
    string senha;
    string senhaLogin;
    int contador;
    
    cout <<" _-_-_-_ Seja bem vindo! _-_-_-_ "<<endl <<endl;
    
    
    cout <<" Cadastro de usuário"<<endl <<endl;
        
        
    cout <<"Digite seu Nome: " <<endl;
    cin >> nome;
    
    cout <<nome <<", digite seu usuário desejado: " <<endl;
    cin >> user;
    
    cout <<nome <<", digite a sua nova senha: " <<endl;
    cin >> senha;
    
    cout <<"Usuário cadastrado com sucesso!"<<endl<<endl<<endl;
    
    cout <<"Vamos logar!"<<endl<<endl;
    cout <<"Digite seu user: ";
    cin >> userLogin;
    
    if (userLogin != user){
        cout << "Seu usuário não existe!";
        return 0;
    }
    
    if (userLogin == user) {
        cout << user <<", digite sua senha: ";
        cin>>senhaLogin;
    }
    
    if (senhaLogin != senha) {
        cout << "Sua senha está errada!";
        return 0;
    }
    
    if ((userLogin == user) && (senhaLogin == senha)) {
        cout << " ________________________________ "<<endl;
        cout << "| Login realizado com sucesso!   |"<<endl;
        cout << "|                                |"<<endl;
        cout << "| Nome: " <<nome<< "!            |"<<endl;
        cout << "| Usuario: " <<user<< "          |"<<endl;
        cout << "| Senha: " <<senha<< "           |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|                                |"<<endl;
        cout << "----------------------------------"<<endl;
    }
    
    return 0;
}

----------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int chute;
  
  cout << "Adivinhe o número que estou pensando!" <<endl;
  cin >> chute;
  
  while (chute != 2018)
  {
      cout << "Errou, tente novamente: " << chute <<endl;
      
      cin >> chute;
  }
    
    return 0;
}