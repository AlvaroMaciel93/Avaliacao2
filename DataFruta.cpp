#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Data
{
	int dia, mes, ano;

public:
	Data() : dia(1), mes(1), ano(2000) {}

	static int compara(const Data &d1, const Data &d2)
	{
		if (d1.ano < d2.ano)
		{
			return -1;
		}
		else if (d1.ano > d2.ano)
		{
			return 1;
		}
		else if (d1.mes < d2.mes)
		{
			return -1;
		}
		else if (d1.mes > d2.mes)
		{
			return 1;
		}
		else if (d1.dia < d2.dia)
		{
			return -1;
		}
		else if (d1.dia > d2.dia)
		{
			return 1;
		}
		return 0;
	}

	bool operator<(const Data &outraData) const // Overload < para evitar erro de compilação
	{
		if (ano < outraData.ano)
		{
			return true;
		}
		else if (ano > outraData.ano)
		{
			return false;
		}
		else if (mes < outraData.mes)
		{
			return true;
		}
		else if (mes > outraData.mes)
		{
			return false;
		}
		return dia < outraData.dia;
	}

	Data(int _dia, int _mes, int _ano) : dia(_dia), mes(_mes), ano(_ano) {}

	string toString() const
	{
		string ret = "";
		ret.append(to_string(dia));
		ret.append("/");
		ret.append(to_string(mes));
		ret.append("/");
		ret.append(to_string(ano));
		return ret;
	}
};

template <typename T>
class Lista
{
protected:
	vector<T> elementos;

public:
	void adicionar(const T &elemento)
	{
		elementos.push_back(elemento);
	}

	void remover(const T &elemento)
	{
		for (auto it = elementos.begin(); it != elementos.end(); ++it)
		{
			if (*it == elemento)
			{
				elementos.erase(it);
				break;
			}
		}
	}

	void listar()
	{
		for (const auto &elemento : elementos)
		{
			cout << elemento << " ,";
		}
	}

	virtual void entradaDeDados() = 0;
	virtual void mostraMediana() = 0;
	virtual void mostraMenor() = 0;
	virtual void mostraMaior() = 0;
};

int main()
{
	return 0;
}
