const localImg = document.querySelector(".localImg")
const botaoAtualizar = document.querySelector("#botaoAtualizar")

// assincrona
const paginaCarregou = async () => {
    try {
        const resposta = await fetch('https://api.thecatapi.com/v1/images/search')
        console.log(resposta)
        if (!resposta.ok) {
            throw Error("Não foi possivel buscar novos gatos")
        }
        
        const gatosApi = await resposta.json() 
        const idImagem = gatosApi.map(({url}) =>  {
            const urlArray = url.split("/")
            localImg.innerHTML = "<img src=" + url + ">"
        })
    } catch (error) {
        console.log("deu errado", error)
    }
    
}
paginaCarregou();
// metadados: 