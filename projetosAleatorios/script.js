const botaoNao = document.querySelector("#botaoNao"); 
const aleatorizarNum = (max) => {
    return Math.ceil(Math.random()*max); 
}
botaoNao.addEventListener("mouseover", () => {
    botaoNao.style.cssText = `
    top: ${aleatorizarNum(500)}px;
    left: ${aleatorizarNum(1000)}px;`

})
