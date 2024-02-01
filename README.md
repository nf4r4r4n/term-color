# Term-color 💻
This is a simple unix-like cli command that make easy printing colored text on terminal instead of using shell script.

# Requirements 🔧 🧰
- GNU Compiler Collection(gcc) or another C compiler.
- **make** command
- linux or unis-like operating system

# Installation 🚚 ⚒️  🚀
- First, if you choosed another C compiler other to GCC, replace the gcc command on **Makefile**
- Then create **bin** folder
```sh
mkdir -v bin
```
- Compile all the project
```sh
make fclean
make build
```
- After compilation, you can directly use the command or copy that to the user binaries and it will be available wherever in your terminal
```sh
# Think to change the "/path/to/compiled/command"
# E.g: sudo ln -s /home/username/.../term-color/bin/term-color /usr/bin/term-color
sudo ln -s /path/to/compiled/command /usr/bin/term-command
```

Enjoy...
