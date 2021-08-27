/**
 * Convert the keymap.c file to the "Raw data" for
 * http://www.keyboard-layout-editor.com/
 */

const fs = require('fs')

const {buildRow} = require('./parts/rows')
const {cleanKeys, printLegends} = require('./parts/keys')

const keymapToKLERawData = fileContent =>
  fileContent
    .split('\n')
    .map(row => row.split(','))
    .filter(keys => keys.length > 1)
    .map(cleanKeys)
    .map(printLegends)
    .map(buildRow)
    .map(JSON.stringify)
    // .slice(0, 8)
    // .slice(8, 16)
    // .slice(16)
    .join(',\n')

const keymapFilePath = process.argv[2]
const fileContent = fs.readFileSync(keymapFilePath, 'utf8')
const rawData = keymapToKLERawData(fileContent)

console.log(rawData)

