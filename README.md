# test
first repo


> block quote

`code block`


Just editing because I need a pull request, thanks!

Does WaveDrom work in GitHub markdown?

```wavedrom
{ signal: [
  { name: '',   wave: ['pw', {d: 'm,0,-1   h1500'}]},
  { name: 'AC Power',   wave: ['pw', {d: 'm,0,0.5   q,3,3,6,0 t' + ',6,0'.repeat(5)}]},
  { name: '',   wave: ['pw', {d: 'm,-100,0   h1'}]},
  { name: 'Zero Cross', wave: 'hl....hl....hl....hl....hl....hl...', },
  { name: 'Rising', wave: 'hl..........hl..........hl.........', },
  { name: 'Falling', wave: 'l.....hl..........hl..........hl...', },
],
}
```

References for WaveDrom:
"Hitchhiker's Guide" (Main tutorial): https://wavedrom.com/tutorial.html
Piecewise waves (For the AC component): https://observablehq.com/@drom/piecewise

I wonder if svg directly renders, or if it has to be in a separate document...
```svg
<svg version="1.1"
     width="300" height="200"
     xmlns="http://www.w3.org/2000/svg">

  <rect width="100%" height="100%" fill="red" />

  <circle cx="150" cy="100" r="80" fill="green" />

  <text x="150" y="125" font-size="60" text-anchor="middle" fill="white">SVG</text>

</svg>
```
