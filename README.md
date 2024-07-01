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
