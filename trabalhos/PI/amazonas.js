let arvore;
let horas = false;
let carro;
let x = 0;
let placa1;
let visitarFloresta = false;

let folha1, folha2, folha3, folha4, folha5;
let chuva = [];
let onca,cobra,macaco,arara;

function mouseClicked() {

    // botão dia/noite
    if (
        mouseX > 650 && mouseX < 750 &&
        mouseY > 50 && mouseY < 150
    ) {
        horas = !horas;
    }

    // entrar na floresta
    if (
        mouseX > 600 && mouseX < 800 &&
        mouseY > 500 && mouseY < 600
    ) {
        visitarFloresta = true;
    }

    // voltar
    if (
        mouseX > 100 && mouseX < 300 &&
        mouseY > 500 && mouseY < 600
    ) {
        visitarFloresta = false;
    }
}

function preload() {
    arvore = loadImage('img/imgParaCanva/arvore.png');
    carro = loadImage('GIF/carro.gif');
    placa1 = loadImage('img/imgParaCanva/placa1.png');
    onca = loadImage('img/imgParaCanva/onca.png')
     macaco = loadImage('img/imgParaCanva/macaco.png')
      arara = loadImage('img/imgParaCanva/arara.png')
       cobra = loadImage('img/imgParaCanva/cobra.png')

    folha1 = loadImage('img/imgParaCanva/folha1.png');
    folha2 = loadImage('img/imgParaCanva/folha2.png');
    folha3 = loadImage('img/imgParaCanva/folha3.png');
    folha4 = loadImage('img/imgParaCanva/folha4.png');
    folha5 = loadImage('img/imgParaCanva/folha5.png');
}

function setup() {
    createCanvas(800, 600);
    for(let i = 0 ; i < 100; i++)

  {

    chuva[i] = [];

    chuva[i][0] = random(width);

    chuva[i][1] = random(height);

    chuva[i][2] = random(1, 5);

 
  }
}

function draw() {

    // cenário floresta
    if (visitarFloresta) {

        // fundo
        if (horas) {
            background(40, 40, 70);
            fill(255);
            circle(700, 100, 100);
        } else {
            background(135, 206, 235);
            fill(255, 223, 0);
            circle(700, 100, 100);
        }

        // chão
        fill(24, 159, 22);
        rect(0, 200, 800, 400);

        // botão voltar
        image(placa1, 100, 500, 200, 100);
        fill(255);
        textSize(25);
        text("Voltar", 150, 550);

        image(onca, 170, 280, 90, 160);
        image(cobra, 470, 280, 90, 100);
        image(arara, 570, 380, 90, 70);
        image(macaco, 570, 480, 90, 160);

        // árvores da floresta
        image(arvore, 120, 380, 90, 160);
        image(arvore, 20, 420, 110, 300);
        image(arvore, 60, 250, 80, 240);
        image(arvore, 320, 130, 120, 340);
        image(arvore, 400, 490, 95, 280);
        image(arvore, 600, 430, 40, 80);

         for (let i = 0 ; i < 100; i++)

  {

    let vel = map(chuva[i][2], 1, 5, 1, 3);

    let esp = map(chuva[i][2], 1, 5, 0.5, 2.5);  

    let tam = map(chuva[i][2], 1, 5, 4, 12);

    strokeWeight(esp);

     image(folha1, chuva[i][0], chuva[i][1], tam * 5, tam * 5);
    //circle[i][0]

    chuva[i][1] += vel;

      if (chuva[i][1] > height){

        chuva[i][1] = random(-30, -5);

      }

  }
    
        

       

        return;
    }

    // cenário normal (estrada)

    if (horas) {
        background(40, 40, 70);
        fill(255);
        circle(700, 100, 100);
    } else {
        background(135, 206, 235);
        fill(255, 223, 0);
        circle(700, 100, 100);
    }

    // chão
    fill(24, 159, 22);
    rect(0, 200, 800, 400);

    // árvores animadas
    for (let i = 0; i < 10; i++) {
        let pos = (x + i * 120) % 800;
        image(arvore, pos, 180, 100, 100);
    }

    x += 3;

    // carro e placa
    image(carro, 600, 300, 100, 100);
    image(placa1, 600, 500, 200, 100);

    fill(255);
    textSize(22);
    text("Visitar \nFloresta", 650, 530);
}