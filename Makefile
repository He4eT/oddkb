# Flashing the keyboard:
# make flash

qmk_dir = qmk_firmware

keyboard = handwired/dactyl_manuform/5x6
keymap = oddkb
target = avrdude

keymap_path = ${qmk_dir}/keyboards/${keyboard}/keymaps/${keymap}/
build_cmd = sudo util/docker_build.sh ${keyboard}:${keymap}:${target}

keymap_clean:
	rm -rf ${keymap_path}

keymap_copy: keymap_clean
	mkdir ${keymap_path}
	cp keymap/* ${keymap_path}

qmk_flash:
	cd ${qmk_dir} && ${build_cmd}

flash:
	@make keymap_copy
	@make qmk_flash
	@make keymap_clean

# Creating layer previews:
# make preview[_copy] [layer=number]

layer = -1
preview_cmd = node \
	./preview_generator/preview_generator.js \
	"${PWD}/keymap/keymap.c" \
	"$(layer)"

preview:
	@${preview_cmd}

preview_copy:
	@${preview_cmd} | xclip -sel clipboard
	@echo 'The layout has been copied to the clipboard!'
	@echo 'Paste it into the "Raw Data" tab here:'
	@echo 'http://www.keyboard-layout-editor.com/'
