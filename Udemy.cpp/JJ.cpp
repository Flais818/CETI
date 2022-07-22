
/*Algoritmos de ordenacion*/

using namespace std;

//Código de Algoritmo por Inserción 

void byInsertion () {
	
	unsigned t0, t1;
	t0 = clock();
	
	int v[] = {2,7,1,4,3,5,0,8,2,-1,2 };
	
	// sizeof (v) muestra el número de bits del array y 
	//sizeof(*v) muestra la cantidad de elementos en el array
	
	int size = sizeof(v)/sizeof(*v);
	int aux;
	int PosMin;
	int PosMax;
	int PosFinal = size - 1;
	
	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";
	
	for(int i=0; i < size / 2; i++) {
		PosMin = i;
		PosMax = i;
		for (int j=i; j <= PosFinal; j++) {
			if(v[j] > v[PosMax]) 
			PosMax = j;
			if(v[j] < v[PosMax]) 
			PosMin = j;
		}
		aux = v[PosMin];
		v[PosMin] = v[i];
		v[i] = aux;
		
		if(PosMax == i) PosMax = PosMin;
		
		aux = v[PosFinal];
		v[PosFinal] = v[PosMax];
		v[PosMax] = aux;
		
		PosFinal--;
	}
	
	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";
	
	t1 = clock ();
	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << endl << endl << "Eexcution Time byInsertion: " << time << endl;
		
	
}

void byJJ(){
	unsigned t0, t1;
	t0 = clock();
	
	int v[] = {2,7,1,4,3,5,0,8,2,-1,2 };
	
	int size = sizeof(v) / sizeof(*v);
	int aux;
}

int main () {
	byInsertion();
}
	
