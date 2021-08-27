const legends = {
  'NO': '',
  'TRNS': '▽',

  'MO(1': 'FN1',
  'MO(2': 'Mouse\nmode',

  'GRV': '~\n`',
  '1': '!\n1',
  '2': '@\n2',
  '3': '#\n3',
  '4': '$\n4',
  '5': '%\n5',
  '6': '^\n6',
  '7': '&\n7',
  '8': '*\n8',
  '9': '(\n9',
  '0': ')\n0',

  'MINS': '_\n−',
  'EQL': '+\n=',
  'SLSH': '?\n/',
  'BSLS': '|\n\\',
  'LBRC': '{\n[',
  'RBRC': '}\n]',
  'SCLN': ':\n;',
  'QUOT': '"\n\'',
  'COMM': '<\n,',
  'DOT': '>\n.',

  'GT': '>',
  'LT': '<',
  'LPRN': '(',
  'RPRN': ')',
  'LCBR': '{',
  'RCBR': '}',
  'PLUS': '+',
  'PMNS': '−',
  'PAST': '*',
  'PSLS': '/',
  'PEQL': '=',
  'UNDS': '_',

  'ESC': 'Esc',
  'ENT': 'Enter',
  'SPC': 'Space',
  'BSPC': 'Back\nSpace',
  'TAB': 'Tab',
  'CAPS': 'Caps\nLock',

  'LCTRL': 'Ctrl',
  'RCTRL': 'Ctrl',
  'LALT': 'Alt',
  'RALT': 'Alt',
  'LSFT': 'Shift',
  'RSFT': 'Shift',
  'LGUI': 'OS',
  'RGUI': 'OS',
  'LCTL_T(ESC': 'Ctrl\nEsc',
  'RCTL_T(ESC': 'Ctrl\nEsc',
  'OSM(MOD_LCTL': 'OSM\nCtrl',
  'OSM(MOD_LALT': 'OSM\nAlt',
  'OSM(MOD_LGUI': 'OSM\nOS',
  'OSM(MOD_RGUI': 'OSM\nOS',

  'HOME': 'Home',
  'INS': 'Insert',
  'DEL': 'Delete',
  'END': 'End',
  'PGDN': 'PgDn',
  'PGUP': 'PgUp',
  'PAUS': 'Pause',
  'PSCR': 'PrScr',
  'SYSREQ': 'SysRq',
  'APP': 'Menu',

  'LEFT': 'Left',
  'DOWN': 'Down',
  'RGHT': 'Right',
  'UP': 'Up',

  'MUTE': 'Mute',
  'VOLD': 'Vol −',
  'VOLU': 'Vol +',

  'ACL0': 'Slow',
  'ACL1': 'Usual',
  'ACL2': 'Fast',
  'BTN1': 'Click',
  'BTN2': 'Mouse\n2',
  'BTN3': 'Mouse\n3',
  'BTN4': 'Mouse\n4',
  'BTN5': 'Mouse\n5',
  'MS_D': 'Mouse\nDown',
  'MS_L': 'Mouse\nLeft',
  'MS_R': 'Mouse\nRight',
  'MS_U': 'Mouse\nUp',
  'WH_D': 'Wheel\ndown',
  'WH_U': 'Wheel\nup',
}

const cleanKeys = keys => keys
  .map(key => key
    .replaceAll(')', '')
    .trim())
  .filter(Boolean)

const printLegends = keys => keys
  .map(key => key.replace('KC_', ''))
  .map(key => legends[key] ?? key)
  .map(key => [{a: key.includes('\n')
    ? 5 // 2 lines
    : 3 // 1 line
  }, key])

module.exports = {
  cleanKeys,
  printLegends
}
