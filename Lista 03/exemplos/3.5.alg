algoritmo "questao 3.5"
// Fun��o :
// Autor :
// Data : 10/5/2013
// Se��o de Declara��es 
var
   ano: inteiro
   popA, popB, cresA, cresB: real
inicio
// Se��o de Comandos
   ano<-0
   
   escreva("Digite a popula��o do pa�s A: ")
   leia(popA)
   
   escreva("Digite a taxa anual de crescimento do pa�s A: ")
   leia(cresA)

   escreva("Digite a popula��o do pa�s B: ")
   leia(popB)
   
   escreva("Digite a taxa anual de crescimento do pa�s B: ")
   leia(cresB)

   enquanto popA < popB faca
      ano<-ano + 1
      popA<-popA +(popA*cresA)
      popB<-popB +(popB*cresB)
   fimenquanto
   escreva("Ap�s ", ano, " anos a popula��o do pa�s A ultrapassar� a popula��o do pa�s B")
fimalgoritmo
