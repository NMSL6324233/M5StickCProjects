                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.8.0 #10562 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module usb_desc
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _CfgDesc
                                     12 	.globl _DevDesc
                                     13 	.globl _UIF_BUS_RST
                                     14 	.globl _UIF_DETECT
                                     15 	.globl _UIF_TRANSFER
                                     16 	.globl _UIF_SUSPEND
                                     17 	.globl _UIF_HST_SOF
                                     18 	.globl _UIF_FIFO_OV
                                     19 	.globl _U_SIE_FREE
                                     20 	.globl _U_TOG_OK
                                     21 	.globl _U_IS_NAK
                                     22 	.globl _ADC_CHAN0
                                     23 	.globl _ADC_CHAN1
                                     24 	.globl _CMP_CHAN
                                     25 	.globl _ADC_START
                                     26 	.globl _ADC_IF
                                     27 	.globl _CMP_IF
                                     28 	.globl _CMPO
                                     29 	.globl _U1RI
                                     30 	.globl _U1TI
                                     31 	.globl _U1RB8
                                     32 	.globl _U1TB8
                                     33 	.globl _U1REN
                                     34 	.globl _U1SMOD
                                     35 	.globl _U1SM0
                                     36 	.globl _S0_R_FIFO
                                     37 	.globl _S0_T_FIFO
                                     38 	.globl _S0_FREE
                                     39 	.globl _S0_IF_BYTE
                                     40 	.globl _S0_IF_FIRST
                                     41 	.globl _S0_IF_OV
                                     42 	.globl _S0_FST_ACT
                                     43 	.globl _CP_RL2
                                     44 	.globl _C_T2
                                     45 	.globl _TR2
                                     46 	.globl _EXEN2
                                     47 	.globl _TCLK
                                     48 	.globl _RCLK
                                     49 	.globl _EXF2
                                     50 	.globl _CAP1F
                                     51 	.globl _TF2
                                     52 	.globl _RI
                                     53 	.globl _TI
                                     54 	.globl _RB8
                                     55 	.globl _TB8
                                     56 	.globl _REN
                                     57 	.globl _SM2
                                     58 	.globl _SM1
                                     59 	.globl _SM0
                                     60 	.globl _IT0
                                     61 	.globl _IE0
                                     62 	.globl _IT1
                                     63 	.globl _IE1
                                     64 	.globl _TR0
                                     65 	.globl _TF0
                                     66 	.globl _TR1
                                     67 	.globl _TF1
                                     68 	.globl _RXD
                                     69 	.globl _PWM1_
                                     70 	.globl _TXD
                                     71 	.globl _PWM2_
                                     72 	.globl _AIN3
                                     73 	.globl _VBUS1
                                     74 	.globl _INT0
                                     75 	.globl _TXD1_
                                     76 	.globl _INT1
                                     77 	.globl _T0
                                     78 	.globl _RXD1_
                                     79 	.globl _PWM2
                                     80 	.globl _T1
                                     81 	.globl _UDP
                                     82 	.globl _UDM
                                     83 	.globl _TIN0
                                     84 	.globl _CAP1
                                     85 	.globl _T2
                                     86 	.globl _AIN0
                                     87 	.globl _VBUS2
                                     88 	.globl _TIN1
                                     89 	.globl _CAP2
                                     90 	.globl _T2EX
                                     91 	.globl _RXD_
                                     92 	.globl _TXD_
                                     93 	.globl _AIN1
                                     94 	.globl _UCC1
                                     95 	.globl _TIN2
                                     96 	.globl _SCS
                                     97 	.globl _CAP1_
                                     98 	.globl _T2_
                                     99 	.globl _AIN2
                                    100 	.globl _UCC2
                                    101 	.globl _TIN3
                                    102 	.globl _PWM1
                                    103 	.globl _MOSI
                                    104 	.globl _TIN4
                                    105 	.globl _RXD1
                                    106 	.globl _MISO
                                    107 	.globl _TIN5
                                    108 	.globl _TXD1
                                    109 	.globl _SCK
                                    110 	.globl _IE_SPI0
                                    111 	.globl _IE_TKEY
                                    112 	.globl _IE_USB
                                    113 	.globl _IE_ADC
                                    114 	.globl _IE_UART1
                                    115 	.globl _IE_PWMX
                                    116 	.globl _IE_GPIO
                                    117 	.globl _IE_WDOG
                                    118 	.globl _PX0
                                    119 	.globl _PT0
                                    120 	.globl _PX1
                                    121 	.globl _PT1
                                    122 	.globl _PS
                                    123 	.globl _PT2
                                    124 	.globl _PL_FLAG
                                    125 	.globl _PH_FLAG
                                    126 	.globl _EX0
                                    127 	.globl _ET0
                                    128 	.globl _EX1
                                    129 	.globl _ET1
                                    130 	.globl _ES
                                    131 	.globl _ET2
                                    132 	.globl _E_DIS
                                    133 	.globl _EA
                                    134 	.globl _P
                                    135 	.globl _F1
                                    136 	.globl _OV
                                    137 	.globl _RS0
                                    138 	.globl _RS1
                                    139 	.globl _F0
                                    140 	.globl _AC
                                    141 	.globl _CY
                                    142 	.globl _UEP1_DMA_H
                                    143 	.globl _UEP1_DMA_L
                                    144 	.globl _UEP1_DMA
                                    145 	.globl _UEP0_DMA_H
                                    146 	.globl _UEP0_DMA_L
                                    147 	.globl _UEP0_DMA
                                    148 	.globl _UEP2_3_MOD
                                    149 	.globl _UEP4_1_MOD
                                    150 	.globl _UEP3_DMA_H
                                    151 	.globl _UEP3_DMA_L
                                    152 	.globl _UEP3_DMA
                                    153 	.globl _UEP2_DMA_H
                                    154 	.globl _UEP2_DMA_L
                                    155 	.globl _UEP2_DMA
                                    156 	.globl _USB_DEV_AD
                                    157 	.globl _USB_CTRL
                                    158 	.globl _USB_INT_EN
                                    159 	.globl _UEP4_T_LEN
                                    160 	.globl _UEP4_CTRL
                                    161 	.globl _UEP0_T_LEN
                                    162 	.globl _UEP0_CTRL
                                    163 	.globl _USB_RX_LEN
                                    164 	.globl _USB_MIS_ST
                                    165 	.globl _USB_INT_ST
                                    166 	.globl _USB_INT_FG
                                    167 	.globl _UEP3_T_LEN
                                    168 	.globl _UEP3_CTRL
                                    169 	.globl _UEP2_T_LEN
                                    170 	.globl _UEP2_CTRL
                                    171 	.globl _UEP1_T_LEN
                                    172 	.globl _UEP1_CTRL
                                    173 	.globl _UDEV_CTRL
                                    174 	.globl _USB_C_CTRL
                                    175 	.globl _TKEY_DATH
                                    176 	.globl _TKEY_DATL
                                    177 	.globl _TKEY_DAT
                                    178 	.globl _TKEY_CTRL
                                    179 	.globl _ADC_DATA
                                    180 	.globl _ADC_CFG
                                    181 	.globl _ADC_CTRL
                                    182 	.globl _SBAUD1
                                    183 	.globl _SBUF1
                                    184 	.globl _SCON1
                                    185 	.globl _SPI0_SETUP
                                    186 	.globl _SPI0_CK_SE
                                    187 	.globl _SPI0_CTRL
                                    188 	.globl _SPI0_DATA
                                    189 	.globl _SPI0_STAT
                                    190 	.globl _PWM_CK_SE
                                    191 	.globl _PWM_CTRL
                                    192 	.globl _PWM_DATA1
                                    193 	.globl _PWM_DATA2
                                    194 	.globl _T2CAP1H
                                    195 	.globl _T2CAP1L
                                    196 	.globl _T2CAP1
                                    197 	.globl _TH2
                                    198 	.globl _TL2
                                    199 	.globl _T2COUNT
                                    200 	.globl _RCAP2H
                                    201 	.globl _RCAP2L
                                    202 	.globl _RCAP2
                                    203 	.globl _T2MOD
                                    204 	.globl _T2CON
                                    205 	.globl _SBUF
                                    206 	.globl _SCON
                                    207 	.globl _TH1
                                    208 	.globl _TH0
                                    209 	.globl _TL1
                                    210 	.globl _TL0
                                    211 	.globl _TMOD
                                    212 	.globl _TCON
                                    213 	.globl _XBUS_AUX
                                    214 	.globl _PIN_FUNC
                                    215 	.globl _P3_DIR_PU
                                    216 	.globl _P3_MOD_OC
                                    217 	.globl _P3
                                    218 	.globl _P2
                                    219 	.globl _P1_DIR_PU
                                    220 	.globl _P1_MOD_OC
                                    221 	.globl _P1
                                    222 	.globl _ROM_CTRL
                                    223 	.globl _ROM_DATA_H
                                    224 	.globl _ROM_DATA_L
                                    225 	.globl _ROM_DATA
                                    226 	.globl _ROM_ADDR_H
                                    227 	.globl _ROM_ADDR_L
                                    228 	.globl _ROM_ADDR
                                    229 	.globl _GPIO_IE
                                    230 	.globl _IP_EX
                                    231 	.globl _IE_EX
                                    232 	.globl _IP
                                    233 	.globl _IE
                                    234 	.globl _WDOG_COUNT
                                    235 	.globl _RESET_KEEP
                                    236 	.globl _WAKE_CTRL
                                    237 	.globl _CLOCK_CFG
                                    238 	.globl _PCON
                                    239 	.globl _GLOBAL_CFG
                                    240 	.globl _SAFE_MOD
                                    241 	.globl _DPH
                                    242 	.globl _DPL
                                    243 	.globl _SP
                                    244 	.globl _B
                                    245 	.globl _ACC
                                    246 	.globl _PSW
                                    247 ;--------------------------------------------------------
                                    248 ; special function registers
                                    249 ;--------------------------------------------------------
                                    250 	.area RSEG    (ABS,DATA)
      000000                        251 	.org 0x0000
                           0000D0   252 _PSW	=	0x00d0
                           0000E0   253 _ACC	=	0x00e0
                           0000F0   254 _B	=	0x00f0
                           000081   255 _SP	=	0x0081
                           000082   256 _DPL	=	0x0082
                           000083   257 _DPH	=	0x0083
                           0000A1   258 _SAFE_MOD	=	0x00a1
                           0000B1   259 _GLOBAL_CFG	=	0x00b1
                           000087   260 _PCON	=	0x0087
                           0000B9   261 _CLOCK_CFG	=	0x00b9
                           0000A9   262 _WAKE_CTRL	=	0x00a9
                           0000FE   263 _RESET_KEEP	=	0x00fe
                           0000FF   264 _WDOG_COUNT	=	0x00ff
                           0000A8   265 _IE	=	0x00a8
                           0000B8   266 _IP	=	0x00b8
                           0000E8   267 _IE_EX	=	0x00e8
                           0000E9   268 _IP_EX	=	0x00e9
                           0000C7   269 _GPIO_IE	=	0x00c7
                           008584   270 _ROM_ADDR	=	0x8584
                           000084   271 _ROM_ADDR_L	=	0x0084
                           000085   272 _ROM_ADDR_H	=	0x0085
                           008F8E   273 _ROM_DATA	=	0x8f8e
                           00008E   274 _ROM_DATA_L	=	0x008e
                           00008F   275 _ROM_DATA_H	=	0x008f
                           000086   276 _ROM_CTRL	=	0x0086
                           000090   277 _P1	=	0x0090
                           000092   278 _P1_MOD_OC	=	0x0092
                           000093   279 _P1_DIR_PU	=	0x0093
                           0000A0   280 _P2	=	0x00a0
                           0000B0   281 _P3	=	0x00b0
                           000096   282 _P3_MOD_OC	=	0x0096
                           000097   283 _P3_DIR_PU	=	0x0097
                           0000C6   284 _PIN_FUNC	=	0x00c6
                           0000A2   285 _XBUS_AUX	=	0x00a2
                           000088   286 _TCON	=	0x0088
                           000089   287 _TMOD	=	0x0089
                           00008A   288 _TL0	=	0x008a
                           00008B   289 _TL1	=	0x008b
                           00008C   290 _TH0	=	0x008c
                           00008D   291 _TH1	=	0x008d
                           000098   292 _SCON	=	0x0098
                           000099   293 _SBUF	=	0x0099
                           0000C8   294 _T2CON	=	0x00c8
                           0000C9   295 _T2MOD	=	0x00c9
                           00CBCA   296 _RCAP2	=	0xcbca
                           0000CA   297 _RCAP2L	=	0x00ca
                           0000CB   298 _RCAP2H	=	0x00cb
                           00CDCC   299 _T2COUNT	=	0xcdcc
                           0000CC   300 _TL2	=	0x00cc
                           0000CD   301 _TH2	=	0x00cd
                           00CFCE   302 _T2CAP1	=	0xcfce
                           0000CE   303 _T2CAP1L	=	0x00ce
                           0000CF   304 _T2CAP1H	=	0x00cf
                           00009B   305 _PWM_DATA2	=	0x009b
                           00009C   306 _PWM_DATA1	=	0x009c
                           00009D   307 _PWM_CTRL	=	0x009d
                           00009E   308 _PWM_CK_SE	=	0x009e
                           0000F8   309 _SPI0_STAT	=	0x00f8
                           0000F9   310 _SPI0_DATA	=	0x00f9
                           0000FA   311 _SPI0_CTRL	=	0x00fa
                           0000FB   312 _SPI0_CK_SE	=	0x00fb
                           0000FC   313 _SPI0_SETUP	=	0x00fc
                           0000C0   314 _SCON1	=	0x00c0
                           0000C1   315 _SBUF1	=	0x00c1
                           0000C2   316 _SBAUD1	=	0x00c2
                           000080   317 _ADC_CTRL	=	0x0080
                           00009A   318 _ADC_CFG	=	0x009a
                           00009F   319 _ADC_DATA	=	0x009f
                           0000C3   320 _TKEY_CTRL	=	0x00c3
                           00C5C4   321 _TKEY_DAT	=	0xc5c4
                           0000C4   322 _TKEY_DATL	=	0x00c4
                           0000C5   323 _TKEY_DATH	=	0x00c5
                           000091   324 _USB_C_CTRL	=	0x0091
                           0000D1   325 _UDEV_CTRL	=	0x00d1
                           0000D2   326 _UEP1_CTRL	=	0x00d2
                           0000D3   327 _UEP1_T_LEN	=	0x00d3
                           0000D4   328 _UEP2_CTRL	=	0x00d4
                           0000D5   329 _UEP2_T_LEN	=	0x00d5
                           0000D6   330 _UEP3_CTRL	=	0x00d6
                           0000D7   331 _UEP3_T_LEN	=	0x00d7
                           0000D8   332 _USB_INT_FG	=	0x00d8
                           0000D9   333 _USB_INT_ST	=	0x00d9
                           0000DA   334 _USB_MIS_ST	=	0x00da
                           0000DB   335 _USB_RX_LEN	=	0x00db
                           0000DC   336 _UEP0_CTRL	=	0x00dc
                           0000DD   337 _UEP0_T_LEN	=	0x00dd
                           0000DE   338 _UEP4_CTRL	=	0x00de
                           0000DF   339 _UEP4_T_LEN	=	0x00df
                           0000E1   340 _USB_INT_EN	=	0x00e1
                           0000E2   341 _USB_CTRL	=	0x00e2
                           0000E3   342 _USB_DEV_AD	=	0x00e3
                           00E5E4   343 _UEP2_DMA	=	0xe5e4
                           0000E4   344 _UEP2_DMA_L	=	0x00e4
                           0000E5   345 _UEP2_DMA_H	=	0x00e5
                           00E7E6   346 _UEP3_DMA	=	0xe7e6
                           0000E6   347 _UEP3_DMA_L	=	0x00e6
                           0000E7   348 _UEP3_DMA_H	=	0x00e7
                           0000EA   349 _UEP4_1_MOD	=	0x00ea
                           0000EB   350 _UEP2_3_MOD	=	0x00eb
                           00EDEC   351 _UEP0_DMA	=	0xedec
                           0000EC   352 _UEP0_DMA_L	=	0x00ec
                           0000ED   353 _UEP0_DMA_H	=	0x00ed
                           00EFEE   354 _UEP1_DMA	=	0xefee
                           0000EE   355 _UEP1_DMA_L	=	0x00ee
                           0000EF   356 _UEP1_DMA_H	=	0x00ef
                                    357 ;--------------------------------------------------------
                                    358 ; special function bits
                                    359 ;--------------------------------------------------------
                                    360 	.area RSEG    (ABS,DATA)
      000000                        361 	.org 0x0000
                           0000D7   362 _CY	=	0x00d7
                           0000D6   363 _AC	=	0x00d6
                           0000D5   364 _F0	=	0x00d5
                           0000D4   365 _RS1	=	0x00d4
                           0000D3   366 _RS0	=	0x00d3
                           0000D2   367 _OV	=	0x00d2
                           0000D1   368 _F1	=	0x00d1
                           0000D0   369 _P	=	0x00d0
                           0000AF   370 _EA	=	0x00af
                           0000AE   371 _E_DIS	=	0x00ae
                           0000AD   372 _ET2	=	0x00ad
                           0000AC   373 _ES	=	0x00ac
                           0000AB   374 _ET1	=	0x00ab
                           0000AA   375 _EX1	=	0x00aa
                           0000A9   376 _ET0	=	0x00a9
                           0000A8   377 _EX0	=	0x00a8
                           0000BF   378 _PH_FLAG	=	0x00bf
                           0000BE   379 _PL_FLAG	=	0x00be
                           0000BD   380 _PT2	=	0x00bd
                           0000BC   381 _PS	=	0x00bc
                           0000BB   382 _PT1	=	0x00bb
                           0000BA   383 _PX1	=	0x00ba
                           0000B9   384 _PT0	=	0x00b9
                           0000B8   385 _PX0	=	0x00b8
                           0000EF   386 _IE_WDOG	=	0x00ef
                           0000EE   387 _IE_GPIO	=	0x00ee
                           0000ED   388 _IE_PWMX	=	0x00ed
                           0000EC   389 _IE_UART1	=	0x00ec
                           0000EB   390 _IE_ADC	=	0x00eb
                           0000EA   391 _IE_USB	=	0x00ea
                           0000E9   392 _IE_TKEY	=	0x00e9
                           0000E8   393 _IE_SPI0	=	0x00e8
                           000097   394 _SCK	=	0x0097
                           000097   395 _TXD1	=	0x0097
                           000097   396 _TIN5	=	0x0097
                           000096   397 _MISO	=	0x0096
                           000096   398 _RXD1	=	0x0096
                           000096   399 _TIN4	=	0x0096
                           000095   400 _MOSI	=	0x0095
                           000095   401 _PWM1	=	0x0095
                           000095   402 _TIN3	=	0x0095
                           000095   403 _UCC2	=	0x0095
                           000095   404 _AIN2	=	0x0095
                           000094   405 _T2_	=	0x0094
                           000094   406 _CAP1_	=	0x0094
                           000094   407 _SCS	=	0x0094
                           000094   408 _TIN2	=	0x0094
                           000094   409 _UCC1	=	0x0094
                           000094   410 _AIN1	=	0x0094
                           000093   411 _TXD_	=	0x0093
                           000092   412 _RXD_	=	0x0092
                           000091   413 _T2EX	=	0x0091
                           000091   414 _CAP2	=	0x0091
                           000091   415 _TIN1	=	0x0091
                           000091   416 _VBUS2	=	0x0091
                           000091   417 _AIN0	=	0x0091
                           000090   418 _T2	=	0x0090
                           000090   419 _CAP1	=	0x0090
                           000090   420 _TIN0	=	0x0090
                           0000B7   421 _UDM	=	0x00b7
                           0000B6   422 _UDP	=	0x00b6
                           0000B5   423 _T1	=	0x00b5
                           0000B4   424 _PWM2	=	0x00b4
                           0000B4   425 _RXD1_	=	0x00b4
                           0000B4   426 _T0	=	0x00b4
                           0000B3   427 _INT1	=	0x00b3
                           0000B2   428 _TXD1_	=	0x00b2
                           0000B2   429 _INT0	=	0x00b2
                           0000B2   430 _VBUS1	=	0x00b2
                           0000B2   431 _AIN3	=	0x00b2
                           0000B1   432 _PWM2_	=	0x00b1
                           0000B1   433 _TXD	=	0x00b1
                           0000B0   434 _PWM1_	=	0x00b0
                           0000B0   435 _RXD	=	0x00b0
                           00008F   436 _TF1	=	0x008f
                           00008E   437 _TR1	=	0x008e
                           00008D   438 _TF0	=	0x008d
                           00008C   439 _TR0	=	0x008c
                           00008B   440 _IE1	=	0x008b
                           00008A   441 _IT1	=	0x008a
                           000089   442 _IE0	=	0x0089
                           000088   443 _IT0	=	0x0088
                           00009F   444 _SM0	=	0x009f
                           00009E   445 _SM1	=	0x009e
                           00009D   446 _SM2	=	0x009d
                           00009C   447 _REN	=	0x009c
                           00009B   448 _TB8	=	0x009b
                           00009A   449 _RB8	=	0x009a
                           000099   450 _TI	=	0x0099
                           000098   451 _RI	=	0x0098
                           0000CF   452 _TF2	=	0x00cf
                           0000CF   453 _CAP1F	=	0x00cf
                           0000CE   454 _EXF2	=	0x00ce
                           0000CD   455 _RCLK	=	0x00cd
                           0000CC   456 _TCLK	=	0x00cc
                           0000CB   457 _EXEN2	=	0x00cb
                           0000CA   458 _TR2	=	0x00ca
                           0000C9   459 _C_T2	=	0x00c9
                           0000C8   460 _CP_RL2	=	0x00c8
                           0000FF   461 _S0_FST_ACT	=	0x00ff
                           0000FE   462 _S0_IF_OV	=	0x00fe
                           0000FD   463 _S0_IF_FIRST	=	0x00fd
                           0000FC   464 _S0_IF_BYTE	=	0x00fc
                           0000FB   465 _S0_FREE	=	0x00fb
                           0000FA   466 _S0_T_FIFO	=	0x00fa
                           0000F8   467 _S0_R_FIFO	=	0x00f8
                           0000C7   468 _U1SM0	=	0x00c7
                           0000C5   469 _U1SMOD	=	0x00c5
                           0000C4   470 _U1REN	=	0x00c4
                           0000C3   471 _U1TB8	=	0x00c3
                           0000C2   472 _U1RB8	=	0x00c2
                           0000C1   473 _U1TI	=	0x00c1
                           0000C0   474 _U1RI	=	0x00c0
                           000087   475 _CMPO	=	0x0087
                           000086   476 _CMP_IF	=	0x0086
                           000085   477 _ADC_IF	=	0x0085
                           000084   478 _ADC_START	=	0x0084
                           000083   479 _CMP_CHAN	=	0x0083
                           000081   480 _ADC_CHAN1	=	0x0081
                           000080   481 _ADC_CHAN0	=	0x0080
                           0000DF   482 _U_IS_NAK	=	0x00df
                           0000DE   483 _U_TOG_OK	=	0x00de
                           0000DD   484 _U_SIE_FREE	=	0x00dd
                           0000DC   485 _UIF_FIFO_OV	=	0x00dc
                           0000DB   486 _UIF_HST_SOF	=	0x00db
                           0000DA   487 _UIF_SUSPEND	=	0x00da
                           0000D9   488 _UIF_TRANSFER	=	0x00d9
                           0000D8   489 _UIF_DETECT	=	0x00d8
                           0000D8   490 _UIF_BUS_RST	=	0x00d8
                                    491 ;--------------------------------------------------------
                                    492 ; overlayable register banks
                                    493 ;--------------------------------------------------------
                                    494 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        495 	.ds 8
                                    496 ;--------------------------------------------------------
                                    497 ; internal ram data
                                    498 ;--------------------------------------------------------
                                    499 	.area DSEG    (DATA)
                                    500 ;--------------------------------------------------------
                                    501 ; overlayable items in internal ram 
                                    502 ;--------------------------------------------------------
                                    503 ;--------------------------------------------------------
                                    504 ; indirectly addressable internal ram data
                                    505 ;--------------------------------------------------------
                                    506 	.area ISEG    (DATA)
                                    507 ;--------------------------------------------------------
                                    508 ; absolute internal ram data
                                    509 ;--------------------------------------------------------
                                    510 	.area IABS    (ABS,DATA)
                                    511 	.area IABS    (ABS,DATA)
                                    512 ;--------------------------------------------------------
                                    513 ; bit data
                                    514 ;--------------------------------------------------------
                                    515 	.area BSEG    (BIT)
                                    516 ;--------------------------------------------------------
                                    517 ; paged external ram data
                                    518 ;--------------------------------------------------------
                                    519 	.area PSEG    (PAG,XDATA)
                                    520 ;--------------------------------------------------------
                                    521 ; external ram data
                                    522 ;--------------------------------------------------------
                                    523 	.area XSEG    (XDATA)
                                    524 ;--------------------------------------------------------
                                    525 ; absolute external ram data
                                    526 ;--------------------------------------------------------
                                    527 	.area XABS    (ABS,XDATA)
                                    528 ;--------------------------------------------------------
                                    529 ; external initialized ram data
                                    530 ;--------------------------------------------------------
                                    531 	.area XISEG   (XDATA)
                                    532 	.area HOME    (CODE)
                                    533 	.area GSINIT0 (CODE)
                                    534 	.area GSINIT1 (CODE)
                                    535 	.area GSINIT2 (CODE)
                                    536 	.area GSINIT3 (CODE)
                                    537 	.area GSINIT4 (CODE)
                                    538 	.area GSINIT5 (CODE)
                                    539 	.area GSINIT  (CODE)
                                    540 	.area GSFINAL (CODE)
                                    541 	.area CSEG    (CODE)
                                    542 ;--------------------------------------------------------
                                    543 ; global & static initialisations
                                    544 ;--------------------------------------------------------
                                    545 	.area HOME    (CODE)
                                    546 	.area GSINIT  (CODE)
                                    547 	.area GSFINAL (CODE)
                                    548 	.area GSINIT  (CODE)
                                    549 ;--------------------------------------------------------
                                    550 ; Home
                                    551 ;--------------------------------------------------------
                                    552 	.area HOME    (CODE)
                                    553 	.area HOME    (CODE)
                                    554 ;--------------------------------------------------------
                                    555 ; code
                                    556 ;--------------------------------------------------------
                                    557 	.area CSEG    (CODE)
                                    558 	.area CSEG    (CODE)
                                    559 	.area CONST   (CODE)
      000E6B                        560 _DevDesc:
      000E6B 12                     561 	.db #0x12	; 18
      000E6C 01                     562 	.db #0x01	; 1
      000E6D 10                     563 	.db #0x10	; 16
      000E6E 01                     564 	.db #0x01	; 1
      000E6F 00                     565 	.db #0x00	; 0
      000E70 00                     566 	.db #0x00	; 0
      000E71 00                     567 	.db #0x00	; 0
      000E72 08                     568 	.db #0x08	; 8
      000E73 86                     569 	.db #0x86	; 134
      000E74 1A                     570 	.db #0x1a	; 26
      000E75 22                     571 	.db #0x22	; 34
      000E76 57                     572 	.db #0x57	; 87	'W'
      000E77 00                     573 	.db #0x00	; 0
      000E78 01                     574 	.db #0x01	; 1
      000E79 02                     575 	.db #0x02	; 2
      000E7A 01                     576 	.db #0x01	; 1
      000E7B 00                     577 	.db #0x00	; 0
      000E7C 01                     578 	.db #0x01	; 1
      000E7D                        579 _CfgDesc:
      000E7D 09                     580 	.db #0x09	; 9
      000E7E 02                     581 	.db #0x02	; 2
      000E7F 4B                     582 	.db #0x4b	; 75	'K'
      000E80 00                     583 	.db #0x00	; 0
      000E81 02                     584 	.db #0x02	; 2
      000E82 01                     585 	.db #0x01	; 1
      000E83 00                     586 	.db #0x00	; 0
      000E84 80                     587 	.db #0x80	; 128
      000E85 32                     588 	.db #0x32	; 50	'2'
      000E86 08                     589 	.db #0x08	; 8
      000E87 0B                     590 	.db #0x0b	; 11
      000E88 00                     591 	.db #0x00	; 0
      000E89 02                     592 	.db #0x02	; 2
      000E8A 02                     593 	.db #0x02	; 2
      000E8B 02                     594 	.db #0x02	; 2
      000E8C 01                     595 	.db #0x01	; 1
      000E8D 03                     596 	.db #0x03	; 3
      000E8E 09                     597 	.db #0x09	; 9
      000E8F 04                     598 	.db #0x04	; 4
      000E90 00                     599 	.db #0x00	; 0
      000E91 00                     600 	.db #0x00	; 0
      000E92 01                     601 	.db #0x01	; 1
      000E93 02                     602 	.db #0x02	; 2
      000E94 02                     603 	.db #0x02	; 2
      000E95 01                     604 	.db #0x01	; 1
      000E96 00                     605 	.db #0x00	; 0
      000E97 05                     606 	.db #0x05	; 5
      000E98 24                     607 	.db #0x24	; 36
      000E99 00                     608 	.db #0x00	; 0
      000E9A 10                     609 	.db #0x10	; 16
      000E9B 01                     610 	.db #0x01	; 1
      000E9C 05                     611 	.db #0x05	; 5
      000E9D 24                     612 	.db #0x24	; 36
      000E9E 01                     613 	.db #0x01	; 1
      000E9F 00                     614 	.db #0x00	; 0
      000EA0 00                     615 	.db #0x00	; 0
      000EA1 04                     616 	.db #0x04	; 4
      000EA2 24                     617 	.db #0x24	; 36
      000EA3 02                     618 	.db #0x02	; 2
      000EA4 02                     619 	.db #0x02	; 2
      000EA5 05                     620 	.db #0x05	; 5
      000EA6 24                     621 	.db #0x24	; 36
      000EA7 06                     622 	.db #0x06	; 6
      000EA8 00                     623 	.db #0x00	; 0
      000EA9 01                     624 	.db #0x01	; 1
      000EAA 07                     625 	.db #0x07	; 7
      000EAB 05                     626 	.db #0x05	; 5
      000EAC 81                     627 	.db #0x81	; 129
      000EAD 03                     628 	.db #0x03	; 3
      000EAE 10                     629 	.db #0x10	; 16
      000EAF 00                     630 	.db #0x00	; 0
      000EB0 40                     631 	.db #0x40	; 64
      000EB1 09                     632 	.db #0x09	; 9
      000EB2 04                     633 	.db #0x04	; 4
      000EB3 01                     634 	.db #0x01	; 1
      000EB4 00                     635 	.db #0x00	; 0
      000EB5 02                     636 	.db #0x02	; 2
      000EB6 0A                     637 	.db #0x0a	; 10
      000EB7 00                     638 	.db #0x00	; 0
      000EB8 00                     639 	.db #0x00	; 0
      000EB9 00                     640 	.db #0x00	; 0
      000EBA 07                     641 	.db #0x07	; 7
      000EBB 05                     642 	.db #0x05	; 5
      000EBC 02                     643 	.db #0x02	; 2
      000EBD 02                     644 	.db #0x02	; 2
      000EBE 40                     645 	.db #0x40	; 64
      000EBF 00                     646 	.db #0x00	; 0
      000EC0 00                     647 	.db #0x00	; 0
      000EC1 07                     648 	.db #0x07	; 7
      000EC2 05                     649 	.db #0x05	; 5
      000EC3 82                     650 	.db #0x82	; 130
      000EC4 02                     651 	.db #0x02	; 2
      000EC5 40                     652 	.db #0x40	; 64
      000EC6 00                     653 	.db #0x00	; 0
      000EC7 00                     654 	.db #0x00	; 0
                                    655 	.area XINIT   (CODE)
                                    656 	.area CABS    (ABS,CODE)
