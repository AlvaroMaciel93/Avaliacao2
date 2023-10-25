class ListaSalarios : public Lista<float>
{

public:


	void entradaDeDados() override
	{
		int qtde;
		cout << "Quantos salários você deseja adicionar? ";
		cin >> qtde;

		for (int i = 0; i < qtde; i++)
		{
			float salario;
			cout << "Digite o salário " << (i + 1) << ": ";
			cin >> salario;
			adicionar(salario);
		}
	}

	void mostraMediana() override
	{
		cout << "Mediana da lista de salários: " << endl;
		vector<float> sortedSalarios = elementos;
		sort(sortedSalarios.begin(), sortedSalarios.end()); // Ordena os salários em ordem crescente

		int size = sortedSalarios.size();
		float medianSalary;

		if (size % 2 == 1)
		{
			// Quantidade ímpar de salários
			medianSalary = sortedSalarios[size / 2];
		}
		else
		{
			// Quantidade par de salários
			int middleIndex = size / 2;
			float salary1 = sortedSalarios[middleIndex - 1];
			float salary2 = sortedSalarios[middleIndex];
			medianSalary = (salary1 + salary2) / 2;
		}

		cout << "Mediana: " << medianSalary << endl;
	}

	void mostraMenor() override
	{
		cout << "Aqui vai mostrar o menor dos salários" << endl;
		if (!elementos.empty())
		{
			float menorSalario = elementos[0];
			for (const float &salario : elementos)
			{
				if (salario < menorSalario)
				{
					menorSalario = salario;
				}
			}
			cout << "Menor salário: " << menorSalario << endl;
		}
		else
		{
			cout << "A lista de salários está vazia." << endl;
		}
	}
	void mostraMaior() override
	{
		cout << "Aqui vai mostrar o maior dos salários" << endl;
		if (!elementos.empty())
		{
			float maiorSalario = elementos[0];
			for (const float &salario : elementos)
			{
				if (salario > maiorSalario)
				{
					maiorSalario = salario;
				}
			}
			cout << "Maior salário: " << maiorSalario << endl;
		}
		else
		{
			cout << "A lista de salários está vazia." << endl;
		}
	}
};