#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


int suma( int x, int y);
int resta (int x , int y);

int factorial(int x);



int suma(int x, int y)
{
    return x+y;
}
int resta(int x, int y)
{
    int resta=x-y;
    return resta;

}
int factorial(int x)
{
    int contador;
    int factorial;

    contador=x;
    factorial=1;
    while(contador >=1)
            {
                    factorial=factorial*contador;
                    contador--;
            }

    return factorial;
}


#endif // FUNCIONES_H_INCLUDED
