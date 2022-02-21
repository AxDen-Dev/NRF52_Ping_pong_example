
# NRF52832 Ping pong example

-------------------------

<img src="./asset/nrf52832.png">
<br>

NRF52832 와 Android Application 간의 통신 예제입니다.
<br>

BLE 통신을 사용합니다.
<br>

Android, iOS, Aggregator 와 통신이 가능합니다.
<br>

네이버 스마트 스토어에서 구매 가능합니다.
<br>

[네이버 스마트 스토어](https://smartstore.naver.com/axden)
<br>

-------------------------

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
