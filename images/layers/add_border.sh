#!/bin/bash

# GIMP commands for the screenshot preparation:
# - Layer > Crop to Content [Alt + L, O, O, Enter]
# - Image > Fit Canvas to Layers [Alt + I, A]

filename="$1"
bordercolor="#424242"
bordersize=16

if [ ! -f "$filename" ]; then
  echo "Error: File not found: $filename"
  exit 1
fi

convert \
  "$filename" \
  -bordercolor "$bordercolor" \
  -border "${bordersize}x${bordersize}" \
  "$filename"
