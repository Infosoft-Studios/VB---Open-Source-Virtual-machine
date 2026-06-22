<#
    init.ps1
    VM Initialization Script for Pre‑Installed Windows 10/11 Pro Images
    Purpose:
        - Collect system information
        - Detect virtualization environment
        - Prepare environment variables
        - Log results for user transparency
#>

Write-Host "=== [INIT] Starting VM initialization ==="

# --- Detect OS Version ---
$osInfo = Get-CimInstance Win32_OperatingSystem
$osName = $osInfo.Caption
$osVersion = $osInfo.Version

Write-Host "[INIT] Operating System: $osName"
Write-Host "[INIT] Version: $osVersion"

# --- Detect Windows Edition ---
$edition = (Get-ItemProperty "HKLM:\SOFTWARE\Microsoft\Windows NT\CurrentVersion").EditionID
Write-Host "[INIT] Edition: $edition"

# --- Detect Architecture ---
$arch = $env:PROCESSOR_ARCHITECTURE
Write-Host "[INIT] Architecture: $arch"

# --- Detect Virtualization Environment ---
$cs = Get-CimInstance Win32_ComputerSystem
$vmModel = $cs.Model
$vmManufacturer = $cs.Manufacturer

Write-Host "[INIT] Virtualization Model: $vmModel"
Write-Host "[INIT] Manufacturer: $vmManufacturer"

# --- Detect if running inside common hypervisors ---
$hypervisor = switch -Wildcard ($vmModel) {
    "*VirtualBox*" { "VirtualBox" }
    "*VMware*"     { "VMware" }
    "*KVM*"        { "KVM" }
    "*Hyper-V*"    { "Hyper-V" }
    "*QEMU*"       { "QEMU" }
    default        { "Unknown / Bare Metal" }
}

Write-Host "[INIT] Hypervisor Detected: $hypervisor"

# --- Prepare Environment Variables (example) ---
Write-Host "[INIT] Setting environment variables..."
[Environment]::SetEnvironmentVariable("INFOSOFT_VM", "true", "Machine")
[Environment]::SetEnvironmentVariable("INFOSOFT_HYPERVISOR", $hypervisor, "Machine")

# --- Optional: Create a log file ---
$logPath = "C:\VM-Init-Log.txt"
Write-Host "[INIT] Writing log to $logPath"

@"
VM Initialization Log
=====================
OS: $osName
Version: $osVersion
Edition: $edition
Architecture: $arch
Model: $vmModel
Manufacturer: $vmManufacturer
Hypervisor: $hypervisor
Timestamp: $(Get-Date)
"@ | Out-File -Encoding UTF8 $logPath

Write-Host "=== [INIT] Initialization complete ==="
