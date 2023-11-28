VIA_ENABLE = yes
VIAL_ENABLE = yes

LTO_ENABLE = yes

# 2952 bytes
QMK_SETTINGS = no          # Vial tab
# 2144 bytes
MOUSEKEY_ENABLE = yes      # Mouse keys
# 544 bytes
EXTRAKEY_ENABLE = yes      # Audio control and System control

# each of the following features take extra space
# in three steps
# - the QMK feature (enables here)
# - the Vial feature (enabled if VIAL_XXX_ENTRIES > 0)
# - each vial entry for the feature

# qmk feature : 504 bytes
# vial feature : there is no special setting
DYNAMIC_MACRO_ENABLE = no

# qmk feature : doesn't compile with
#               VIAL_KEY_OVERRIDE_ENTRIES = 0 
# with 1 vial entry   : 1696 bytes
# with 2 vial entries : 1814 (+118)
# with 3 vial entries : 1830 (+16)
# with 8 vial entries : 1820 (-10) SIC
KEY_OVERRIDE_ENABLE = no

# 1676 bytes + 50 bytes each entry
# qmk feature         : 696
# with 1 vial entry   : 1676 (+980)
# with 2 vial entries : 1720 (+44)
# with 8 vial entries : 1714 (-6)
TAP_DANCE_ENABLE = yes

# 900 bytes + 
# qmk feature         : 924
# with 1 vial entry   : 1964 (+940)
# with 2 vial entries : 2082 (+118)
# with 8 vial entries : 2046 (-36)
COMBO_ENABLE = yes
