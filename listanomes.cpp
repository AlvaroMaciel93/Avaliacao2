class ListaNomes : public Lista<string>
{
public:
	void entradaDeDados() override
	{
		int n;
		cout << "Quantos nomes deseja inserir? ";
		cin >> n;
		cin.ignore();

		for (int i = 0; i < n; i++)
		{
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
        cout << "Calculando a mediana dos nomes..." << endl;
        sort(elementos.begin(), elementos.end()); // Ordena a lista em ordem alfabética

        int tamanho = elementos.size();
        int meio1 = tamanho / 2 - 1;

        // Se a quantidade de elementos é par, escolha o primeiro deles
        if (tamanho % 2 == 0) {
            cout << "Mediana: " << elementos[meio1] << endl;
        } else {
            cout << "Mediana: " << elementos[meio1 + 1] << endl;
        }
    }
};