const HALVES_GAP = 5
const NUMBER_OF_ROWS = 8

const row = (keys, start, gapOffset) => [
  {x: start},
  ...keys.slice(0, keys.length / 2),
  {x: HALVES_GAP + gapOffset},
  ...keys.slice(keys.length / 2),
].flat()

const row12 = keys =>
  row(keys, 0, 0)

const row4 = (keys, rowIndex) => ({
  4: row(keys, 2, 4),
  5: row(keys, 4, 0),
  6: row(keys, 6, -4),
  7: row(keys, 6, -4),
}[rowIndex % NUMBER_OF_ROWS])

const buildRow = (keys, rowIndex) => ({
  12: row12(keys),
  4: row4(keys, rowIndex)
}[keys.length] || ['Oh no...'])

const layerRange = layerIndex =>
  layerIndex === -1
    ? []
    : Array(2)
      .fill(layerIndex)
      .map((x, i) => x + i)
      .map(x => x * NUMBER_OF_ROWS)

module.exports = {
  layerRange,
  buildRow
}
