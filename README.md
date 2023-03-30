memErase 1.2.4 2023

This tool will erase the memory deeply. So no one can retrieve the data.

In this tool, there are four methods to erase data from a mass storage device
1. Copy and Paste a file to the destination to rewrite the existing data
2. Zero filling in all the memory sectors
3. One filling in all the memory sectors
4. Random filling in all the memory sectors

Motivation
----------
This tool is created to erase Music, Fake data, and Adult data around us like, Photos, Videos, Voice, PDFs, and any kind of file format.

Usage
-----
memerase -f <Input file> -i <Number of iterations> : This will take a while. Deep memory overwriting.
memerase -o : Fill all sectors with zeros
memerase -l : Fill all sectors with once
memerase -r : Fill all sectors with random

How it works 
------------
Memory overwriting occurs when data is written to a memory location containing data. When data is written to a memory location, it replaces the previous data stored there. If the new data is larger than the space originally allocated for it, it may overwrite data in adjacent memory locations as well.
