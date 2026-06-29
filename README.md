# VB introduction
VB Features:

- ISO functions
- Installer
- System Recovery
- .sms and .wss data

# What Is VB

VB stands for **V**irutalization type **B**lue, our first version of the VB, this particular system uses Ocale NVMware, which will be shown in the update 1.3. Virutalization type Blue has a lot of build in features: Infosoft sync(depending on if you have Panels or LumaOS)
The system uses incremented function system, here is a listed bash system, that you can get started by installing the repo(FOR BEST PRACTICE: INSTALL IT AFTER THE 1.3 UPDATE)

```bash
# Step 1: Clone the repository to your computer
git clone https://github.com

# Step 2: Move into the new project folder
cd VB---Open-Source-Virtual-machine
# Step 3: Run the install command (Choose ONE from the list below)

```

Python
```bash
pip install
```

```bash
make && sudo make install
```


since we have the function, here is then the note: there are build in functions, VB VM is a repo of Infosoft's Virtualization platforms, so VB is not VM itself, it has Infosoft VM, but they all contain the VB Bash Language:

```bash
infosoft--amd-- create: vm, "YourVMName", "Version", Filename
```
# VB language overview

The VB language, has a lot of type syntax's, for example, if you are creating a VM, then you can write the following script:

```bash
infosoft--[CPU_Manufacture]-- create: vm, "YourVMName", "Version", Filename
```

If you want to initialize dockerfiles:

```bash
infosoft--[CPU_Manufacture]-- dockerfile: init: "Link", "Name"
```
if you want to get the ISO binary code:

```bash
infosoft--[.]iso-- bin: rewrite
```

# Install Command(for Panels OS or lumaOS users)
```bash
C:\Dive:intall * %USERNAME% {*} "LINK"
echo off
```

# Software's
*Video editors(in VB):*
- Infosoft Cut Pro Free
- Infosoft Prode editor
- Infosoft Motion Graphics
- *VM's:*
- Ocale NVMware (build by Infosoft)
- VB language
- Infosoft sandboxed
- *Operating systems:*
- Panels(Old - Ocale)
- LumaOS(Old - Empire Studios)
- VBOS
- *Infosoft Games:*
- Fire Asthema
- Lord of Kings
- Fire hell

install Fire asthema for x32 bit systems:
```infosoftlng
infosoft--loader:["SOFTWARENAME"], "Link": Download--x32{*}override
```

All of the software can be downloaded with the following infosoft language:
```infosoftlng
infosoft--loader:["SOFTWARENAME"], "Link": Download
```

# Requirements(Written in Infosoft script)
You need specific requirements, depending on your ram, and specific needs. If your computer is new, then you can skip this part, and you can download Ocale NVMware uptop Video editors, Sandboxed systems(rest of the VM) require an specific ammount of Hardware intuition, for that you need the following requirement, feel free to get an higher version:

AMD Ryzen 7 5825U with Radeon Graphics, 2000 Mhz, 8 Core(s), 16 Logical Processor(s) 
x64 -> x86 for other applications(Infosoft Cut Pro or Infosoft sandboxed)

if you want to bypass it, you can run the command, which restricts some performence systems for different applications from Infosoft:
```bash
Infosoft--requirement[bypass:true]: [Your-CPU-Information]-[Your-GPU-Information]-[RAM]-[PSU]-[OS]-[MOTHERBOARD]
```
thank you!

## Project Status

VB is currently under active development.

Many core components (installer, VM system, app integration) are being developed in parallel.

Due to the ecosystem scale:
- updates are released less frequently
- but include large system-wide changes

⚠ Full installation and deployment will be available starting from version 1.3.

# Rights + Disclaimer

**Right:**
(C) 2020 -> 2026 Infosoft Studios, Ocale-Prime(2025 -> 2026)

**Disclaimer**
Please use the software with cautious. Any System failure or problems won't be our problem, Please accept to the HOC license digital 
Any Stereo infection caused by malware or System curruption(e.g. Data loss), can be backed up with an Microsoft or Apple or Google account.

*Code disclaimer*
Running individuel codes by themself is not **recommended, because it can cause system curruption(based on some code) or data loss**. We recommend trying individuel code, on the Infosoft Private Xarobot servers or IX Servers. **Please do not run the code in a VM**. Infosoft sandbxoed utility is a tool that you can *only run specific codes in Infosoft Sandboxed or much powerful type Ocale NVMware*. This ensures that you code run is safe, and does not currupt any other types(VBOX or vmware or QEMU). Thank you very much for understanding!
