let chuva = [];
let predio1 = 50;
let predio2 = 250;
let predio3 = 4800;
let faixa = 0;
let velocidadeCenario = 2;

let carroGif;
let carroX = 300;
let carroY = 330;
let carroW = 240;
let carroH = 100;

function preload() {
  // carregar o GIF do carro (mesma pasta do HTML/JS)
  carroGif = loadImage('Carro.gif');
}

console.log('sketch_SP.js carregado');

function setup() {
  console.log('setup iniciado');
  createCanvas(600, 400).parent('canvas-container');
  console.log('canvas criado e anexado ao container');
  stroke(0, 0, 0);
  for (let i = 0; i < 200; i++) {
    chuva[i] = [];
    chuva[i][0] = random(width);
    chuva[i][1] = random(height);
    chuva[i][2] = random(1, 5);
  }
}

function draw() {
  background(100, 120);

  predio1 -= velocidadeCenario;
  predio2 -= velocidadeCenario;
  predio3 -= velocidadeCenario;

  if (predio1 < -100) predio1 = 600;
  if (predio2 < -150) predio2 = 600;
  if (predio3 < -120) predio3 = 600;

  desenharPredio(predio1, 80, 100, 220, color(40));
  desenharPredio(predio2, 40, 150, 260, color(55));
  desenharPredio(predio3, 110, 120, 190, color(30));

  fill(50);
  noStroke();
  rect(0, 300, 600, 100);

  stroke(255, 200, 0);
  strokeWeight(3);
  line(0, 300, 600, 300);

  stroke(255);
  strokeWeight(4);

  faixa -= velocidadeCenario * 1.5; 
  if (faixa < -40) {
    faixa = 0;
  }

  for (let x = faixa; x < 620; x += 40) {
    line(x, 350, x + 20, 350);
  }

  for (let i = 0; i < 200; i++) {
    let vel = map(chuva[i][2], 1, 5, 1, 3);
    let esp = map(chuva[i][2], 1, 5, 0.5, 2.5);
    let tam = map(chuva[i][2], 1, 5, 4, 12);

    strokeWeight(esp);
    line(chuva[i][0], chuva[i][1], chuva[i][0], chuva[i][1] + tam);
    chuva[i][1] += vel;

    if (chuva[i][1] > height) {
      chuva[i][1] = random(-30, -5);
    }
  }

  // desenhar GIF do carro (sem interação)
  if (carroGif) {
    image(carroGif, carroX - carroW / 2, carroY - carroH / 2, carroW, carroH);
  }
}

function desenharPredio(x, y, largura, altura, cor) {
  fill(cor);
  noStroke();
  rect(x, y, largura, altura);

  fill(255, 220, 80);
  for (let jX = x + 15; jX < x + largura - 10; jX += 25) {
    for (let jY = y + 15; jY < y + altura - 20; jY += 35) {
      rect(jX, jY, 10, 15);
    }
  }
}

function mouseClicked() {
  // detectar clique no GIF do carro e navegar para pagina_BA.html
  if (typeof carroX !== 'undefined') {
    if (mouseX > carroX - carroW / 2 && mouseX < carroX + carroW / 2 &&
        mouseY > carroY - carroH / 2 && mouseY < carroY + carroH / 2) {
      window.location.href = 'pagina_BA.html';
    }
  }
}
