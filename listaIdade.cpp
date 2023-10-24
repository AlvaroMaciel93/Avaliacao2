class ListaIdades : public Lista<int>
{
public:
    void entradaDeDados() override
    {
        int n;
        cout << "Quantas idades deseja inserir? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int idade;
            cout << "Digite a " << (i + 1) << "ª idade: ";
            cin >> idade;
            adicionar(idade);
        }
    }

    void mostraMediana() override
    {
        cout << "Aqui vai mostrar a mediana da lista de idades" << endl;
        vector<int> sortedIdades = elementos;
        sort(sortedIdades.begin(), sortedIdades.end()); // Ordena as idades em ordem crescente

        int size = sortedIdades.size();
        int medianAge;

        if (size % 2 == 1)
        {
            // Quantidade ímpar de idades
            medianAge = sortedIdades[size / 2];
        }
        else
        {
            // Quantidade par de idades
            int middleIndex = size / 2;
            int age1 = sortedIdades[middleIndex - 1];
            int age2 = sortedIdades[middleIndex];
            medianAge = (age1 + age2) / 2;
        }

        cout << "Mediana: " << medianAge << endl;
    }

    void mostraMenor() override
    {
        cout << "Aqui vai mostrar a menor das idades" << endl;
        if (!elementos.empty())
        {
            int menorIdade = elementos[0];
            for (const int &idade : elementos)
            {
                if (idade < menorIdade)
                {
                    menorIdade = idade;
                }
            }
            cout << "Menor idade: " << menorIdade << endl;
        }
        else
        {
            cout << "A lista de idades está vazia." << endl;
        }
    }
    void mostraMaior() override
    {
        cout << "Aqui vai mostrar a maior das idades" << endl;
        if (!elementos.empty())
        {
            int maiorIdade = elementos[0];
            for (const int &idade : elementos)
            {
                if (idade > maiorIdade)
                {
                    maiorIdade = idade;
                }
            }
            cout << "Maior idade: " << maiorIdade << endl;
        }
        else
        {
            cout << "A lista de idades está vazia." << endl;
        }
    }
};
