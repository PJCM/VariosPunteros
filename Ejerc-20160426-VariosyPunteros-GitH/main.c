//
//  main.c
//  Ejerc-20160426-VariosyPunteros-GitH
//
//  Created by MDM IOS DEV  on 26/04/16.
//  Copyright (c) 2016 curso_DAM_AEG. All rights reserved.
//

#include <stdio.h>

void Salir();

void VariosPunteros_General();
void VariosPunteros_01();
void VariosPunteros_02();
void VariosPunteros_03();
void VariosPunteros_04();
void VariosPunteros_05();
void VariosPunteros_06();
void VariosPunteros_07();
void VariosPunteros_08();
void VariosPunteros_09();
void VariosPunteros_10();
void VariosPunteros_11();
void VariosPunteros_12();
void VariosPunteros_13();
void VariosPunteros_14();
void VariosPunteros_15();
void VariosPunteros_16();
void VariosPunteros_17();
void VariosPunteros_18();
void VariosPunteros_19();

void suma_dos_14(int *x, int *y, int *z);
void datos_15(int *x, float *y, char *c);
void datos_16(int *x, float *y, char *c);
void datos_17(int x, float y, char c);
int datos_18(int x, float y, char c);
char datos_19(int *x, float *y, char *c);


int main(int argc, const char * argv[])
{
    VariosPunteros_General();
    
    printf("\n");
    
    return 0;
}

#pragma mark
#pragma mark ====> Salir
void Salir()
{
    printf("\nLa aplicación fue cancelada. Saludos.\n");
}
#pragma mark

#pragma mark
#pragma mark ====> VariosPunteros
void VariosPunteros_General()
{
    
    int opcApp;
    printf("Elige el número del EJERCICIO de Punteros a ejecutar del (1 al 19)");
    printf("\n\t(teclea 0 para Salir)\n\nOpción:\t");
    scanf("%i", &opcApp);
    
    switch (opcApp) {
            
        case 0:
            Salir();
            break;
            
        case 1:
            VariosPunteros_01();
            break;
            
        case 2:
            VariosPunteros_02();
            break;
            
        case 3:
            VariosPunteros_03();
            break;
            
        case 4:
            VariosPunteros_04();
            break;
            
        case 5:
            VariosPunteros_05();
            break;
            
        case 6:
            VariosPunteros_06();
            break;
            
        case 7:
            VariosPunteros_07();
            break;
            
        case 8:
            VariosPunteros_08();
            break;
            
        case 9:
            VariosPunteros_09();
            break;
            
        case 10:
            VariosPunteros_10();
            break;
            
        case 11:
            VariosPunteros_11();
            break;
            
        case 12:
            VariosPunteros_12();
            break;
            
        case 13:
            VariosPunteros_13();
            break;
            
        case 14:
            VariosPunteros_14();
            break;
            
        case 15:
            VariosPunteros_15();
            break;
            
        case 16:
            VariosPunteros_16();
            break;
            
        case 17:
            VariosPunteros_17();
            break;
            
        case 18:
            VariosPunteros_18();
            break;
            
        case 19:
            VariosPunteros_19();
            break;
            
        default:
            break;
    }
}

