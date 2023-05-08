#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Aluno
{
	private:
		string nome;
		string matricula;
	public:
		const string& getMatricula() const {
			return matricula;
		}

		void setMatricula(const string &matricula) {
			this->matricula = matricula;
		}

		const string& getNome() const {
			return nome;
		}

		void setNome(const string &nome) {
			this->nome = nome;
		}
};
int menu()
{
	int op;
	cout<<"1- Incluir Aluno"<<endl;
	cout<<"2- Consultar Aluno"<<endl;
	cout<<"3- Atualizar Aluno"<<endl;
	cout<<"4- Deletar Aluno"<<endl;
	cout<<"0- Sair"<<endl;
	cout<<"Digite a opção desejada:";
	cin>>op;
	return op;
}
Aluno* buscarAluno(string mat)
{
	fstream arq;
	string linha,aux,aux2;
	arq.open("alunos.csv");
	if(arq.is_open())
	{
		while(!arq.eof())
		{
			getline(arq,linha);
			aux=linha.substr(0,15);
			aux2=linha.substr(16,40);
			if(mat==aux)
			{
				Aluno *A=new Aluno;
				A->setMatricula(aux);
				A->setNome(aux2);
				
				arq.close();
				return A;
			}
		}	
				
	}
	arq.close();
	return NULL;
}
bool incluirAluno(Aluno* p)
{
	fstream arq;
	arq.open("alunos.csv");
	if(buscarAluno(p->getMatricula())==NULL)
	{
		arq<<p->getMatricula()<<";"<<p->getNome()<<"\n";
		arq.close();
		return true;		
	}
	arq.close();	
	return false;
}

int main()
{
	int opcao;
	string nome, matricula;
	Aluno *pAluno=NULL;
	vector<Aluno*> vetor;
	opcao=menu();
	while(opcao!=0)
	{
		switch(opcao)
		{
			case 1://Incluir Aluno
				pAluno = new Aluno;
				cout<<"Digite a matrícula do aluno:";
				cin>>matricula;
				cout<<"Digite o nome do aluno:";
				getline(cin, nome);
				cin.ignore();
				cout<<'\n';
				pAluno->setMatricula(matricula);
				pAluno->setNome(nome);
				//Criar uma função bool incluirAluno(Aluno* p)
				if(incluirAluno(pAluno))
					cout<<"Aluno cadastrado com sucesso!"<<endl;
				else
					cout<<"Aluno não cadastrado!";
				pAluno=NULL;
				break;
				
			case 2://Consultar Aluno
				cout<<"Digite a matrícula do Aluno:";
				cin>>matricula;
				//Criar uma função Aluno* buscarAluno(string mat)
				pAluno = buscarAluno(matricula);
				if (pAluno!=NULL)
				{
					cout<<"Matricula: "<<pAluno->getMatricula()<<endl;
					cout<<"Nome: "<<pAluno->getNome();
					cout<<endl;
				}	
				else
				{
					cout<<"Aluno não encontrado"<<endl;
				}	
				break;
				pAluno=NULL;
				
			case 3://Atualizar Aluno
				break;
			case 4://Deletar Aluno
				break;
		}
		opcao=menu();
	}
	return 0;
}
