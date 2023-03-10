#include <iostream>
#include <string>

using namespace std;

struct cliente
{
  string nome;
  string CPF;
  string endereco;
  string dataNascimento;
  string dataEmprestimo;
  float valorTotal;
  int parcelasMensais;
};

int main()
{

  int opcao;
  int limitedeClientes = 1000;
  int numerodeClientes = 0;
  string clienteDesejado;

  cliente clientes[limitedeClientes];

  do
  {

    cout << "Seja bem vindo(a)! Como podemos te ajudar hoje?" << endl
         << "1 - Cadastrar cliente" << endl
         << "2 - Visualizar as informacoes de um cliente" << endl
         << "3 - Editar as informacoes de um cliente" << endl
         << "4 - Cadastrar parcela paga" << endl
         << "5 - Cadastrar emprestimo" << endl
         << "6 - Excluir cliente" << endl
         << "7 - Sair" << endl;

    cin >> opcao;

    if (opcao == 1)
    {
      cliente novoCliente;

      cout << "Qual e o nome do cliente que gostaria de cadastrar?" << endl;
      cin >> novoCliente.nome;

      cout << "Qual e o CPF do cliente?" << endl;
      cin >> novoCliente.CPF;

      cout << "Qual e o endereco do cliente?" << endl;
      cin >> novoCliente.endereco;

      cout << "Qual e a data de nascimento do cliente?" << endl;
      cin >> novoCliente.dataNascimento;

      cout << "Qual e a data do emprestimo realizado pelo cliente?" << endl;
      cin >> novoCliente.dataEmprestimo;

      cout << "Digite o valor total do emprestimo realizado pelo cliente: " << endl;
      cin >> novoCliente.valorTotal;

      cout << "Digite a quantidade de parcelas mensais do cliente: " << endl;
      cin >> novoCliente.parcelasMensais;

      clientes[numerodeClientes] = novoCliente;
      numerodeClientes++;

      cout << "Cliente Cadastrado com sucesso!" << endl
           << "Nome: " << novoCliente.nome << endl
           << "CPF: " << novoCliente.CPF << endl
           << "Endereco: " << novoCliente.endereco << endl
           << "Data de nascimento: " << novoCliente.dataNascimento << endl
           << "Data do emprestimo: " << novoCliente.dataEmprestimo << endl
           << "Valor total: " << novoCliente.valorTotal << endl
           << "Parcelas mensais: " << novoCliente.parcelasMensais << endl;
    }
    else if (opcao == 2)
    {

      cout << "Digite o nome do cliente desejado:" << endl;
      cin >> clienteDesejado;
      bool clienteEncontrado = false;

      for (int i = 0; i < numerodeClientes; i++)
      {
        if (clientes[i].nome.compare(clienteDesejado) == 0)
        {
          clienteEncontrado = true;
          cout << "Cliente encontrado! Segue os dados do cliente " << clientes[i].nome << ":" << endl
               << "Nome: " << clientes[i].nome << endl
               << "CPF: " << clientes[i].CPF << endl
               << "Endereco: " << clientes[i].endereco << endl
               << "Data de nascimento: " << clientes[i].dataNascimento << endl
               << "Data do emprestimo: " << clientes[i].dataEmprestimo << endl
               << "Valor total: " << clientes[i].valorTotal << endl
               << "Parcelas mensais: " << clientes[i].parcelasMensais << endl;
        }
      }
      if (!clienteEncontrado)
      {
        cout << "Cliente não encontrado, por favor, tente de novo." << endl;
      }
    }
    else if (opcao == 3)
    {
      int opcao2;
      cout << "Digite o nome do cliente: " << endl;
      cin >> clienteDesejado;

      for (int i = 0; i < numerodeClientes; i++)
      {
        if (clientes[i].nome.compare(clienteDesejado) == 0)
        {
          string novoItem;
          float novovalorTotal;
          int novoParcelas;
          cout << "Cliente encontrado!Qual é a informacao que gostaria de alterar?" << endl
               << "1 - Nome" << endl
               << "2 - CPF" << endl
               << "3 - Endereco" << endl
               << "4 - Data de Nascimento" << endl
               << "5 - Data do emprestimo" << endl
               << "6 - Valor total" << endl
               << "7 - Parcelas Mensais" << endl;

          cin >> opcao2;

          switch (opcao2)
          {
          case 1:
            cout << "Digite o novo nome: " << endl;
            cin >> novoItem;

            clientes[i].nome = novoItem;

            cout << "Nome corrigido com sucesso!" << endl;
            break;

          case 2:
            cout << "Digite o novo nome para o cliente: ";
            cin >> novoItem;

            clientes[i].CPF = novoItem;

            cout << "CPF corrigido com sucesso!" << endl;
            break;

          case 3:
            cout << "Digite o novo endereco: ";
            cin >> novoItem;

            clientes[i].endereco = novoItem;

            cout << "Endereco corrigido com sucesso!" << endl;
            break;

          case 4:
            cout << "Digite a nova data de nascimento: ";
            cin >> novoItem;

            clientes[i].dataNascimento = novoItem;

            cout << "Data de nascimento corrigida com sucesso!" << endl;
            break;

          case 5:
            cout << "Digite a nova data do emprestimo: ";
            cin >> novoItem;

            clientes[i].dataEmprestimo = novoItem;

            cout << "Data do emprestimo corrigida com sucesso!" << endl;
            break;

          case 6:
            cout << "Digite o novo valor total: ";
            cin >> novovalorTotal;

            clientes[i].valorTotal = novovalorTotal;

            cout << "Valor total do emprestimo corrigido com sucesso!" << endl;
            break;

          case 7:
            cout << "Digite a nova quantidade de parcelas: ";
            cin >> novoParcelas;

            clientes[i].parcelasMensais = novoParcelas;

            cout << "Parcelas corrigidas com sucesso!" << endl;
            break;

          default:
            cout << "Opcao invalida." << endl;
          }
        }
      }
    }
    else if (opcao = 4)
    {
        }
  } while (opcao != 7);
}