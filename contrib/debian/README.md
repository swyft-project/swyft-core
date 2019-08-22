
Debian
====================
This directory contains files used to package swyftd/swyft-qt
for Debian-based Linux systems. If you compile swyftd/swyft-qt yourself, there are some useful files here.

## swyft: URI support ##


swyft-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install swyft-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your swyft-qt binary to `/usr/bin`
and the `../../share/pixmaps/swyft128.png` to `/usr/share/pixmaps`

swyft-qt.protocol (KDE)

