x = -70;
let nave;
let cristo;

function preload() {
  nave = loadImage("asadelta-png.webp");
}

function setup() {
  createCanvas(800, 500);
}

function draw() {


  background(135, 206, 235);


  fill(255, 220, 0);
  noStroke();


  fill(0, 120, 255);
  rect(0, 300, width, 200);


  fill(80);
  triangle(0, 300, 150, 120, 300, 300);
  triangle(200, 300, 400, 150, 600, 300);


  let y = 40 * sin(x / 13) + 80;
  fill(255, 255, 0);
  circle(300, 100, 80);
  image(nave, x, y, 70, 70);
  x += 1;
  if (x > width) {
    x = -70;
  }
}
function mousePressed() {

  let distancia = dist(mouseX, mouseY, 300, 100);

  if (distancia < 40) {
    window.location.href = "minasgerais.html";
  }

  if (mouseY > 310) {

    text("Mouse em cima da placa!", 400, 100);

window.location.href = "/Trabalho_PI_parteKauan/Trabalho%20PI/Trabalho%20PI/index_SP.html";


  }

}