let quantidadeSubtotal = document.getElementById("quantidade-subtotal");
let valorSubtotal = document.getElementById("valor-subtotal");

let subtotalInfo = {
  quantidade: 1,
  valor: 11.66,
};

let buttonAdd = document.querySelector("#btn-adicionar-produto-01");
let buttonSub = document.querySelector("#btn-subtrair-produto-01")
let buttonRec = document.querySelector("#quantidade-produto-01")

function subtrairUm(){
  let qtdAtual = Number(buttonRec.value);
  if (qtdAtual > 0)
    {
      buttonRec.value = qtdAtual - 1; 
    }
}

function addUm(){
  buttonRec.value = Number(buttonRec.value) + 1;
}

buttonAdd.addEventListener("click", addUm);
buttonSub.addEventListener("click", subtrairUm);


quantidadeSubtotal.innerText = subtotalInfo.quantidade + " itens";
valorSubtotal.innerText = subtotalInfo.valor;