const fs = require('fs')

const pizzas = fs.readFileSync('./src/storage/pizza.json');

var obj = JSON.parse(pizzas);
console.log(obj[0].id_pizza);
/*
obj = JSON.stringify(pizzas);
console.log(obj);
//pizzas.forEach(pizza => console.log(pizza.nom_pizza));


fs.writeFileSync('../storage/pizza.json', pizzas);*/