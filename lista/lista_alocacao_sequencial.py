# -*- coding: utf-8 -*-

def busca(lista, elem):
    for i in range(len(lista)):
        if lista[i] == elem:
            return i     
    return None

lista_estado =[8, 7,"44",12, "python"]
elemento = "python"

indice = busca(lista_estado, elemento)

if indice is not None:
    print('O ìndice do elemento {} é {}'.format(elemento, indice))
else:
    print('O elemento {} não foi encontrado'.format(elemento))
    