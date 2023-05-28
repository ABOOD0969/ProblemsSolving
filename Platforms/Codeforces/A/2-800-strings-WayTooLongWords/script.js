//============================================================================
// Path         : 2    -   Codeforce   -   800 - Way Too Long Words  -  strings   -   71/A
// TIME         : Sunday  28 / May / 2023   
// problem link : https://codeforces.com/problemset/problem/71/A
// Name         : Way Too Long Words
// Author       : Abdullah Al-Habal
//============================================================================

const readline = require('readline')

const rl = readline.createInterface({
    input : process.stdin ,
    output : process.stdout
});

rl.question("" , (n) => {
    for ( let i = 0 ;  n > i ; i++ ){
        rl.question("" , (word) => {
            len = word.length ; 
            if(len > 10 ){
                word = word[0] + ( len -2 ) + word[len-1];
            }
            console.log(word)

        
            if( i  < n-1 )
                rl.prompt()
            else 
                rl.close();

        });
    }

});