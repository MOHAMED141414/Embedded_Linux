# 2.Run this code (% Battery and make Notification)

import psutil
from plyer import notification

battery=psutil.sensors_battery()
prec=battery.percent
notification.notify(
    title="hi",
    message=f"Battery perc: {prec}%",
    timeout=10
)
