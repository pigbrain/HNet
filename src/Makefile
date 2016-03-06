TARGET = libHNet.so
OBJS = HSocket.o HTCPSocket.o HConnector.o HNetLog.o HServer.o HTCPServer.o HEpoll.o HIOMgr.o HTCPIOMgr.o HTCPServerMgr.o HAtomicCounter.o HLink.o HLinkMap.o HClient.o HTCPClient.o  HTCPClientMgr.o HCommand.o HCommandStream.o HCommandRouter.o HCommandManager.o  HCommandDesc.o HCommandParameter.o HCommandCommunicator.o HMutex.o CommandTable_HNET.o
SRCS = $(OBJS:o=cpp)
INCS = -I../inc
LIBS = -lpthread 
CC = -g -c -fPIC 

$(TARGET): $(OBJS) 
	g++  -shared -o $@ $^ $(LIBS)

.cpp.o :	
	g++ $(CC) $< $(INCS)		

clean : 
	rm -f *.o
dep :	 
	gccmakedep $(SRCS) $(INCS)
# DO NOT DELETE
HSocket.o: HSocket.cpp ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h
HTCPSocket.o: HTCPSocket.cpp ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HTCPSocket.h
HConnector.o: HConnector.cpp ../inc/HConnector.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h
HNetLog.o: HNetLog.cpp ../inc/HNetLog.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HMutex.h
HServer.o: HServer.cpp ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HServer.h
HTCPServer.o: HTCPServer.cpp ../inc/HServer.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HTCPServer.h ../inc/HSocket.h ../inc/HConnector.h \
  ../inc/HTCPSocket.h ../inc/HNetLog.h
HEpoll.o: HEpoll.cpp ../inc/HEpoll.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h
HIOMgr.o: HIOMgr.cpp ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HTCPSocket.h ../inc/HServer.h ../inc/HEpoll.h ../inc/HLink.h \
  ../inc/HAtomicCounter.h ../inc/HLinkMap.h ../inc/HConnector.h \
  ../inc/HIOMgr.h
HTCPIOMgr.o: HTCPIOMgr.cpp ../inc/HPacket.h ../inc/HSocket.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HTCPSocket.h ../inc/HServer.h ../inc/HEpoll.h \
  ../inc/HCommandCommunicator.h ../inc/HLink.h ../inc/HAtomicCounter.h \
  ../inc/HLinkMap.h ../inc/HConnector.h ../inc/HIOMgr.h \
  ../inc/HTCPIOMgr.h ../inc/HCommand.h ../inc/HLink.h \
  ../inc/HCommandParameter.h ../inc/HCommandStream.h ../inc/HPacket.h \
  ../inc/HCommandRouter.h ../inc/CommandTable_HNET.h ../inc/HNetLog.h
HTCPServerMgr.o: HTCPServerMgr.cpp ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HLink.h ../inc/HAtomicCounter.h ../inc/HLinkMap.h \
  ../inc/HServer.h ../inc/HTCPSocket.h ../inc/HTCPServer.h \
  ../inc/HIOMgr.h ../inc/HTCPIOMgr.h ../inc/HEpoll.h ../inc/HServerMgr.h \
  ../inc/HCommandCommunicator.h ../inc/HTCPServerMgr.h \
  ../inc/HConnector.h ../inc/CommandTable_HNET.h ../inc/HNetLog.h
HAtomicCounter.o: HAtomicCounter.cpp ../inc/HAtomicCounter.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h
HLink.o: HLink.cpp ../inc/HPacket.h ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HEpoll.h ../inc/HCommand.h ../inc/HLink.h \
  ../inc/HAtomicCounter.h ../inc/HCommandStream.h ../inc/HPacket.h \
  ../inc/HCommandRouter.h ../inc/HLink.h ../inc/HNetLog.h
HLinkMap.o: HLinkMap.cpp ../inc/HLink.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HAtomicCounter.h ../inc/HLinkMap.h
HClient.o: HClient.cpp ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HClient.h
HTCPClient.o: HTCPClient.cpp ../inc/HPacket.h ../inc/HSocket.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HTCPSocket.h ../inc/HClient.h ../inc/HTCPClient.h ../inc/HLink.h \
  ../inc/HAtomicCounter.h ../inc/HLink.h ../inc/HEpoll.h \
  ../inc/HCommand.h ../inc/HCommandParameter.h \
  ../inc/HCommandCommunicator.h ../inc/HCommandRouter.h ../inc/HPacket.h \
  ../inc/CommandTable_HNET.h
HTCPClientMgr.o: HTCPClientMgr.cpp ../inc/HSocket.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HTCPSocket.h ../inc/HLink.h ../inc/HAtomicCounter.h \
  ../inc/HClient.h ../inc/HTCPClient.h ../inc/HLink.h ../inc/HEpoll.h \
  ../inc/HClientMgr.h ../inc/HCommandCommunicator.h \
  ../inc/CommandTable_HNET.h ../inc/HTCPClientMgr.h
HCommand.o: HCommand.cpp ../inc/HPacket.h ../inc/HCommand.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HLink.h ../inc/HAtomicCounter.h ../inc/HCommandDesc.h \
  ../inc/HCommandParameter.h ../inc/HNetLog.h
