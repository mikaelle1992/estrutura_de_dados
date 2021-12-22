# -*- coding: utf-8 -*-
from numpy import empty


class VetorNaoOrdenado:
    def __init__(self, capacidade):
        self.capacidade = capacidade
        self.ultima_posicao = -1
        self.valores = empty(self.capacidade, dtype=int)

    def imprime(self):
        if self.ultima_posicao == -1:
            print("o vetor esta vazio")
        else:
            for i in range(self.ultima_posicao + 1):
                print(i, " - ", self.valores[i])

    def insere(self, valor):
        if self.ultima_posicao == self.capacidade - 1:
            print("Capacidade máxima")
        else:
            self.ultima_posicao += 1
            self.valores[self.ultima_posicao] = valor

    def pesquisar(self, valor):
        for i in range(self.ultima_posicao + 1):
            if valor == self.valores[i]:
                return i
        return -1
    
    def excluir(self, valor):
        posicao = self.pesquisar(valor)
        if posicao == -1:
            return -1
        else:
            for i in (posicao, self.ultima_posicao):
                self.valores[i] = self.valores[i + 1]
            self.ultima_posicao -=1
vetor = VetorNaoOrdenado(5)

# vetor.imprime()
vetor.insere(2)
vetor.insere(6)
vetor.insere(1)

print(vetor.pesquisar(1))
vetor.excluir(6)
# vetor.insere(9)
vetor.imprime()

# vetor.excluir(7)

