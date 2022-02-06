# -*- coding: utf-8 -*-
from re import I
from node import Node


class LinkedList:
    def __init__(self):
        self.head = None # a cabeça
        self._size = 0
        
    def append_(self, elem):
        if self.head:
            #ponteiro
            pointer =  self.head
            while(pointer.next):
                pointer = pointer.next
            pointer.next = Node(elem) 
        else:
            #primeira inserção
            self.head = Node(elem)
        self._size = self._size + 1
        
    def __len__(self):
        return self._size
    
    def get (self):
        pass    
    
    def set(self, index, elem):
        pass
            
    def __getitem__(self, index): # sobre carga de operador
        pointer = self.head
        for i in range(index):
            if pointer:
                pointer = pointer.next
            else:
                raise IndexError("List index out of range")
        if pointer:
            return pointer.data
        raise IndexError("List index out of range")
            
    def __setitem__(self, index, elem):
        pointer = self.head
        for i in range(index):
            if pointer:
                pointer = pointer.next
            else:
                raise IndexError("List index out of range")
        if pointer:
            pointer.data = elem
        raise IndexError("List index out of range")
    
    
    def index(self, elem):
        """Retorna o indice do elemento na lista"""
        pointer = self.head
        i = 0
        while(pointer):
            if pointer.data == elem:
                return i
            pointer = pointer.next
            i +=1
            
        raise ValueError('{} is not in list'.format(elem))
        
    
    
    
lista_linke = LinkedList()

lista_linke.append_(7)
lista_linke.append_(25)
lista_linke.append_(10)

print(len(lista_linke))

print(lista_linke[0])

print(lista_linke.index(25))