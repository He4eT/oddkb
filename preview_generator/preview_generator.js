/**
 * Convert the keymap.c file to the "Raw data" for
 * http://www.keyboard-layout-editor.com/
 */

const fs = require('fs')

const {buildRow} = require('./rows')
const {cleanKeys, printLegends} = require('./legends')

const keymapFilePath = process.argv[2]
const fileContent = fs.readFileSync(keymapFilePath, 'utf8')

const keymapToKLERawData = fileContent =>
  fileContent
    .split('\n')
    .map(row => row.split(','))
    .filter(key => key.length > 1)
    .map(cleanKeys)
    .map(printLegends)
    .map(buildRow)
    .map(JSON.stringify)

const result = keymapToKLERawData(fileContent)
// .slice(0, 8)
// .slice(8, 16)
// .slice(16)

console.log(result.join(',\n'))

