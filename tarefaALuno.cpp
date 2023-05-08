#include <iostream>
#include <fstream>
#include <string>
#include <set>

#define f first
#define s second	
#include <vector>
#include <fstream>
using namespace std;

struct dados
class Aluno
{
	string matricula;
	string nome;
	string codDisci;
	string nomeDisci;
	string turma;
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
int main () 
{ 	
	set<pair<string,string>>codDisci;
	set<pair<string,string>>alunos;
	set<pair<string,string>>::iterator it;

	string linha,ver;
	fstream arq,disci,aluno,mat;
	disci.open("Disciplina.csv",fstream::out);
	aluno.open("Alunos.csv",fstream::out);
	mat.open("Mattriculas.csv",fstream::out);
	arq.open("CMP-2.txt");
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
			dados D1;
			getline(arq,linha);
			//verificar codigo matricula e nome disciplina
			if(linha.size()>=70 and linha[70]=='C')
			aux=linha.substr(0,15);
			aux2=linha.substr(16,40);
			if(mat==aux)
			{
				D1.codDisci=linha.substr(70,7);
				D1.nomeDisci=linha.substr(80,40);
				D1.turma=linha.substr(135,7);
				Aluno *A=new Aluno;
				A->setMatricula(aux);
				A->setNome(aux2);

				arq.close();
				return A;
			}
			//verificar matricula e nome do aluno
			if(linha.size()>=10 and linha[10]=='.')
			{
				D1.matricula=linha.substr(4,15);
				D1.nome=linha.substr(27,56);
			}
			codDisci.insert({D1.codDisci,D1.nomeDisci});	
			alunos.insert({D1.matricula,D1.nome});

			for(it=codDisci.begin();it!=codDisci.end();it++)
			{
				disci<<(*it).f<<";"<<(*it).s<<";\n";
			}
			for(it=alunos.begin();it!=alunos.end();it++)
			{
				aluno<<(*it).f<<";"<<(*it).s<<";\n";	
			}	
			mat<<D1.matricula<<";"<<D1.codDisci<<";"<<D1.turma<<";\n";	
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
		disci.close();
		aluno.close();
		mat.close();
	}	
}	
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
