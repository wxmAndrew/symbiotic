#include <pthread.h>

extern void *__symbiotic_global_lock(void);
void __symbiotic_atomic_begin(void)
{
	pthread_mutex_lock(__symbiotic_global_lock());
}
