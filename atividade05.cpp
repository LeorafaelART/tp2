#include <iostream>
#include <fstream>
#include <string>
#include <set> 
#define first f
#define second s
using namespace std;

struct dados
{
	string matricula;
	string nome;
	string codDisci;
	string nomeDisci;
	string turma;
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
	;
	arq.open("CMP-2.txt");
	if(arq.is_open())
	{
		while(!arq.eof())
		{
			dados D1;
			getline(arq,linha);
			//verificar codigo matricula e nome disciplina
			if(linha.size()>=70 and linha[70]=='C')
			{
				D1.codDisci=linha.substr(70,7);
				D1.nomeDisci=linha.substr(80,40);
				D1.turma=linha.substr(135,7);
			}
			//verificar matricula e nome do aluno
			if(linha.size()>=10 and linha[10]=='.')
			{
				D1.matricula=linha.substr(4,15);
				D1.nome=linha.substr(27,56);
			}
			codDisci.insert.f(D1.codDisci);	
			codDisci.insert.s(D1.nomeDisci);
			alunos.insert.f(D1.matricula);
			alunos.insert.s(D1.nome);
			
			for(it=codDisci.begin();it!=codDisci.end();it++)
			{
				disci<<*it.f<<";"<<*it.s<<";\n";
			}
			for(it=alunos.begin();it!=alunos.end();it++)
			{
				alunos<<*it.f<<";"<<*it.s<<";\n";	
			}	
			mat<<D1.matricula<<";"<<D1.codDisci<<";"<<D1.turma<<";\n";	
		}
		arq.close();
		disci.close();
		aluno.close();
		mat.close();
	}	
}
