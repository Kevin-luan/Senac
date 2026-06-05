// Sketch2 simplificado: praia minimalista
let nadandoGif;
let onda = 0;
let velocidadeOnda = 0.04; // velocidade da animação das ondas

console.log('sketch_BA.js carregado');

function preload() {
  console.log('sketch2 preload start');
  // tentar múltiplos caminhos para o GIF
  nadandoGif = null;
  this._domGifPath = null;
  loadImage('../gif_animado_final.gif', 
    (img) => { nadandoGif = img; console.log('nadandoGif carregado ../gif_animado_final.gif'); },
    () => {
      console.warn('falha ../gif_animado_final.gif, tentando gif_animado_final.gif');
      loadImage('gif_animado_final.gif',
        (img) => { nadandoGif = img; console.log('nadandoGif carregado gif_animado_final.gif'); },
        () => {
          console.warn('falha gif_animado_final.gif, tentando ../nadando_muito.gif');
          loadImage('../nadando_muito.gif',
            (img) => { nadandoGif = img; console.log('nadandoGif carregado ../nadando_muito.gif'); },
            () => {
              console.warn('falha ../nadando_muito.gif, tentando nadando_muito.gif');
              loadImage('nadando_muito.gif',
                (img) => { nadandoGif = img; console.log('nadandoGif carregado nadando_muito.gif'); },
                () => {
                  console.error('não foi possível carregar nenhum GIF via loadImage; usarei fallback DOM');
                  // keep a path to try as DOM fallback
                  _domGifPath = '../gif_animado_final.gif';
                }
              );
            }
          );
        }
      );
    }
  );
}

function mouseClicked() {
  // detectar clique sobre o GIF nadando e voltar para index_SP.html
  let w = 160;
  let h = nadandoGif && nadandoGif.width ? (nadandoGif.height / nadandoGif.width) * w : 90;
  let x = 300 - w / 2;
  let y = 218.75 - h / 2;
  if (mouseX >= x && mouseX <= x + w && mouseY >= y && mouseY <= y + h) {
    window.location.href = 'index_SP.html';
  }
}

function setup() {
  console.log('sketch2 setup start');
  let canvas = createCanvas(600, 350).parent('canvas-container');
  if (canvas && select('#canvas-container')) {
    select('#canvas-container').style('display', 'flex');
    select('#canvas-container').style('justify-content', 'center');
    select('#canvas-container').style('align-items', 'center');
    select('#canvas-container').style('min-height', '360px');
  }
  // garantir id para inspeção no DOM
  if (canvas && canvas.elt) canvas.elt.id = 'sketch2-canvas';
  console.log('sketch2 canvas criado e anexado');

  // se o loadImage falhou em preload, criar um fallback DOM img (animado)
  // usar setTimeout para aguardar as tentativas de loadImage completarem
  setTimeout(() => {
    if (!nadandoGif && typeof _domGifPath !== 'undefined' && _domGifPath) {
      console.log('criando fallback DOM img', _domGifPath);
      const d = createImg(_domGifPath);
      d.parent('canvas-container');
      d.style('position', 'absolute');
      d.style('pointer-events', 'none');
      d.style('z-index', '2');
      // posicionar no centro do canvas
      d.size(160, 90);
      d.style('left', (300 - 80) + 'px');
      d.style('top', (218.75 - 45) + 'px');
      // guardar referência caso queira remover depois
      window._sketch2_domGif = d;
    }
  }, 500);
}

function draw() {
  // debug: indicar draw executando
  // comentário para não poluir muito o console: use condicional se necessário
  // console.log('sketch2 draw');
  // céu
  background('#87CEEB');

  // sol simples
  noStroke();
  fill('#FFD54A');
  ellipse(500, 80, 90, 90);

  // mar
  fill('#4AA3E0');
  rect(0, 175, 600, 87.5);

  // areia
  fill('#F1D29A');
  rect(0, 262.5, 600, 87.5);

  // ondas animadas (seno)
  stroke(255, 200);
  strokeWeight(2);
  noFill();
  let y = 192.5;
  let spacing = 30;
  let amp = 10; // amplitude do deslocamento
  for (let x = -spacing; x <= 630; x += spacing) {
    let dx = sin((x * 0.08) + onda) * amp;
    let dy = sin((x * 0.02) + onda) * 6;
    arc(x + spacing / 2 + dx, y + dy, 40, 12, PI, TWO_PI);
  }
  onda += velocidadeOnda;

  // desenhar GIF nadando na água (centralizado na faixa do mar)
  if (nadandoGif) {
    push();
    let agua = 218.75;
    let w = 160;
    let h = (nadandoGif.height / nadandoGif.width) * w;
    image(nadandoGif, 300 - w/2, agua - h/2, w, h);
    pop();
  }
}