HCommandStream.o: HCommandStream.cpp ../inc/HPacket.h ../inc/HLink.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HAtomicCounter.h ../inc/HCommand.h ../inc/HLink.h \
  ../inc/HCommandDesc.h ../inc/HCommandStream.h ../inc/HPacket.h \
  ../inc/HCommandCommunicator.h ../inc/HNetLog.h
HCommandRouter.o: HCommandRouter.cpp ../inc/HLink.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HAtomicCounter.h ../inc/HCommand.h ../inc/HLink.h \
  ../inc/HCommandDesc.h ../inc/HCommandCommunicator.h \
  ../inc/HCommandRouter.h ../inc/HPacket.h ../inc/HMutex.h
HCommandManager.o: HCommandManager.cpp ../inc/HMutex.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HCommand.h ../inc/HLink.h ../inc/HAtomicCounter.h \
  ../inc/HCommandDesc.h ../inc/HCommandManager.h
HCommandDesc.o: HCommandDesc.cpp ../inc/HCommand.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HLink.h ../inc/HAtomicCounter.h ../inc/HCommandDesc.h
HCommandParameter.o: HCommandParameter.cpp ../inc/HCommandParameter.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h
HCommandCommunicator.o: HCommandCommunicator.cpp ../inc/HCommand.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/HLink.h ../inc/HAtomicCounter.h ../inc/HCommandDesc.h \
  ../inc/HCommandManager.h ../inc/HCommandCommunicator.h ../inc/HLink.h
HMutex.o: HMutex.cpp ../inc/HMutex.h ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h
CommandTable_HNET.o: CommandTable_HNET.cpp ../inc/HCommandDesc.h \
  ../inc/HNetLib.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h \
  /usr/include/bits/wordsize.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ostream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ios \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iosfwd \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++locale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/string.h /usr/include/xlocale.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio \
  /usr/include/stdio.h /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h /usr/include/libio.h \
  /usr/include/_G_config.h /usr/include/wchar.h /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/clocale \
  /usr/include/locale.h /usr/include/bits/locale.h \
  /usr/include/langinfo.h /usr/include/nl_types.h \
  /usr/local/include/iconv.h /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-x86_64/errno.h \
  /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
  /usr/include/libintl.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++io.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/sched.h /usr/include/time.h /usr/include/bits/sched.h \
  /usr/include/bits/time.h /usr/include/signal.h \
  /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/setjmp.h /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
  /usr/include/bits/confname.h /usr/include/getopt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cctype \
  /usr/include/ctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stringfwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/postypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwchar \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime \
  /usr/include/stdint.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/functexcept.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception_defines.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/exception \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/char_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algobase.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/climits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib \
  /usr/include/stdlib.h /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
  /usr/include/sys/select.h /usr/include/bits/select.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_pair.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cpp_type_traits.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_types.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator_base_funcs.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/concept_check.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/debug/debug.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/localefwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ios_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/atomicity.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/atomic_word.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_classes.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/string \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/memory \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ext/new_allocator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/new \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_construct.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_uninitialized.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_raw_storage_iter.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/limits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_function.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/algorithm \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_algo.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_heap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tempbuf.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_string.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/streambuf \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/streambuf_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cwctype \
  /usr/include/wctype.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_base.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/ctype_inline.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/codecvt.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/time_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/messages_members.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/basic_ios.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/ostream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/locale \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/locale_facets.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/typeinfo \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/istream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/istream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/fstream \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/basic_file.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/fstream.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_tree.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_map.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_multimap.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/list \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_list.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/list.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/vector \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_vector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_bvector.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/vector.tcc \
  /usr/include/assert.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
  /usr/include/bits/uio.h /usr/include/sys/stat.h \
  /usr/include/bits/stat.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h \
  /usr/include/ifaddrs.h /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/bits/socket.h /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h /usr/include/asm-x86_64/socket.h \
  /usr/include/asm/sockios.h /usr/include/asm-x86_64/sockios.h \
  /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/bits/in.h \
  /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h \
  /usr/include/bits/netdb.h /usr/include/arpa/inet.h \
  /usr/include/sys/un.h /usr/include/sys/time.h \
  /usr/include/sys/resource.h /usr/include/bits/resource.h \
  /usr/include/sys/prctl.h /usr/include/linux/prctl.h \
  /usr/include/sys/epoll.h /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h \
  /usr/include/asm-x86_64/ioctls.h /usr/include/asm/ioctl.h \
  /usr/include/asm-x86_64/ioctl.h /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h \
  /usr/include/netinet/tcp.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/unordered_map \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/hashtable \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stl_relops.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/iterator \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/stream_iterator.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cmath \
  /usr/include/math.h /usr/include/bits/huge_val.h \
  /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h \
  /usr/include/bits/inf.h /usr/include/bits/nan.h \
  /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/bits/cmath.tcc \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/type_traits_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../functional \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/../utility \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_fwd.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/tuple_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/ref_wrap_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/mu_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/functional_iterate.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_repeat.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/tr1/bind_iterate.h \
  ../inc/CommandTable_HNET.h
