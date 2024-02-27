const fs = require('fs');

const faturamentoData = require('./faturamento.json');

const faturamentoDiario = faturamentoData.map(item => item.valor);

const menorFaturamento = Math.min(...faturamentoDiario.filter(valor => valor !== 0));

const maiorFaturamento = Math.max(...faturamentoDiario);

const calcularMedia = faturamentoDiario.reduce((acc, valor) => acc + valor, 0) / faturamentoDiario.length;

const diasAcimaMedia = faturamentoDiario.filter(valor => valor > calcularMedia).length;

// Exibindo os resultados
console.log(`Menor valor de faturamento: ${menorFaturamento.toFixed(2)}`);
console.log(`Maior valor de faturamento: ${maiorFaturamento.toFixed(2)}`);
console.log(`Dias com faturamento acima da média: ${diasAcimaMedia}`);