void VariosPunteros_01()
{
    int *punt;
    int x = 7;
    int y = 5;
    
    punt = &x;
    *punt = 4;
    
    printf("%d, %d", x, y); //¿Qué imprime este printf?
    
    /*
     Imprime:
     x= 4   y = 5
     
     Si bien X vale, inicialmente, 7
     a través del puntero, termina valiendo 4
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_02()
{
    int *punt;
    int x = 7;
    int y = 5;
    
    punt = &x;
    x = 4;
    
    printf("%d, %d", *punt, y);// ¿qué imprime este printf?
    
    /*
     Imprime:
     *punt = 4   y = 5
     
     Si bien X vale, inicialmente, 7 y al puntero se le asigna el valor de X,
     como se le vuelve a dar un valor, termina valiendo 4
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_03()
{
    int *punt;
    int x = 7;
    int y = 5;
    
    punt = &x;
    x = 4;
    punt = &y;
    
    printf("%d, %d", *punt, x); //¿Qué imprime este printf?
    
    /*
     Imprime:
     *punt = 5   x = 4
     
     El puntero coge el valor de X, luego X cambia de valor.
     Finalmente, el puntero coge el valor de Y.
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_04()
{
    int *punt;
    int x = 7;
    int y = 5;
    
    punt = &x;
    *punt = 3;
    punt = &y;
    *punt = x;
    x = 9;
    
    printf("%d, %d", *punt, x); //¿Qué imprime este printf?
    
    /*
     Imprime:
     *punt = 3   x = 9
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_05()
{
    int *punta, *puntb;
    int x = 7;
    int y = 5;
    
    punta = &x;
    *punta = 3;
    puntb = &y;
    *puntb = x;
    x = 9;
    
    printf("%d, %d", *puntb, x); // ¿Qué imprime este printf?
    
    /*
     Imprime:
     *puntb = 3   x = 9
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_06()
{
    int *punta, *puntb;
    int x = 7;
    int y = 5;
    
    punta = &x;
    *punta = 3;
    puntb = &y;
    *puntb = x;
    x = 9;
    
    printf("%d, %d", *puntb, *punta); // ¿Qué imprime?
    
    /*
     Imprime:
     *puntb = 3   *punta = 9
     
     *puntb = 3 porque saca el valor actual de X
     *punta = 9 porque, al final, a X se le asigna el valor de 9
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_07()
{
    int *punta, *puntb;
    int x = 7;
    int y = 5;
    
    punta = &x;
    *punta = 3;
    puntb = &y;
    *puntb = x;
    x = 9;
    puntb = punta;
    
    printf("%d, %d", *puntb, y); // ¿Qué imprime?
    
    /*
     Imprime:
     *puntb = 9   y = 3
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

// *****************************************************
// *** Punteros y Arrays *******************************
// *****************************************************

void VariosPunteros_08()
{
    int *punt, i;
    int x[5] = {1, 2, 3, 4, 5};
    
    punt = x;
    *punt = 9;
    
    for(i = 0; i < 5; i++)
        printf("%d,", x[i]); // ¿Qué imprime?
    
    /*
     Imprime:
     9,2,3,4,5,
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_09()
{
    int *punt,i;
    int x[5] = {1,2,3,4,5};
    
    punt = &x[0];
    *punt = 9;
    punt[3] = 7;
    
    for(i = 0; i < 5; i++)
        printf("%d,", x[i]); // ¿Qué imprime?
    
    /*
     Imprime:
     9,2,3,7,5,
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_10()
{
    int *punt, i;
    int x[5] = {1, 2, 3, 4, 5};
    
    punt = x;
    *x = 11;
    *(punt + 3) = 9;
    
    for(i = 0; i < 5; i++)
        printf("%d,", x[i]); // ¿Qué imprime?
    
    /*
     Imprime:
     11,2,3,9,5,
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_11()
{
    int *punt, i;
    int x[5] = {1, 2, 3, 4, 5};
    
    punt = x;
    *(punt + 2) = 9;
    *(x + 3) = 7;
    punt[1] = 11;
    
    for(i = 0; i < 5; i++)
        printf("%d,", *(punt + i)); //¿Qué imprime?
    
    /*
     Imprime:
     1,11,9,7,5,
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_12()
{
    int *punt, i;
    int x[5] = {1, 2, 3, 4, 5};
    
    punt = x + 4;
    *(punt - 2) = 9;
    punt--;
    *(punt) = 7;
    punt[1] = 11;
    
    for(i = 0; i < 5; i++)
        printf("%d,", *(x + i)); // ¿Qué imprime?
    
    /*
     Imprime:
     1,2,9,7,11,
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

void VariosPunteros_13()
{
    int *punt, i;
    int x[5] = {1, 2, 3, 4, 5};
    
    punt = &x[0] + 3;
    *(punt - 2) = 9;
    punt--;
    *(punt) = 7;
    punt[1] = 11;
    punt = x;
    
    for(i = 0; i < 5; i++)
        printf("%d,", punt[i]); // ¿Qué imprime?
    
    /*
     Imprime:
     1,9,7,11,5,
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}

// *****************************************************
// *** Punteros y Funciones ****************************
// *****************************************************

void VariosPunteros_14()
{
    int x,y,z;
    x = 3;
    y = 10;
    z = 15;
    
    suma_dos_14(&x, &y, &z);
    printf("%d %d %d", x, y, z); // ¿Qué imprimirá??
    
    /*
     Imprime:
     5 12 17
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}
void suma_dos_14(int *x, int *y, int *z)
{
    *x = *x + 2;
    *y = *y + 2;
    *z = *z + 2;
}

void VariosPunteros_15()
{
    
    int x = 9;
    
    float y = 44.6;
    
    char c = 'a';
    
    datos_15(&x, &y, &c);
    
    printf("%d %f %c", x, y, c); // ¿Qué imprimirá?
    
    /*
     Imprime:
     8 4.200000 g
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}
void datos_15(int *x, float *y, char *c)
{
    *x = 8;
    *y = 4.2;
    *c = 'g';
}

void VariosPunteros_16()
{
    int x = 9;
    float y = 44.6;
    char c = 'a';
    
    datos_16(&x, &y, &c);
    
    printf("\nAl final ...\n");
    
    printf("%d %f %c", x, y, c); // ¿Qué imprimirá?
    
    /*
     Imprime:
     1606416076     0.000000    ff2B
     8              4.200000    g
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}
void datos_16(int *x, float *y, char *c)
{
    printf("%d %f %s", x, y, c);
    
    *x = 8;
    *y = 4.2;
    *c = 'g';
    
}

void VariosPunteros_17()
{
    int x = 9;
    float y = 44.6;
    char c = 'a';
    
    datos_17(x, y, c);
    
    printf("\nAl final ...\n");
    
    printf("%d %f %c", x, y, c); // ¿Qué imprimirá?
    
    /*
     Imprime:
     Primero
     9 44.599998 a
     Al final
     9 44.599998 a
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}
void datos_17(int x, float y, char c)
{
    printf("%d %f %c", x, y, c);
    
    x = 8;
    y = 4.2;
    c = 'g';
}

void VariosPunteros_18()
{
    int x = 9;
    float y = 44.6;
    char c = 'a';
    
    x = datos_18(x, y, c);
    
    printf("\nAl final ...\n");
    
    printf("%d %f %c", x, y, c); // ¿Qué imprimirá?
    
    /*
     Imprime:
     Primero
     9 44.599998 a
     Al final
     8 44.599998 a
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}
int datos_18(int x, float y, char c)
{
    printf("%d %f %c", x, y, c);
    
    x = 8;
    y = 4.2;
    c = 'g';
    
    return x;
}

void VariosPunteros_19()
{
    int x = 9;
    float y = 44.6;
    char c = 'a';
    
    c = datos_19(&x, &y, &c);
    
    printf("\nAl final ...\n");
    
    printf("%d %f %c", x, y, c); // ¿Qué imprimirá?
    
    /*
     Imprime:
     Primero
     1606416076 0.000000 ff2B
     Al final
     8 4.200000 h
     */
    
    printf("\n\n");
    
    VariosPunteros_General();
}
char datos_19(int *x, float *y, char *c)
{
    printf("%d %f %s", x, y, c);
    
    *x = 8;
    *y = 4.2;
    *c = 'g';
    
    return 'h';
}
#pragma mark

