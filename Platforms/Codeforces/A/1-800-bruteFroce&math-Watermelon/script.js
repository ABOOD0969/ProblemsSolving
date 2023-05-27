//============================================================================
// Path         : 1    -   Codeforce   -   800 -   WaterMelon -   Math & BruteFroce  -   4/A
// TIME         : Saturday  27 / May / 2023   
// problem link : https://codeforces.com/problemset/problem/4/A
// Name         : WaterMelon
// Author       : Abdullah Al-Habal
//============================================================================

const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', (weight) => {
    main(weight)
  rl.close();
});

function main (weight){
  if(weight % 2 === 0 && weight > 2) 
    console.log("YES");
  else
    console.log("NO");
}