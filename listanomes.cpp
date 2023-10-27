class ListaNomes : public Lista<string> {
	public:
		void entradaDeDados() override {
			int n;
			cout << "Quantos nomes deseja inserir? ";
			cin >> n;
			cin.ignore();
			for (int i = 0; i < n; i++) {
				string nome;
            			cout << "Nome " << i + 1 << ": ";
            			getline(cin, nome);
				adicionar(nome);
			}
		}

		void mostraMediana() override {
        		if (elementos.empty()) {
            			cout << "A lista de nomes está vazia." << endl;
            		return;
        		}
        		sort(elementos.begin(), elementos.end()); // Ordena a lista
			int tamanho = elementos.size();
        		int meio1 = tamanho / 2 - 1;

        		// Se a quantidade de elementos é par, escolha o primeiro deles
        		if (tamanho % 2 == 0) {
            			cout << "Mediana dos nomes: " << elementos[meio1] << endl;
        		}
			else {
            			cout << "Mediana dos nomes: " << elementos[meio1 + 1] << endl;
        		}
    		}
		void mostraMenor() override {
			if (!this->elementos.empty()) {
				cout << "Menor nome: " << *min_element(this->elementos.begin(), this->elementos.end()) << endl;
			}
		}

		void mostraMaior() override {
			if (!this->elementos.empty()) {
				cout << "Maior nome: " << *max_element(this->elementos.begin(), this->elementos.end()) << endl;
			}
		}
		void listarEmOrdem() override {
        		cout << "Listando os nomes em ordem alfabética:" << endl;
        		sort(elementos.begin(), elementos.end());
        		for (const auto &elemento : elementos) {
            			cout << elemento << ", ";
        		}
        		cout << endl;
   		}
		void mostrarPrimeirosElementos(int N) override {
			for (int i = 0; i < N && i < elementos.size(); i++) {
				cout << "Elemento " << i + 1 << ": " << elementos[i] << endl;
			}
		}
};
