#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ListaDatas  : public Lista<Data>{
	vector<Data> lista;
	
	public:
		
	/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	
	void entradaDeDados() override {
		
	}
	
	void mostraMediana() override {
		cout << "Aqui vai mostrar a mediana da lista de datas" << endl;
	}
	
	void mostraMenor() override {
		cout << "Aqui vai mostrar a primeira data cronologicamente" << endl;
	}
	void mostraMaior() override {
		cout << "aqui vai mostrar a ultima data cronologicamente" << endl;
	}
};