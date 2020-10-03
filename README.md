# GBTB - Game Boy Text Builder
A simple program to convert plain text to GBDK compatible C arrays for use in Game Boy development.

# Usage
There are a few options for running the program.
### Running With No Input Files
If you don't have text formatted in an input file, you can simply run the program and follow the prompts to generate an output file.
### Running With Input Files
The more optimal way to use GBTB is to create a pre-formatted file with your text, which will be interpreted by GBTB and converted to a C file directly, with no hassle to you.  
Save your text and all properties the output C file should have in the following way.
```
arrayname  
filename  
conversionmode  
text  
```
You don't need to include the file extension! a `.c` ending will be automatically appended to your file name by GBTB.   
The conversion modes are:
```
0 = font_min  
1 = font_italic  
2 = font_spect  
3 = font_ibm  
```
`font_ibm_full` is currently not supported.
You can see an example in the `input_example.txt` file.
#### Using run.bat
On Windows systems, a batch files is provided to run the program, simply run the batch file and enter the file name, including the extension.
#### Running from the Command Line / Terminal
If you want to run GBTB from the command line directly, using an input file, you can use `GBTB.exe < input_file.txt`.

# Building GBTB
To build GBTB from the source, use the provided `make.bat` make file, or compile the `gbtb.cpp` file by yourself.
