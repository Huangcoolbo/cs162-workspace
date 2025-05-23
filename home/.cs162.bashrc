PATH=$PATH:$HOME/.bin:$HOME/.cargo/bin

black="\[\033[0m\]"
red="\[\033[0;31m\]"
green="\[\033[0;32m\]"
yellow="\[\033[0;33m\]"
blue="\[\033[0;34m\]"
purple="\[\033[0;35m\]"

PS1="$blue\u@\h$black [$green\t$black] $red\W$black \$ "

if [ -f "/workspace/.version" ]; then
	# File exists
	if cmp -s "/home/workspace/.version" "/workspace/.version"; then
    :
	else
		echo "Update detected!"
    update-workspace
  fi
fi

alias pintos-debug='FORCE_SIMULATOR=--bochs PINTOS_DEBUG=1 pintos-test'
if locale -a | grep -q 'C.utf8'; then
     export LANG=C.utf8
fi
