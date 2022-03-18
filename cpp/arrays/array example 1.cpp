#include <iostream>
using namespace std;

// La fonction avec les deux paramètres, le premier étant l'indice de la table (qui va être défini en fonction de l'entrée utilisateur)
// le deuxième rappelant la table qu'on initialize dans la fonction main
// Here the function with two parametres, the first is the index of the array who will be initialized by the input of the client
// the second calling the table initialized in the main function.

void calc(int indexOfTable, int arrayOfTable[11])
{
	// Notre boucle 'for' basique - Our 'for' basic loop
	for (int i = 0; i <= 10; i++)
	{
		arrayOfTable[i] = i * indexOfTable;
		cout << arrayOfTable[i] << endl;
	}
}

int main()
{
	// Ici on déclare un tableau de 10 octets - Here we initialize an 10 bytes array
	int arrayOfTable[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int input;
	
	cin >> input;

	calc(input, arrayOfTable);

	return 0;
}