#include <aos/aos.h>

static void app_delayed_action(void *arg)
{
    LOG("hello iot ");
    aos_post_delayed_action(5000, app_delayed_action, NULL);
}

int application_start(int argc, char *argv[])
{
    aos_post_delayed_action(1000, app_delayed_action, NULL);
    aos_loop_run();
    return 0;
}
