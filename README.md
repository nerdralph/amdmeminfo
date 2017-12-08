#amdmeminfo


Get GDDR5 memory information from AMD Radeon GPUs.  Includes memory timing.

---

###Installation

* Download and unzip or git clone: `git clone https://github.com/sling00/amdmeminfo`
* `cd amdmeminfo`
* Edit `Makefile` to specify AMDAPPSDK path or install OpenCL library: `sudo apt-get install ocl-icd-opencl-dev `
* Install Linux PCI utilities: `sudo apt-get install libpci-dev`
* `make`
* Optional: `sudo cp amdmeminfo /usr/local/bin`

---

###Usage

`./amdmeminfo [options]`

Options:
* `-c` `--memconfig` Output memory configuration and timing
* `-h` `--help` Display Help
* `-o` `--opencl` Order by OpenCL ID (cgminer/sgminer GPU order)
* `-q` `--quiet` Only output results
* `-s` `--short` Short form output - 1 GPU/line - `<OpenCLID>:<PCI Bus.Dev.Func>:<GPU Type>:<Memory Type>`
* `--use-stderr` Output errors to stderr

