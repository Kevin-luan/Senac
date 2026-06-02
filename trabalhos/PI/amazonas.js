
let arvore;
let horas = false;
let carro;
let x = 0;


function mouseClicked() {

    if (
        mouseX > 650 && mouseX < 750 &&
        mouseY > 50 && mouseY < 150
    ) {

        horas = !horas;

    }

}
console.log(horas);

function preload() {


    arvore = loadImage('img/imgParaCanva/arvore.png');
    carro = loadImage('GIF/carro.gif');
}

function setup() {
    createCanvas(800, 600);

}

function draw() {




    if (horas == true) {
        background(40, 40, 70);
        // lua
        fill(255, 255, 255, 200);

        circle(700, 100, 100);

    } else {

        background(135, 206, 235);

        // sol
        fill(255, 223, 0);

        circle(700, 100, 100);

    }






    fill(24, 159, 22);

    rect(0, 200, 800, 400);

  for (let i = 0; i < 10; i++) {

    let pos = (x + i * 120) % 800;

    image(arvore, pos, 180, 100, 100);

}

// movimento
x += 3;







    image(carro, 600, 300, 100, 100);

}