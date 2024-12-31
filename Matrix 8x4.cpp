#include<iostream>

using namespace std;

int main(){
	bool matrix[8][4] = {
	{true, true, true, false   },
	{true, false, false, false },
	{false, true, true, true   },
	{true, false, false, true  },
	{true, true, true, false   },
	{false, false, false, true },
	{true, true, true, true    },
	{false, false, false, false}
	}; 
	
	int opcion;		
	while(opcion!=3){
	cout<<"\nSELECCIONE UNA OPCION\n"
		<<"1. Mostrar matrix\n" 
		<<"2. cambiar los 0 por 1\n"
		<<"3. SALIR\n";
		
	cin>>opcion;
	switch(opcion){
		case 1:{
		/**Se muestra en un bucle for bidimensional los valores de la matrix*/
		cout<<"\n";
		for(int i=0; i<8; i++){
			for(int j=0; j<4; j++){
			cout<<matrix[i][j];
			
				if(j == 3){
					cout<<"\n";
				}
		
			}	
		}			
			break;
		}	
		case 2:{
			/*Se cambian los valores de la matrix*/ 
			for(int i=0; i<8; i++){
				for(int j=0; j<4; j++){
					if(matrix[i][j] == false){
						matrix[i][j] = true;
					}
				}
			}	
			break;
		}
		case 3:{
			opcion = 3;
			break;
		}

	}

	}
	return 0;
}
