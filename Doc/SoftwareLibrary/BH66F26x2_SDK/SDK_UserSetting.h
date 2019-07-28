#ifndef _SDK_USERSETTING_H_
#define _SDK_USERSETTING_H_
// Note
// 依據自己產品需求修改以下參數
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// ====================================================================================@
//                                稱重規格  設置                                       @
// ====================================================================================@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// operate : Bit        function: weight auto calibration Control
#define WEIGHT_AUTOCAL          1   // Range 0~1  1 Enable  0 Disable  Default 1
// operate : Bit        function: weight auto unlock Control
#define WEIGHT_AUTOUNLOCK       1   // Range 0~1  1 Enable  0 Disable  Default 1
// operate : numeric    function: weight auto unlock weight
#define WEIGHT_UNLOCK_TEMP      60  // Range 20~100 臨時解鎖重量= x公斤*20 ,SDK都以0.1斤分辨率 Default 60
#define WEIGHT_UNLOCK_STATE     60  // Range 20~100 穩定解鎖重量= x公斤*20 ,SDK都以0.1斤分辨率 Default 60
// operate : numeric    function: max weight
#define WEIGHT_MAX              3100    // Range 3100~4000 最大稱重重量= x公斤*20 ,SDK都以0.1斤分辨率 Default 3100
// operate : numeric    function: min weight
#define WEIGHT_MIN              100     // Range    70~100 最小稱重重量= x公斤*20 ,SDK都以0.1斤分辨率 Default 100
// operate : numeric    function: scales auto on from halt weight
#define WEIGHT_AUTOON           100     // Range   100~140 自動喚醒重量= x公斤*20 ,SDK都以0.1斤分辨率 Default 100
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// ====================================================================================@
//                                稱重濾波  設置                                       @
// ====================================================================================@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//operate : numeric  	fution: ~~
#define ADCSTABLE_WEIGHT_CNT        10 //  range:  8~20 	數值越大，濾波要求越嚴格
//operate : numeric  	fution: ~~
#define ADCSTABLE_WEIGHT_THRESHOLD  75 // range: 1000~3000    數值越大，濾波比較寬松,建議使用1個分辨率對應的ADC值
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// ====================================================================================@
//                                阻抗濾波  設置                                       @
// ====================================================================================@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// operate : Bit        function: weight auto unlock Control
#define MCU_PACKAGE_IS_QFN32           0      // Range 0~1  1 QFN32  0 SSOP28  Default 1
//operate : numeric  	fution: ~~
#define ADCSTABLE_IMPEDANCE_CNT         8     //  range: 4~12  數值越大,穩度越慢,精度越高
//operate : numeric  	fution: ~~
#define ADCSTABLE_IMPEDANCE_THRESHOLD   250   // range: 3000~8000  數值越大,穩定越快,精度越差
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// ====================================================================================@
//                                心率量測  設置                                       @
// ====================================================================================@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define HEART_CHAN_TWOARMS      0  // rang:0~1       0使用雙腳測量心率,1使用雙手測量心率

#endif