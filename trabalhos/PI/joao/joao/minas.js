let carro;
let x = 800;

function preload() {
  carro = loadImage("carro.png");
}

function setup() {
  createCanvas(800, 500);
}

function draw() {
  background(135, 206, 235);

  fill(255, 220, 0);
  noStroke();
  circle(700, 80, 60);


  fill(0, 100, 200);
  rect(0, 180, width, 30);


  fill(230, 210, 170);
  rect(0, 210, width, 80);


  fill(120);
  rect(0, 290, width, 120);


  stroke(255);
  strokeWeight(3);

  for (let i = 0; i < width; i += 80) {
    line(i + 10, 350, i + 50, 350);
  }


  image(carro, x, 300, 90, 60);


  x -= 3;

if (x < -100) {
  x = width;
}
}

function mousePressed() {

  let distancia = dist(mouseX, mouseY, 700, 80);

  if (distancia < 30) {
    window.location.href = "index.html";
  }
}
