const http = require('http');
const fs = require("fs");

const hostname = '0.0.0.0';
const port = 3000;

const server = http.createServer((req, res) => {
  const text = fs.readFileSync("./output.txt");
  res.statusCode = 200;
  res.setHeader('content-type', 'application/json');
  res.end(JSON.stringify({result: Number(text)}));
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});


