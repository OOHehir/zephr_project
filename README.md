## Overview
A simple 'out of tree' build example for a Zephyr project. It can be used with any supported board and
prints "Hello World" to the console.

### Building and Running

This application can be built and executed on QEMU as follows:

#### Init:
```
    source ../zephyrproject/.venv/bin/activate
    source ../zephyrproject/zephyr/zephyr-env.sh
```

#### Build:
```
    west build -p always -b qemu_x86
```

To build for another board, change "qemu_x86" above to that board's name.

### Sample Output

```
    Hello World! x86
```

Exit QEMU by pressing `CTRL+A`
