# A filesystem creator for some projetcs
I created this project as a simple C script but i decided to make it a little easier to understand. You know better code and stuff.

# **PRE-REQUISITES**
* A UNIX like file system.
  * Linux its preferd
*  GNU MAKE installed
*  GCC installed
## On Fedora (my main distro)
``` Sudo dnf install make gcc ```
## On Debian based distros
``` Sudo apt install make gcc```
### On Arch
``` Sudo pacman -s make gcc``` but it should already be installed by default.
# How to use it.

``` ./fsc type```

At the type there are 4 types (each types works different).

* C or C++ (Makes the makefile, Include and source directories).
* Python (makes a virtual envirement for your project beacouse its easier to manage the packages)
* Vanilla web (static)
* Node JS (express JS)

# How to use it out of the proyect directory
Easy pal first some chmod
``` chmod +x fsc ```

then move it to /local/usr/bin
``` mv fsc /local/usr/bin ```

and PUM it works out of the blue.

# IF you have any error open an issue, im out of school at the moment wich mostly ensures a fast answer.
