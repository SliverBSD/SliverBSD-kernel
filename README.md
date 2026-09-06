# SliverBSD-kernel
the source code for the SliverBSD kernel, based on FreeBSD kernel.
importantly, SliverBSD will NOT mainline FreeBSD 15.x and 16.x features into the kernel. (ufs and nfs are not supported at all.)
# how to compile
to compile wii-ppc run `make -f wii-ppc.mk`
# Info
there is NO userland or init so SliverBSD kernel ppc-wii will halt but work in progress for now
you cannot easily target SliverBSD because FreeBSD apps will not work on it at all and the ppc-kernel-version is in it’s early beta
and SliverBSD doesn’t support `ufs` or `nfs`
## utilities 
- `WinC++` is a implementation of a windows runtime which is not based on Wine at all
- `sys` main kernel directory 
- `drivers` containing drivers for specific architectures
- `libkern` and `kern` contain syscalls for development purposes
# to do,
- [x] add drivers for Wii
- [ ] Wii-ppc on real hardware(untested)
- [ ] add a package manager (this will take a long time and not planned for now)
- [ ] at some point add full `exe` support to WinC++
