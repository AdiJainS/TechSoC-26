const fs = require("fs");

// // sync ..
// fs.writeFileSync('./test.txt', 'Hey there');
// // async ..
// fs.writeFile("./test.txt" , "hello " , (err) => {});
// const result = fs.readFileSync('./test.txt' , "utf-8");
// .readFile will give error 
// console.log(result);
// fs.readFile("./test.txt" , "utf-8" , (err,result ) =>{
//     if(err) {
//         console.log("Error " , err);
//     }else {
//         console.log(result);
//     }

// });
fs.appendFileSync("./test.txt",  `${Date.now()} Hey there\n`)