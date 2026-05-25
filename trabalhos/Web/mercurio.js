let ang=0;
function setup() {
  createCanvas(300, 300);
 
}

function draw() {
   background(10);
   let x =100 * cos(ang)+200;
  let y =100 * sin(ang)+200;
  fill(255,255,0)
 circle(200, 200, 100);
  
  fill(255, 120, 80)
  circle(x, y, 50);
    ang +=0.009;
}