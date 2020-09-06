# dmenu - dynamic menu
dmenu is an efficient dynamic menu for X.

> This fork is a maintained version of dmenu intended for use in my
> [dotfiles](https://github.com/bossley9/dotfiles). You can view the source
> hosted by suckless [on their own git server](https://git.suckless.org/dmenu).

## Please Read

**This build of dmenu will no longer be maintained. After using dmenu for nearly a year, I 
have found it to be slightly less optimal and efficient compared to other fuzzy file finding
programs (namely, `fzf` and `ripgrep`). As such, I have transitioned away from dmenu to use 
these alternative fuzzy finders in my dotfiles. This build will remain publicly available.**

## Table of Contents
1. [Installation](#installation)
2. [Running](#running)
3. [Configuration](#configuration)
4. [Patches](#patches)

## Installation <a name="installation"></a>
In order to build dmenu you need the Xlib header files.

This fork also makes use of the `envsubst` package to insert system environment variables
into the configuation. The template file named is `template.config.h` for visibility. If you 
are unable to use the `envsubst` package with your operating system or do not intend on 
using this build with my dotfiles, I have also included a compiled version of the 
configuration as `config.h`.

Building with `envsubst`:

    envsubst < template.config.h > config.h
    sudo make clean install

Building without `envsubst`:

    sudo make clean install

## Running <a name="running"></a>
See the man page for details.

## Configuration <a name="configuration"></a>
If you are compiling using `envsubst`, additional configuration of this build is done 
by modifying the `template.config.h` file and (re)compiling the source code.

If you are not using `envsubst`, configuration is done by modifying the `config.h` file.

For more information on configuration, Suckless tools, and how this utility works, 
read [the readme](https://git.suckless.org/dmenu/file/README.html).

## Patches <a name="patches"></a>
To apply patches to any suckless tool, download patches from the suckless website (or make 
your own) and run the following command, making sure to specify the file being changed as 
`template.config.h` instead of the standard `config.def.h`.
```
patch --merge -i patchName.diff
```

In addition to my own personal tweaks and settings, below is a list of popular patches 
I have included in my build.

- [fuzzymatch 4.6](https://tools.suckless.org/dmenu/patches/fuzzymatch)
- [fuzzyhighlight 4.9](https://tools.suckless.org/dmenu/patches/fuzzyhighlight)
- [line height 4.9](https://tools.suckless.org/dmenu/patches/line-height)
- [border 4.9](https://tools.suckless.org/dmenu/patches/border)
- [xyw 4.6](https://tools.suckless.org/dmenu/patches/xyw)
