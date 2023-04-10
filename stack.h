#include <iostream>
//class node pra pilha dinâmica
template <typename tipo> class Node
{
	public:
		tipo D;
		Node *Next;
		
		static Node* MontaNode(tipo T);
		static void DesmontaNode(Node *P);
};
//metodos da classe node
//não precisa de um construtor por ser static
template <typename tipo> Node<tipo>* Node<tipo>::MontaNode(tipo T)
{
	//metodo pra criar o no
	Node <tipo>* P= new Node<tipo>;
	if(P)
	{
		//se entra nesse if P não é nulo
		P->D=T;
		P->Next=0;
	}
	return P;
}
//deletando o nó como é static não precisa de um construtor
template <typename tipo> void Node<tipo>::DesmontaNode(Node<tipo>* P)
{
	delete P;
}	



//classe da PILHA
//~ funcionamente da pilha lifo last in
//~ first out  ou simplesmente empilha desempilha
//~ sempre acessando do topo
template <typename tipo> class Stack
{
	private:
		Node<tipo>*T;//T PONTEIRO QUE APONTO PRO TOPO (node)
		int N;
	public:
		Stack();
		bool push(tipo t);//joga um node pro topo
		void pop();//exclui o node do topo
		tipo top();//retorna o dado dentro do no armazenado no topo
		bool empty();
		int size();
		void clear();//limpa a pilha (destrutor JR)
		~Stack();//destrutor
};
//construtor da pilha
template <typename tipo> Stack<tipo>::Stack()
{
	T=NULL;//faz o topo aprontar pra nulo (pilha vazia)
	N=0;//fila vazia tamanho começa em 0
}

template <typename tipo> bool Stack<tipo>::push(tipo t)
{
	//criando o node
	Node <tipo> *P= Node<tipo>::MontaNode(t);
	if(!P) return false;
	//se passou o node foi criado
	P->Next=T;
	T=P;//topo recebendo o endereço do nó
	N++;
	return true;
}

template <typename tipo> tipo Stack<tipo>::top()
{
	tipo T1;
	if(T)
	{
		T1=T->D;
	}
	return T1;
}
template <typename tipo> int Stack<tipo>::size()
{
	return N;
}	
template <typename tipo> void Stack<tipo>::pop()
{
	Node<tipo>*P;
	P=T;
	T=T->Next;
	Node<tipo>::DesmontaNode(P);
	N--;			
}
template <typename tipo> bool Stack<tipo>::empty()
{
	return N == 0;
}
template <typename tipo> void Stack<tipo>::clear()
{
	Node<tipo>*P;
	while(T)
	{
		P=T;
		T=T->Next;
		Node<tipo>::DesmontaNode(P);
	}
	N=0;
}	
template <typename tipo> Stack<tipo>::~Stack()
{
	Node<tipo>*P;
	while(T)
	{
		P=T;
		T=T->Next;
		delete P;
	}
}
