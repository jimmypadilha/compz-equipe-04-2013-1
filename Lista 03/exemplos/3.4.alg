algoritmo "questao 3.4"
// Fun��o :
// Autor :
// Data : 10/5/2013
// Se��o de Declara��es 
var
   ano: inteiro
   popA, popB, cresA, cresB: real
inicio
// Se��o de Comandos
   popA<-80000
   popB<-200000
   ano<-0
   cresA<-0.03
   cresB<-0.015

   enquanto popA < popB faca
        ano<-ano + 1
        popA<-popA +(popA*cresA)
        popB<-popB +(popB*cresB)
   fimenquanto
   escreva("Ap�s ", ano, " anos a popula��o do pa�s A ultrapassar� a popula��o do pa�s B")
fimalgoritmo
