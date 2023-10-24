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
		int N, dia, mes, ano;
		cout << "Digite a quantidade de datas que serão armazenadas na lista";
		cin >> N;
		for(int i=0;i<N;i++){
			cout << "Digite o dia, mes e ano da data" << endl;
			cin >> dia >> mes >> ano;
			lista.push_back(Data (dia,mes,ano));
		}
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