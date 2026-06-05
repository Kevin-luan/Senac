let placa1;


function setup() {
    createCanvas(900, 600);
}
function preload() {
    placa1 = loadImage('img/imgParaCanva/placa1.png');

}



function draw() {
    background(220);
    background(20, 30, 80);

    fill(40, 150, 60);
    rect(0, 450, width, 150);


    // Casa
    fill(210, 180, 140);
    rect(250, 250, 300, 250);

    // Telhado
    fill(150, 50, 50);
    triangle(230, 250, 400, 120, 570, 250);

    // Porta
    fill(100, 60, 20);
    rect(370, 380, 60, 120);

    // Maçaneta
    fill(255, 255, 0);
    circle(420, 440, 10);

    // Janela esquerda
    fill(100, 200, 255);
    rect(290, 320, 70, 70);

    // Janela direita
    rect(440, 320, 70, 70);

    // Divisórias das janelas
    stroke(255);
    line(325, 320, 325, 390);
    line(290, 355, 360, 355);

    line(475, 320, 475, 390);
    line(440, 355, 510, 355);

    fill(40, 250, 250);

    rect(200, 450, 50, 70);

    stroke(255, 255, 255);
    line(225, 450, 225, 425);
    fill(0, 0, 0);
    circle(225, 420, 40);

    rect(225, 520, 20, 40);
    rect(205, 520, 20, 40);

    rect(255, 450, 20, 40);
    rect(175, 450, 20, 40);

    rect(255, 530, 30, 40);
    strokeWeight(5);
    line(265, 530, 265, 490);
    strokeWeight(1);

    circle(260, 575, 10);
    circle(280, 575, 10);

    text("Vamos conhecer alguns Estados do Brasil", 300, 100);


    image(placa1, 30, 400, 180, 100);
    fill(255);
    textSize(20);

    text("  Maranhao\n  340Km", 65, 430);

    if (mouseX > 30 && mouseX < 210 && mouseY > 400 && mouseY < 500) {

        text("Mouse em cima da placa!", 300, 100);
        setTimeout(() => {

            window.location.href = "maranhao.html";

        }, 5000);

    }





    //+++++============================================================++++


    image(placa1, 700, 400, 220, 100);
    fill(255);
    textSize(20);

    text("   Rio de janeiro\n    140Km", 730, 430);
  if (mouseX > 700 && mouseX < 920 && mouseY > 400 && mouseY < 500) {

    text("Mouse em cima da placa!", 300, 100);

      setTimeout(() => {

            window.location.href = "/joao/joao/index.html";

        }, 5000);

    }











}