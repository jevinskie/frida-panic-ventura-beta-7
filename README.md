# frida-panic-ventura-beta-7
This panics macOS Ventura beta 7 because why not?

```
panic(cpu 2 caller 0xfffffe00285b4bc8): vm_map_delete(0xfffffe1ab931d0c0,0x187b20000,0x187b24000): failed unexpected with 2 @vm_map.c:7922
Debugger message: panic
Memory ID: 0x6
OS release type: User
OS version: 22A5342f
Kernel version: Darwin Kernel Version 22.1.0: Mon Aug 29 20:11:49 PDT 2022; root:xnu-8792.40.74.0.1~20/RELEASE_ARM64_T6000
Fileset Kernelcache UUID: D3DD98E303AABC216480B709ABC37CC7
Kernel UUID: 3219F265-5614-3B2C-ACAC-AB4CB0CA4504
Boot session UUID: B3EAD333-BB53-4B6F-8883-57CC477D6136
iBoot version: iBoot-8419.40.75
secure boot?: YES
roots installed: 0
Paniclog version: 14
KernelCache slide: 0x000000001f9c4000
KernelCache base:  0xfffffe00269c8000
Kernel slide:      0x0000000020c20000
Kernel text base:  0xfffffe0027c24000
Kernel text exec slide: 0x0000000020d0c000
Kernel text exec base:  0xfffffe0027d10000
mach_absolute_time: 0x9a45c45b
Epoch Time:        sec       usec
  Boot    : 0x63237cc2 0x000ed714
  Sleep   : 0x00000000 0x00000000
  Wake    : 0x00000000 0x00000000
  Calendar: 0x63237d27 0x00074af8

Zone info:
  Zone map: 0xfffffe1ab9120000 - 0xfffffe3ab9120000
  . VM    : 0xfffffe1ab9120000 - 0xfffffe1f85dec000
  . RO    : 0xfffffe1f85dec000 - 0xfffffe211f784000
  . GEN0  : 0xfffffe211f784000 - 0xfffffe25ec450000
  . GEN1  : 0xfffffe25ec450000 - 0xfffffe2ab911c000
  . GEN2  : 0xfffffe2ab911c000 - 0xfffffe2f85de8000
  . GEN3  : 0xfffffe2f85de8000 - 0xfffffe3452ab4000
  . DATA  : 0xfffffe3452ab4000 - 0xfffffe3ab9120000
  Metadata: 0xfffffe8fda600000 - 0xfffffe8fe2600000
  Bitmaps : 0xfffffe8fe2600000 - 0xfffffe8ff9dec000

TPIDRx_ELy = {1: 0xfffffe2120a6f808  0: 0x0000000000000002  0ro: 0x00000001dffc11e0 }
CORE 0 PVH locks held: None
CORE 1 PVH locks held: None
CORE 2 PVH locks held: None
CORE 3 PVH locks held: None
CORE 4 PVH locks held: None
CORE 5 PVH locks held: None
CORE 6 PVH locks held: None
CORE 7 PVH locks held: None
CORE 8 PVH locks held: None
CORE 9 PVH locks held: None
CORE 0: PC=0xfffffe0027dab270, LR=0xfffffe0027dab270, FP=0xfffffe100015ff00
CORE 1: PC=0xfffffe0027dab270, LR=0xfffffe0027dab270, FP=0xfffffe1aad54bf00
CORE 2 is the one that panicked. Check the full backtrace for details.
CORE 3: PC=0x000000018ff61d60, LR=0x000000018ff61ae4, FP=0x000000016b27f270
CORE 4: PC=0xfffffe0027dab270, LR=0xfffffe0027dab270, FP=0xfffffe1aad457f00
CORE 5: PC=0x000000018493ad2c, LR=0x000000018493b014, FP=0x000000016f385c60
CORE 6: PC=0xfffffe0027dab270, LR=0xfffffe0027dab270, FP=0xfffffe1aab50ff00
CORE 7: PC=0xfffffe0027dab270, LR=0xfffffe0027dab270, FP=0xfffffe1aad503f00
CORE 8: PC=0xfffffe0027dab270, LR=0xfffffe0027dab270, FP=0xfffffe1aad2abf00
CORE 9: PC=0xfffffe0027dab270, LR=0xfffffe0027dab270, FP=0xfffffe1aad463f00
Compressor Info: 0% of compressed pages limit (OK) and 0% of segments limit (OK) with 0 swapfiles and OK swap space
Panicked task 0xfffffe25eb664ab8: 296 pages, 1 threads: pid 3298: frida-panic
Panicked thread: 0xfffffe2120a6f808, backtrace: 0xfffffe8526a63130, tid: 21454
		  lr: 0xfffffe0027d6e0f0  fp: 0xfffffe8526a631a0
		  lr: 0xfffffe0027d6de98  fp: 0xfffffe8526a63220
		  lr: 0xfffffe0027ed0bc0  fp: 0xfffffe8526a63240
		  lr: 0xfffffe0027ec2270  fp: 0xfffffe8526a632b0
		  lr: 0xfffffe0027ebfe0c  fp: 0xfffffe8526a63370
		  lr: 0xfffffe0027d177f8  fp: 0xfffffe8526a63380
		  lr: 0xfffffe0027d6d820  fp: 0xfffffe8526a63730
		  lr: 0xfffffe00285adbcc  fp: 0xfffffe8526a63750
		  lr: 0xfffffe00285b4bc8  fp: 0xfffffe8526a63790
		  lr: 0xfffffe0027e35e1c  fp: 0xfffffe8526a63930
		  lr: 0xfffffe0027e3d928  fp: 0xfffffe8526a63a90
		  lr: 0xfffffe0027dfa358  fp: 0xfffffe8526a63af0
		  lr: 0xfffffe0027d74980  fp: 0xfffffe8526a63b90
		  lr: 0xfffffe0027d445c8  fp: 0xfffffe8526a63bf0
		  lr: 0xfffffe0027d5f824  fp: 0xfffffe8526a63c90
		  lr: 0xfffffe0027d5fcc4  fp: 0xfffffe8526a63d80
		  lr: 0xfffffe0027eb58f8  fp: 0xfffffe8526a63e50
		  lr: 0xfffffe0027ec01b8  fp: 0xfffffe8526a63f10
		  lr: 0xfffffe0027d177f8  fp: 0xfffffe8526a63f20

last started kext at 689456164: com.apple.filesystems.autofs	3.0 (addr 0xfffffe002719b430, size 5904)
loaded kexts:
com.apple.filesystems.autofs	3.0
com.apple.driver.AppleTopCaseHIDEventDriver	6000.22
com.apple.driver.AppleBiometricServices	1
com.apple.driver.CoreKDL	1
com.apple.driver.DiskImages.ReadWriteDiskImage	493.0.0
com.apple.driver.DiskImages.UDIFDiskImage	493.0.0
com.apple.driver.DiskImages.RAMBackingStore	493.0.0
com.apple.driver.DiskImages.FileBackingStore	493.0.0
com.apple.driver.BCMWLANFirmware4387.Hashstore	1
com.apple.driver.SEPHibernation	1
com.apple.driver.AppleUSBDeviceNCM	5.0.0
com.apple.driver.AppleThunderboltIP	4.0.3
com.apple.driver.ApplePMP	1
com.apple.driver.AppleSmartIO2	1
com.apple.AppleEmbeddedSimpleSPINORFlasher	1
com.apple.driver.AppleCS42L84Audio	600.99
com.apple.driver.AppleSN012776Amp	600.99
com.apple.driver.AppleT6000SOCTuner	1
com.apple.driver.AppleT6000CLPCv3	1
com.apple.driver.AppleFileSystemDriver	3.0.1
com.apple.nke.l2tp	1.9
com.apple.filesystems.tmpfs	1
com.apple.filesystems.nfs	1
com.apple.filesystems.lifs	1
com.apple.filesystems.apfs	2142.40.7
com.apple.IOTextEncryptionFamily	1.0.0
com.apple.filesystems.hfs.kext	627
com.apple.security.BootPolicy	1
com.apple.BootCache	40
com.apple.AppleFSCompression.AppleFSCompressionTypeZlib	1.0.0
com.apple.AppleFSCompression.AppleFSCompressionTypeDataless	1.0.0d1
com.apple.driver.AppleSmartBatteryManager	161.0.0
com.apple.driver.AppleEventLogHandler	1
com.apple.driver.AppleALSColorSensor	1.0.0d1
com.apple.driver.AppleJPEGDriver	5.2.1
com.apple.driver.ApplePMPFirmware	1
com.apple.driver.AppleM68Buttons	1.0.0d1
com.apple.driver.AppleAOPVoiceTrigger	200.4
com.apple.driver.AppleSDXC	3.3.0
com.apple.driver.AppleS5L8960XNCO	1
com.apple.AGXG13X	227.2.31
com.apple.driver.AppleAVD	614
com.apple.driver.AppleAVE2	630.10.0
com.apple.driver.AppleProResHW	225.5.0
com.apple.driver.AppleMobileDispT600X-DCP	140.0
com.apple.driver.AppleSPMIPMU	1.0.1
com.apple.driver.usb.AppleSynopsysUSB40XHCI	1
com.apple.driver.AppleMCDP29XXUpdateSupport	1
com.apple.driver.AppleSamsungSerial	1.0.0d1
com.apple.driver.AppleSerialShim	1
com.apple.driver.AppleDPDisplayTCON	1
com.apple.driver.AppleT6001PMGR	1
com.apple.driver.AppleS8000AES	1
com.apple.driver.AppleS8000DWI	1.0.0d1
com.apple.driver.AppleInterruptControllerV2	1.0.0d1
com.apple.driver.AppleT8110DART	1
com.apple.driver.AppleBluetoothModule	1
com.apple.driver.AppleBCMWLANBusInterfacePCIe	1
com.apple.driver.AppleS5L8920XPWM	1.0.0d1
com.apple.driver.AudioDMAController-T600x	200.21
com.apple.driver.AppleT6000DART	1
com.apple.driver.AppleSPIMC	1
com.apple.driver.AppleS5L8940XI2C	1.0.0d2
com.apple.driver.AppleT6000	1
com.apple.iokit.IOUserEthernet	1.0.1
com.apple.driver.usb.AppleUSBUserHCI	1
com.apple.iokit.IOKitRegistryCompatibility	1
com.apple.iokit.EndpointSecurity	1
com.apple.driver.AppleDiskImages2	198.40.2
com.apple.AppleSystemPolicy	2.0.0
com.apple.nke.applicationfirewall	403
com.apple.kec.InvalidateHmac	1
com.apple.kec.Compression	1
com.apple.kec.AppleEncryptedArchive	1
com.apple.driver.driverkit.serial	6.0.0
com.apple.driver.usb.AppleUSBXHCIPCI	1.2
com.apple.iokit.IOAVBFamily	1100.20
com.apple.plugin.IOgPTPPlugin	1110.3
com.apple.driver.AppleThunderboltDPOutAdapter	8.5.1
com.apple.driver.AppleThunderboltPCIUpAdapter	4.1.1
com.apple.driver.AppleHSBluetoothDriver	6000.22
com.apple.driver.IOBluetoothHIDDriver	9.0.0
com.apple.driver.AppleActuatorDriver	6400.42
com.apple.driver.AppleMultitouchDriver	6400.42
com.apple.driver.AppleHIDKeyboard	231
com.apple.driver.AppleMesaSEPDriver	100.99
com.apple.iokit.IOBiometricFamily	1
com.apple.driver.DiskImages.KernelBacked	493.0.0
com.apple.driver.AppleXsanScheme	3
com.apple.driver.AppleSEPHDCPManager	1.0.1
com.apple.driver.AppleTrustedAccessory	1
com.apple.iokit.AppleSEPGenericTransfer	1
com.apple.driver.usb.networking	5.0.0
com.apple.driver.AppleThunderboltUSBDownAdapter	1.0.4
com.apple.driver.AppleThunderboltPCIDownAdapter	4.1.1
com.apple.driver.AppleThunderboltDPInAdapter	8.5.1
com.apple.driver.AppleThunderboltDPAdapterFamily	8.5.1
com.apple.driver.AppleHIDTransportSPI	6400.40
com.apple.driver.AppleHIDTransport	6400.40
com.apple.driver.AppleInputDeviceSupport	6400.40
com.apple.driver.AppleConvergedIPCOLYBTControl	1
com.apple.driver.AppleConvergedPCI	1
com.apple.driver.AppleBluetoothDebug	1
com.apple.driver.AppleDCPDPTXProxy	1.0.0
com.apple.driver.DCPDPFamilyProxy	1
com.apple.driver.AppleDiagnosticDataAccessReadOnly	1.0.0
com.apple.driver.AppleBTM	1.0.1
com.apple.driver.AppleCSEmbeddedAudio	600.99
com.apple.driver.ApplePassthroughPPM	3.0
com.apple.nke.ppp	1.9
com.apple.driver.AppleBSDKextStarter	3
com.apple.kext.triggers	1.0
com.apple.driver.IOHIDPowerSource	1
com.apple.filesystems.hfs.encodings.kext	1
com.apple.driver.AppleSyntheticGameController	10.2.5
com.apple.iokit.IONVMeFamily	2.1.0
com.apple.driver.AppleNANDConfigAccess	1.0.0
com.apple.driver.AppleAOPAudio	200.45
com.apple.driver.AppleEmbeddedAudio	600.99
com.apple.iokit.AppleARMIISAudio	200.8
com.apple.driver.AppleSPU	1
com.apple.AGXFirmwareKextG13XRTBuddy	227.2.31
com.apple.AGXFirmwareKextRTBuddy64	227.2.31
com.apple.iokit.IOGPUFamily	65.0.21
com.apple.driver.DCPAVFamilyProxy	1
com.apple.iokit.IOMobileGraphicsFamily-DCP	343.0.0
com.apple.driver.AppleDCP	1
com.apple.driver.AppleFirmwareKit	1
com.apple.iokit.IOMobileGraphicsFamily	343.0.0
com.apple.driver.AppleStockholmControl	1.0.0
com.apple.driver.AppleDialogPMU	1.0.1
com.apple.driver.AppleSPMI	1.0.1
com.apple.driver.AppleUSBXDCIARM	1.0
com.apple.driver.AppleUSBXDCI	1.0
com.apple.iokit.IOUSBDeviceFamily	2.0.0
com.apple.driver.usb.AppleSynopsysUSBXHCI	1
com.apple.driver.usb.AppleUSBXHCI	1.2
com.apple.driver.AppleEmbeddedUSBHost	1
com.apple.driver.usb.AppleUSBHub	1.2
com.apple.driver.usb.AppleUSBHostCompositeDevice	1.2
com.apple.driver.AppleT6000TypeCPhy	1
com.apple.driver.AppleT8103TypeCPhy	1
com.apple.driver.AppleHPM	3.4.4
com.apple.driver.AppleSART	1
com.apple.driver.ApplePMGR	1
com.apple.driver.AppleARMWatchdogTimer	1
com.apple.driver.AppleDisplayCrossbar	1.0.0
com.apple.iokit.IODisplayPortFamily	1.0.0
com.apple.driver.AppleTypeCPhy	1
com.apple.driver.AppleThunderboltNHI	7.2.81
com.apple.driver.AppleT6000PCIeC	1
com.apple.iokit.IOThunderboltFamily	9.3.3
com.apple.driver.ApplePIODMA	1
com.apple.driver.AppleT600xPCIe	1
com.apple.driver.AppleMultiFunctionManager	1
com.apple.driver.AppleBluetoothDebugService	1
com.apple.driver.AppleBCMWLANCore	1.0.0
com.apple.iokit.IO80211Family	1200.13.0
com.apple.driver.IOImageLoader	1.0.0
com.apple.driver.AppleOLYHAL	1
com.apple.driver.corecapture	1.0.4
com.apple.driver.AppleEmbeddedPCIE	1
com.apple.driver.AppleMCA2-T600x	701.14
com.apple.driver.AppleEmbeddedAudioLibs	200.5
com.apple.driver.AppleFirmwareUpdateKext	1
com.apple.driver.AppleH13CameraInterface	7.104.0
com.apple.driver.AppleH10PearlCameraInterface	17.0.8
com.apple.driver.AppleGPIOICController	1.0.2
com.apple.driver.AppleFireStormErrorHandler	1
com.apple.driver.AppleMobileApNonce	1
com.apple.driver.usb.AppleUSBHostPacketFilter	1.0
com.apple.iokit.IOTimeSyncFamily	1110.3
com.apple.driver.DiskImages	493.0.0
com.apple.iokit.IOGraphicsFamily	597
com.apple.iokit.IOBluetoothSerialManager	9.0.0
com.apple.iokit.IOBluetoothHostControllerUSBTransport	9.0.0
com.apple.iokit.IOBluetoothHostControllerUARTTransport	9.0.0
com.apple.iokit.IOBluetoothHostControllerTransport	9.0.0
com.apple.driver.IOBluetoothHostControllerPCIeTransport	9.0.0
com.apple.iokit.IOBluetoothFamily	9.0.0
com.apple.iokit.CSRBluetoothHostControllerUSBTransport	9.0.0
com.apple.iokit.BroadcomBluetoothHostControllerUSBTransport	9.0.0
com.apple.driver.AppleSSE	1.0
com.apple.driver.AppleSEPKeyStore	2
com.apple.driver.AppleUSBTDM	547
com.apple.iokit.IOUSBMassStorageDriver	232
com.apple.iokit.IOPCIFamily	2.9
com.apple.iokit.IOSCSIBlockCommandsDevice	476
com.apple.iokit.IOSCSIArchitectureModelFamily	476
com.apple.driver.AppleRSMChannel	1
com.apple.iokit.IORSMFamily	1
com.apple.driver.AppleIPAppender	1.0
com.apple.driver.AppleFDEKeyStore	28.30
com.apple.driver.AppleEffaceableStorage	1.0
com.apple.driver.AppleCredentialManager	1.0
com.apple.driver.KernelRelayHost	1
com.apple.iokit.IOUSBHostFamily	1.2
com.apple.driver.AppleUSBHostMergeProperties	1.2
com.apple.driver.usb.AppleUSBCommon	1.0
com.apple.driver.AppleSMC	3.1.9
com.apple.driver.RTBuddy	1.0.0
com.apple.driver.AppleEmbeddedTempSensor	1.0.0
com.apple.driver.AppleARMPMU	1.0
com.apple.iokit.IOAccessoryManager	1.0.0
com.apple.driver.AppleOnboardSerial	1.0
com.apple.iokit.IOSkywalkFamily	1.0
com.apple.driver.mDNSOffloadUserClient	1.0.1b8
com.apple.iokit.IONetworkingFamily	3.4
com.apple.iokit.IOSerialFamily	11
com.apple.driver.AppleSEPManager	1.0.1
com.apple.driver.AppleA7IOP	1.0.2
com.apple.driver.IOSlaveProcessor	1
com.apple.driver.AppleBiometricSensor	2
com.apple.iokit.IOHIDFamily	2.0.0
com.apple.driver.AppleANELoadBalancer	6.81.2
com.apple.driver.AppleH11ANEInterface	6.81.1
com.apple.AUC	1.0
com.apple.iokit.IOAVFamily	1.0.0
com.apple.iokit.IOHDCPFamily	1.0.0
com.apple.iokit.IOCECFamily	1
com.apple.iokit.IOAudio2Family	1.0
com.apple.driver.AppleIISController	200.2
com.apple.driver.AppleAudioClockLibs	200.5
com.apple.driver.AppleM2ScalerCSCDriver	265.0.0
com.apple.iokit.IOSurface	334.0.1
com.apple.driver.IODARTFamily	1
com.apple.driver.FairPlayIOKit	68.19.0
com.apple.driver.AppleARMPlatform	1.0.2
com.apple.iokit.IOSlowAdaptiveClockingFamily	1.0.0
com.apple.iokit.IOReportFamily	47
com.apple.security.quarantine	4
com.apple.security.sandbox	300.0
com.apple.iokit.IOStorageFamily	2.1
com.apple.kext.AppleMatch	1.0.0d1
com.apple.driver.AppleMobileFileIntegrity	1.0.5
com.apple.iokit.CoreAnalyticsFamily	1
com.apple.security.AppleImage4	5.0.0
com.apple.kext.CoreTrust	1
com.apple.iokit.IOCryptoAcceleratorFamily	1.0.1
com.apple.kec.pthread	1
com.apple.kec.Libm	1
com.apple.kec.corecrypto	12.0



** Stackshot Succeeded ** Bytes Traced 411128 (Uncompressed 1062752) **
Writing local cores...

Beginning dump of panic region of size 0x67cb0
100..
100..Recorded panic region in corefile at offset 0xb000, compressed to 388743 bytes

Beginning coredump of kernel
10..
20..
41..
51..
61..
71..
81..
95..
100..Done
Coredump complete of kernel, dumped 20691 segments (1714995200 bytes), 10 threads (2880 bytes) overall uncompressed file length 1716502568 bytes.
Core dump took 71302057864 cycles
 Compressed file length is 508280255 bytes

Beginning coredump of DCPEXT1-coproc
22..
34..
95..
100..Done
Coredump complete of DCPEXT1-coproc, dumped 20 segments (27554352 bytes), 1 threads (288 bytes) overall uncompressed file length 27570996 bytes.
Core dump took 6668919932 cycles
 Compressed file length is 4904093 bytes

Beginning coredump of DCP-coproc
19..
29..
82..
97..
100..Done
Coredump complete of DCP-coproc, dumped 24 segments (31830576 bytes), 1 threads (288 bytes) overall uncompressed file length 31847220 bytes.
Core dump took 7834255430 cycles
 Compressed file length is 10532979 bytes

Beginning coredump of DCPEXT0-coproc
22..
34..
95..
100..Done
Coredump complete of DCPEXT0-coproc, dumped 20 segments (27554352 bytes), 1 threads (288 bytes) overall uncompressed file length 27570996 bytes.
Core dump took 6683854454 cycles
 Compressed file length is 4897591 bytes

Beginning coredump of ACIO1-coproc
Errors: Skipped ACIO1 coredump because ...
            ... crashlog endpoint was not found.
            ... IOP was not running.
            ... coredump segment information was not received.
coredump_init returned KERN_NODE_DOWN, skipping this core

Beginning coredump of ACIO2-coproc
Errors: Skipped ACIO2 coredump because ...
            ... crashlog endpoint was not found.
            ... IOP was not running.
            ... coredump segment information was not received.
coredump_init returned KERN_NODE_DOWN, skipping this core

Beginning coredump of ACIO0-coproc
60..
92..
100..Done
Coredump complete of ACIO0-coproc, dumped 3 segments (311344 bytes), 1 threads (84 bytes) overall uncompressed file length 327988 bytes.
Core dump took 4446465336 cycles
 Compressed file length is 244632 bytes

Beginning coredump of GFX-coproc
32..
74..
97..
100..Done
Coredump complete of GFX-coproc, dumped 5 segments (1131216 bytes), 1 threads (288 bytes) overall uncompressed file length 1147860 bytes.
Core dump took 5193557461 cycles
 Compressed file length is 297865 bytes
```
