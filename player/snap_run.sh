#!/bin/bash
# snap has wrapper file which is setting up all the variables (GST_PLGUIN_PATH, GST_PLUGIN_SCANNER etc.) which overrides parts environment
# so this is a workaround to override GST_PLUGIN_PATH, GST_PLUGIN_SYSTEM_PATH and GST_PLUGIN_SCANNER
export GST_PLUGIN_PATH=$SNAP/usr/lib/gstreamer-1.0
export GST_PLUGIN_SYSTEM_PATH=$SNAP/usr/lib/gstreamer-1.0
export GST_PLUGIN_SCANNER=$SNAP/usr/libexec/gstreamer-1.0/gst-plugin-scanner
export LD_LIBRARY_PATH=$SNAP/usr/lib:$LD_LIBRARY_PATH
export LIBVA_DRIVER_NAME=i965
export LIBVA_DRIVERS_PATH=$SNAP/usr/lib/x86_64-linux-gnu/dri
export GST_VAAPI_ALL_DRIVERS=1

exec "$@"