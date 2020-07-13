#include "iostream"
#include "string"
#include "string.h"

const int LongCad = 20 ;

using namespace std;
struct costoPorArticul
 {
   char nombreArticul [LongCad +1];
   int cantidad ;
   float precio;
   float costoPorArticulo;
 };

void LeerDatos(costoPorArticul listado[], int n);
void CostoPorArticulo(costoPorArticul listado[], int n);
void DespliegueDeArreglo(costoPorArticul listado[], int cantidad);
float CostoTotal(costoPorArticul listado[],int cantidad);

int main (void)
{
    int n,cantidad; 

    cout << endl << endl ;

    cout << "      **FACTURA**       " << endl << endl ;

    cout << "Cuantos articulos lleva: " ; //numero de productos que compra//
    cin >> n;
    cin.ignore(100,'\n');

    costoPorArticul listado[n];

    cout << endl;
    LeerDatos(listado,n);
    CostoPorArticulo(listado,n);             //Llamado de las funciones//
    DespliegueDeArreglo(listado,n);

    cout << "TOTAL: $" << CostoTotal(listado,n) << endl<<endl;   //total de la compra//

    cout << "      **GRACIAS POR SU COMPRA**      " << endl << endl;

    return 0;
    

}   
    
void LeerDatos(costoPorArticul listado[],int n )
{
    int i;
    

    cout << "Digite nombre, la cantidad y el precio unitario  " << endl<< endl;

    for (i=0; i<n ; i ++)
    {
        cout << "Ingrese el nombre del articulo: ";     // Nombre de lo que compra//
        cin.getline(listado[i].nombreArticul,21,'\n');
        listado[i].nombreArticul[LongCad] = '\0';
        cout << "Ingrese la cantidad a comprar: ";      //Cantidad de lo que quiere comprar//
        cin >> listado[i].cantidad; 
        cout << "Ingrese el precio unitario: $";       // Precio de solo ese producto//
        cin>> listado[i].precio ;
        cout << endl ;
        
        cin.ignore(100,'\n');

    }
   

}
void CostoPorArticulo(costoPorArticul listado[], int cantidad)
{
    int i;
    
    for (i=0; i<cantidad;i++)
    {
       listado[i].costoPorArticulo = listado[i].cantidad * listado[i].precio;   
    }
    cout << endl;
    

}
void DespliegueDeArreglo(costoPorArticul listado[], int n)
{
    int i;
  
    // despliegue de toda su compra//

    cout << " **DESCRIPICION DE LA FACTURA**  " << endl << endl ;
    
    for (i=0;i<n;i++)
    {   
        cout << "Nombre del producto: " << listado[i].nombreArticul <<  endl ;
        cout << "Cantidad: " << listado[i].cantidad << endl;                     
        cout << "Precio: "<< listado[i].precio << endl;
        cout << "Costo por articulo: "<< listado[i].costoPorArticulo << endl;
        
        cout << endl;

    }

}
float CostoTotal(costoPorArticul listado[],int cantidad)
{
    float total;
    int i ;
    
    for(i=0 ; i<cantidad ; i++)
    {
        total += listado[i].costoPorArticulo ;

    }
    return total;
}