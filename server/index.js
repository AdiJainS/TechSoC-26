const http = require("http");
const fs = require("fs");
const url = require("url");
const myServer = http.createServer((req,res) =>{ // client side data - req
// res- response
//  console.log("New Req Rec.");
const log = `${Date.now()}: ${req.url} New req Received \n`;
const myUrl = url.parse(req.url);
console.log(myUrl)
fs.appendFile('log.txt',log,(err,data) =>{
    switch(req.url){
        case "/": res.end("Homepage");
        break
        case  "/about":
            // res.end("Hi i am adi");
            const username = myUrl.query.myname;
            res.end(`Hi, ${username}`);
            break;
        
        case "/search":
            const search = myUrl.query.search_query;
            res.end("Here are" + search)
            res.end
        break
    }
 res.end("Hello from server .");
})

console.log(req.headers);
});
myServer.listen(8000,()=> console.log("Server started")); //8000 - port pe start



