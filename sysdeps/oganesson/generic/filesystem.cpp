#include <asm/ioctls.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <dirent.h>
#include <limits.h>
#include <fcntl.h>
#include <string.h>

#include <bits/ensure.h>
#include <mlibc/all-sysdeps.hpp>
#include <mlibc/debug.hpp>

namespace mlibc {

int sys_write(int fd, const void* buffer, size_t count, ssize_t* written){
	return -ENOSYS;
}

int sys_read(int fd, void *buf, size_t count, ssize_t *bytes_read) {
	return -ENOSYS;
}

int sys_pwrite(int fd, const void* buffer, size_t count, off_t off, ssize_t* written){
	return -ENOSYS;
}

int sys_pread(int fd, void *buf, size_t count, off_t off, ssize_t *bytes_read) {
	return -ENOSYS;
}

int sys_seek(int fd, off_t offset, int whence, off_t *new_offset) {
	return -ENOSYS;
}

int sys_open(const char* filename, int flags, mode_t mode, int* fd){
	return -ENOSYS;
}

int sys_close(int fd){
	return -ENOSYS;
}

}
