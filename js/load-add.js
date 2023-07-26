var importObject = {
  env: {},
  wasi_snapshot_preview1: {},
  memoryBase: 0,
  tableBase: 0,
  memory: new WebAssembly.Memory({
    initial: 256,
    maximum: 512,
  }),
  table: new WebAssembly.Table({
    initial: 0,
    maximum: 0,
    element: 'anyfunc',
  }),
};

WebAssembly.instantiateStreaming(
  fetch('../js/add.wasm', {credentials: 'same-origin'}),
  importObject
).then((obj) => obj.instance.exports.add());
