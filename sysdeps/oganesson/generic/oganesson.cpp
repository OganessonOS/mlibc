#include <stddef.h>
#include <bits/ensure.h>
#include <abi-bits/pid_t.h>
#include <mlibc/debug.hpp>
#include <mlibc/all-sysdeps.hpp>
#include <mlibc/thread-entry.hpp>
#include <errno.h>
#include <sys/resource.h>

namespace mlibc {

int sys_futex_tid(){
	return -ENOSYS;
}

int sys_futex_wait(int *pointer, int expected, const struct timespec *time){
	return -ENOSYS;
}

int sys_futex_wake(int *pointer) {
	return -ENOSYS;
}

int sys_vm_map(void *hint, size_t size, int prot, int flags, int fd, off_t offset, void **window) {
	return -ENOSYS;
}

int sys_vm_unmap(void* address, size_t size) {
	return -ENOSYS;
}

int sys_anon_allocate(size_t size, void **pointer) {
	return sys_vm_map(nullptr, size, PROT_READ | PROT_WRITE, MAP_ANONYMOUS, -1, 0, pointer);
}

int sys_anon_free(void *pointer, size_t size) {
	return sys_vm_unmap(pointer, size);
}

int sys_tcb_set(void* pointer){
	return -ENOSYS;
}

void sys_libc_panic(){
	sys_libc_log("libc panic!");
	__builtin_trap();
	for(;;);
}

void sys_libc_log(const char* msg){
	(void)msg;
}

}
