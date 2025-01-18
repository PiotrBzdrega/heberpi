savedcmd_/usr/src/x10/driver/xline.mod := printf '%s\n'   xline_driver.o | awk '!x[$$0]++ { print("/usr/src/x10/driver/"$$0) }' > /usr/src/x10/driver/xline.mod
