#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>

int count = 0;
pthread_mutex_t count_lock;

void *memcopy(void *des, void* src, int size)
{
    int* ides = (int*)des;
    int* isrc = (int*)src;
    for(int i = 0; i < size; i++)
    {
        ides[i] = isrc[i];
    }
    return des;
}

void *memorysetting(void* des, int value, int size)
{
    int *ides = (int*)des;
    for(int i = 0; i < size; i++)
    {
        ides[i] = value;
    }
    return des;
}
void *my_thread(void *arg)
{
    // printf("Hello World! %s\n", (char*) arg);
    // return arg;
    // int count = 0;
    pthread_mutex_lock(&count_lock);
    for (int i = 0; i < 5000; i++)
    {
        count++;
    }
    pthread_mutex_unlock(&count_lock);
    return NULL;
}
void main()
{
    pthread_t thread1;
    pthread_t thread2;
    char a[100] = { 0 };

    int destination[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int source[10] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    memcopy(destination, source, sizeof(destination)/sizeof(destination[0]));
    for(int i = 0; i < sizeof(destination)/sizeof(destination[0]); i++)
    {
        printf("destination[%d] = %d\t", i, destination[i]);
    }
    printf("\n");
    // memset(a, 100, sizeof(a));
    int array[100] = {19, 19, 19};
    int value = 100;
    memorysetting(array, value, 100);
    for(int i = 0; i < 10; i++)
    {
        printf("array[%d] = %d \t", i, array[i]);
    }
    pthread_mutex_init(&count_lock, NULL);

    pthread_create(&thread1, NULL, my_thread, "Nam");
    pthread_create(&thread2, NULL, my_thread, "Na");

    pthread_mutex_destroy(&count_lock);

    pthread_join(thread1, (void *) &a);
    // printf("Thread 1 return %s\n", *a);
    pthread_join(thread2, (void *) &a);
    // printf("Thread 2 return %s\n", *a);
    printf("cout = %d\n", count);
}