#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct dados
{
	int codigo;
	string descricao;
	float preco;
};


int main()
{
	dados prod[10];
	int i;
	int deletado;
	
	
	for(i = 0;i < 10; i++)
	{
		cin >> prod[i].codigo;
	   	getline(cin >> ws, prod[i].descricao);
		cin >> prod[i].preco;
	}
	
	cout << endl;
	cout << endl;
	
	for(i = 0;i < 10; i++)
	{
		
		if(prod[i].codigo != 1)
		{
			cout << fixed << setprecision(2);
			cout << prod[i].codigo <<" " << prod[i].descricao << " " << prod[i].preco << endl;
			
		}
	}
	
	
	return 0;
}