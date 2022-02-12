
# NRF52832 Ping pong example

### NRF52832 SDK Download
<br>

<img src="./asset/nordic_sdk_web.png">
<br>
<br>

Download [Nordic NRF52832 SDK](https://www.nordicsemi.com/Products/nRF52832/Download#infotabs)

-------------------------

### Note
<br>

Works with SoftDevice S132 v7.2.0, provided with SDK 17.1.0.
<br>

To compile it, clone the repository in the [SDK]/examples/ble_peripheral folder.

-------------------------

### Project import
<br>

<img src="./asset/import_setup_0.png">
<br>

File / New / Others / Make Project with Existing Code
<br>

<img src="./asset/import_setup_1.png">
<br>

File / New / Others / Make Project with Existing Code

-------------------------

### Eclipse setting
<br>

<img src="./asset/NRF52832_Eclipse_Setup_0.png">
<br>

Properties / C/C++ General / Preprocessor Include Path, Macros etc. / Providers / CDT GCC Build output Parser
<br>

` (.*gcc)|(.*[gc]\+\+) `
<br>

<img src="./asset/NRF52832_Eclipse_Setup_1.png">
<br>

Properties / C/C++ Build
<br>

` make VERBOSE=1 `
<br>
