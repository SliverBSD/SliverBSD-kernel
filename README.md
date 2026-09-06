# SliverBSD-kernel
the source code for the SliverBSD kernel, based on FreeBSD kernel.
importantly, SliverBSD will NOT mainline FreeBSD 15.x and 16.x features into the kernel. (ufs and nfs are not supported at all.)
# how to compile
to compile wii-ppc run `make -f wii-ppc.mk`
# Info
there is NO userland or init so SliverBSD kernel ppc-wii will halt but work in progress for now
you cannot easily target SliverBSD because FreeBSD apps will not work on it at all and the ppc-kernel is in it’s early beta 
