let arvore;
let horas = false;
let carro;
let x = 0;
let placa1;
let visitarFloresta = false;

let folha1, folha2, folha3, folha4, folha5;
let folhas = [];

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

    folha1 = loadImage('img/imgParaCanva/folha1.png');
    folha2 = loadImage('img/imgParaCanva/folha2.png');
    folha3 = loadImage('img/imgParaCanva/folha3.png');
    folha4 = loadImage('img/imgParaCanva/folha4.png');
    folha5 = loadImage('img/imgParaCanva/folha5.png');
}

function setup() {
    createCanvas(800, 600);
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

        // árvores da floresta
        image(arvore, 120, 380, 90, 160);
        image(arvore, 20, 420, 110, 300);
        image(arvore, 60, 250, 80, 240);
        image(arvore, 320, 130, 120, 340);
        image(arvore, 400, 490, 95, 280);
        image(arvore, 600, 430, 40, 80);

        // criação de folhas
        if (frameCount % 5 === 0) {
            folhas.push({
                x: random(0, 800),
                y: 200,
                tipo: floor(random(1, 6))
            });
        }

        // movimento das folhas
        for (let i = 0; i < folhas.length; i++) {
            let f = folhas[i];
            f.y += 1;

            if (f.tipo == 1) image(folha1, f.x, f.y, 80, 80);
            if (f.tipo == 2) image(folha2, f.x, f.y, 80, 80);
            if (f.tipo == 3) image(folha3, f.x, f.y, 80, 80);
            if (f.tipo == 4) image(folha4, f.x, f.y, 80, 80);
            if (f.tipo == 5) image(folha5, f.x, f.y, 80, 80);
        }

        // limite de folhas
        if (folhas.length > 200) {
            folhas.shift();
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