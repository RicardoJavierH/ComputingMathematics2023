#include <iostream>
#include <cmath>

const int m = 2;
const int n = 3;

//Suma de los cuadrados de los n primeros números naturales
int sumacuad(int n);// Declaración de la función "sumacuad"
void resCuadratica(double a, double b, double c);//Resuelve ax^2+bx+c=0
void printMatrix(int A[m][n]);
void sumMatrix(int A[m][n], int B[m][n], int C[m][n]);

int main(){
/*
int n;
std::cout << "Ingrese n:";
std::cin >> n; //Recepciona dato por teclado
std::cout << "La suma de los cuadrados de los primeros " << n << " números naturales es: ";
std::cout << sumacuad(n) << std::endl;
*/

/*
std::cout << "Ingrese los coeficientes de la ecuación cuadrática" << std::endl;
double a,b,c; // ax^2+bx+c
std::cout << "a: ";
std::cin >> a;
std::cout << "b: ";
std::cin >> b;
std::cout << "c: ";
std::cin >> c;
resCuadratica(a,b,c);
*/

    //Arrays estáticos
    int A[2][3] = {{1 , 2, 3},
                    {4, 5, 6}};
    int B[2][3] = {{-1 , 3, 1},
                   {0, 2, 6}};

    printMatrix(A);
    printMatrix(B);

    int C[2][3];
    sumMatrix(A,B,C);
    printMatrix(C);

return 0;
}

int sumacuad(int n){ //Definición de la función "sumacuad"
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum = sum + i*i;
    }

    return sum;
}

void resCuadratica(double a, double b, double c){

    double discrim = b*b-4*a*c;

    if (a == 0){
        std::cout << "¡La ecuación no es cuadrática!!!";
    }else if(discrim < 0){
        std::cout << "¡La ecuación no tiene soluciones reales!";
    }else if(discrim == 0) {
      std::cout << "La ecuación tiene una única solución: ";
      double raiz;
      raiz = -b/(2*a);
      std::cout << raiz;
    }else{
        std::cout << "La ecuación tiene dos soluciones: ";
        double raiz, raiz2;
        raiz = (-b+sqrt(discrim))/(2*a);
        raiz2 = (-b-sqrt(discrim))/(2*a);

        std::cout << raiz << " y " << raiz2;
    }

}

void printMatrix(int A[m][n]){
    for(int i=0; i < m; i++){
        for(int j=0; j< n; j++){
            std::cout << A[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void sumMatrix(int A[m][n], int B[m][n], int C[m][n]){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
