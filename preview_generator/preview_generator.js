/**
 * Convert the keymap.c file to the "Raw data" for
 * http://www.keyboard-layout-editor.com/
 */

const fs = require('fs')

const {buildRow, layerRange} = require('./parts/rows')
const {cleanKeys, printLegends} = require('./parts/keys')

const keymapToKLERawData = (fileContent, layerIndex) =>
  fileContent
    .split('\n')
    .map(row => row.split(','))
    .filter(keys => keys.length > 1)
    .slice(...layerRange(layerIndex))
    .map(cleanKeys)
    .map(printLegends)
    .map(buildRow)
    .map(JSON.stringify)
    .join(',\n')

/* */

const keymapFilePath = process.argv[2]
const layerIndex = Number(process.argv[3])

const fileContent = fs.readFileSync(keymapFilePath, 'utf8')
const rawData = keymapToKLERawData(fileContent, layerIndex)

console.log(rawData)

