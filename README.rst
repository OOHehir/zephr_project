.. _hello_world:

Hello World
###########

Overview
********

A simple 'out of tree' build example for a Zephyr project. It can be used with any :ref:`supported board <boards>` and
prints "Hello World" to the console.

Building and Running
********************

This application can be built and executed on QEMU as follows:

Init:
.. source ../zephyrproject/.venv/bin/activate
    :source ../zephyrproject/zephyr/zephyr-env.sh:

west build -p always -b qemu_x86


.. zephyr-app-commands::
   :zephyr-app: samples/hello_world
   :host-os: unix
   :board: qemu_x86
   :goals: run
   :compact:

To build for another board, change "qemu_x86" above to that board's name.

Sample Output
=============

.. code-block:: console

    Hello World! x86

Exit QEMU by pressing :kbd:`CTRL+A` :kbd:`x`.
