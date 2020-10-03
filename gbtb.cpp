#include <iostream>
#include <string>
#include <fstream>
#include <vector>

std::string convert_text(int mode, std::string inputText, std::string arrayName)
{
    std::string ret;
    ret += "/*\nFile generated with GBTD\n*/\n\n";
    ret += "#define " + arrayName + "Width " + std::to_string(inputText.size()) + "\n\n";
    ret += "//" + arrayName + "\n";
    ret += "unsigned char " + arrayName + "[] = \n{\n";

    switch (mode)
    {
    case 0:
        // font_min
        for(auto &elem : inputText)
        {
            switch (elem)
            {
            // Row 1
            case '0':
                ret += "0x02";
                break;
            case '1':
                ret += "0x03";
                break;
            case '2':
                ret += "0x04";
                break;
            case '3':
                ret += "0x05";
                break;
            case '4':
                ret += "0x06";
                break;
            case '5':
                ret += "0x07";
                break;
            case '6':
                ret += "0x08";
                break;
            case '7':
                ret += "0x09";
                break;
            case '8':
                ret += "0x0A";
                break;
            case '9':
                ret += "0x0B";
                break;
            case 'A':
                ret += "0x0C";
                break;
            case 'B':
                ret += "0x0D";
                break;
            case 'C':
                ret += "0x0E";
                break;
            case 'D':
                ret += "0x0F";
                break;
            // Row 2
            case 'E':
                ret += "0x10";
                break;
            case 'F':
                ret += "0x11";
                break;
            case 'G':
                ret += "0x12";
                break;
            case 'H':
                ret += "0x13";
                break;
            case 'I':
                ret += "0x14";
                break;
            case 'J':
                ret += "0x15";
                break;
            case 'K':
                ret += "0x16";
                break;
            case 'L':
                ret += "0x17";
                break;
            case 'M':
                ret += "0x18";
                break;
            case 'N':
                ret += "0x19";
                break;
            case 'O':
                ret += "0x1A";
                break;
            case 'P':
                ret += "0x1B";
                break;
            case 'Q':
                ret += "0x1C";
                break;
            case 'R':
                ret += "0x1D";
                break;
            case 'S':
                ret += "0x1E";
                break;
            case 'T':
                ret += "0x1F";
                break;
            // Row 3
            case 'U':
                ret += "0x20";
                break;
            case 'V':
                ret += "0x21";
                break;
            case 'W':
                ret += "0x22";
                break;
            case 'X':
                ret += "0x23";
                break;
            case 'Y':
                ret += "0x24";
                break;
            case 'Z':
                ret += "0x25";
                break;
            // lower case letter support
            case 'a':
                ret += "0x0C";
                break;
            case 'b':
                ret += "0x0D";
                break;
            case 'c':
                ret += "0x0E";
                break;
            case 'd':
                ret += "0x0F";
                break;
            // Row 2
            case 'e':
                ret += "0x10";
                break;
            case 'f':
                ret += "0x11";
                break;
            case 'g':
                ret += "0x12";
                break;
            case 'h':
                ret += "0x13";
                break;
            case 'i':
                ret += "0x14";
                break;
            case 'j':
                ret += "0x15";
                break;
            case 'k':
                ret += "0x16";
                break;
            case 'l':
                ret += "0x17";
                break;
            case 'm':
                ret += "0x18";
                break;
            case 'n':
                ret += "0x19";
                break;
            case 'o':
                ret += "0x1A";
                break;
            case 'p':
                ret += "0x1B";
                break;
            case 'q':
                ret += "0x1C";
                break;
            case 'r':
                ret += "0x1D";
                break;
            case 's':
                ret += "0x1E";
                break;
            case 't':
                ret += "0x1F";
                break;
            // Row 3
            case 'u':
                ret += "0x20";
                break;
            case 'v':
                ret += "0x21";
                break;
            case 'w':
                ret += "0x22";
                break;
            case 'x':
                ret += "0x23";
                break;
            case 'y':
                ret += "0x24";
                break;
            case 'z':
                ret += "0x25";
                break;
            // Generic character
            case ' ':
                ret += "0x00 \n";
            default:
                ret += "0x00";
                break;
            }
            ret +=", ";
        }
        break;
    case 1:
        // font_italic
        for(auto &elem : inputText)
        {
            switch (elem)
            {
            // Row 1
            case '!':
                ret += "0x02";
                break;
            case '"':
                ret += "0x03";
                break;
            case '#':
                ret += "0x04";
                break;
            case '$':
                ret += "0x05";
                break;
            case '%':
                ret += "0x06";
                break;
            case '&':
                ret += "0x07";
                break;
            case '\'':
                ret += "0x08";
                break;
            case '(':
                ret += "0x09";
                break;
            case ')':
                ret += "0x0A";
                break;
            case '*':
                ret += "0x0B";
                break;
            case '+':
                ret += "0x0C";
                break;
            case ',':
                ret += "0x0D";
                break;
            case '-':
                ret += "0x0E";
                break;
            case '.':
                ret += "0x0F";
                break;
            // Row 2
            case '/':
                ret += "0x10";
                break;
            case '0':
                ret += "0x11";
                break;
            case '1':
                ret += "0x12";
                break;
            case '2':
                ret += "0x13";
                break;
            case '3':
                ret += "0x14";
                break;
            case '4':
                ret += "0x15";
                break;
            case '5':
                ret += "0x16";
                break;
            case '6':
                ret += "0x17";
                break;
            case '7':
                ret += "0x18";
                break;
            case '8':
                ret += "0x19";
                break;
            case '9':
                ret += "0x1A";
                break;
            case ':':
                ret += "0x1B";
                break;
            case ';':
                ret += "0x1C";
                break;
            case '<':
                ret += "0x1D";
                break;
            case '=':
                ret += "0x1E";
                break;
            case '>':
                ret += "0x1F";
                break;
             // Row 3
            case '?':
                ret += "0x20";
                break;
            case '@':
                ret += "0x21";
                break;
            case 'A':
                ret += "0x22";
                break;
            case 'B':
                ret += "0x23";
                break;
            case 'C':
                ret += "0x24";
                break;
            case 'D':
                ret += "0x25";
                break;
            case 'E':
                ret += "0x26";
                break;
            case 'F':
                ret += "0x27";
                break;
            case 'G':
                ret += "0x28";
                break;
            case 'H':
                ret += "0x29";
                break;
            case 'I':
                ret += "0x2A";
                break;
            case 'J':
                ret += "0x2B";
                break;
            case 'K':
                ret += "0x2C";
                break;
            case 'L':
                ret += "0x2D";
                break;
            case 'M':
                ret += "0x2E";
                break;
            case 'N':
                ret += "0x2F";
                break;
            // Row 4
            case 'O':
                ret += "0x30";
                break;
            case 'P':
                ret += "0x31";
                break;
            case 'Q':
                ret += "0x32";
                break;
            case 'R':
                ret += "0x33";
                break;
            case 'S':
                ret += "0x34";
                break;
            case 'T':
                ret += "0x35";
                break;
            case 'U':
                ret += "0x36";
                break;
            case 'V':
                ret += "0x37";
                break;
            case 'W':
                ret += "0x38";
                break;
            case 'X':
                ret += "0x39";
                break;
            case 'Y':
                ret += "0x3A";
                break;
            case 'Z':
                ret += "0x3B";
                break;
            case '[':
                ret += "0x3C";
                break;
            case '\\':
                ret += "0x3D";
                break;
            case ']':
                ret += "0x3E";
                break;
            case '^':
                // TODO change symbol eventually
                // Ouputs Up Arrow! 
                ret += "0x3F";
                break;
            // Row 5
            case 'a':
                ret += "0x40";
                break;
            case 'b':
                ret += "0x41";
                break;
            case 'c':
                ret += "0x42";
                break;
            case 'd':
                ret += "0x43";
                break;
            case 'e':
                ret += "0x44";
                break;
            case 'f':
                ret += "0x45";
                break;
            case 'g':
                ret += "0x46";
                break;
            case 'h':
                ret += "0x47";
                break;
            case 'i':
                ret += "0x48";
                break;
            case 'j':
                ret += "0x49";
                break;
            case 'k':
                ret += "0x4A";
                break;
            case 'l':
                ret += "0x4B";
                break;
            case 'm':
                ret += "0x4C";
                break;
            case 'n':
                ret += "0x4D";
                break;
            case 'o':
                ret += "0x4E";
                break;
            case 'p':
                ret += "0x4F";
                break;
            // Row 6
            case 'q':
                ret += "0x50";
                break;
            case 'r':
                ret += "0x51";
                break;
            case 's':
                ret += "0x52";
                break;
            case 't':
                ret += "0x53";
                break;
            case 'u':
                ret += "0x54";
                break;
            case 'v':
                ret += "0x55";
                break;
            case 'w':
                ret += "0x56";
                break;
            case 'x':
                ret += "0x57";
                break;
            case 'y':
                ret += "0x58";
                break;
            case 'z':
                ret += "0x59";
                break;
            case '{':
                ret += "0x5A";
                break;
            case '|':
                ret += "0x5B";
                break;
            case '}':
                ret += "0x5C";
                break;
            // Generic character
            case ' ':
                ret += "0x00 \n";
            default:
                ret += "0x00";
                break;
            }
            ret +=", ";
        }
        break;
    case 2:
        // font_spect
        for(auto &elem : inputText)
        {
            switch (elem)
            {
            // Row 1
            case '!':
                ret += "0x02";
                break;
            case '"':
                ret += "0x03";
                break;
            case '#':
                ret += "0x04";
                break;
            case '$':
                ret += "0x05";
                break;
            case '%':
                ret += "0x06";
                break;
            case '&':
                ret += "0x07";
                break;
            case '\'':
                ret += "0x08";
                break;
            case '(':
                ret += "0x09";
                break;
            case ')':
                ret += "0x0A";
                break;
            case '*':
                ret += "0x0B";
                break;
            case '+':
                ret += "0x0C";
                break;
            case ',':
                ret += "0x0D";
                break;
            case '-':
                ret += "0x0E";
                break;
            case '.':
                ret += "0x0F";
                break;
            // Row 2
            case '/':
                ret += "0x10";
                break;
            case '0':
                ret += "0x11";
                break;
            case '1':
                ret += "0x12";
                break;
            case '2':
                ret += "0x13";
                break;
            case '3':
                ret += "0x14";
                break;
            case '4':
                ret += "0x15";
                break;
            case '5':
                ret += "0x16";
                break;
            case '6':
                ret += "0x17";
                break;
            case '7':
                ret += "0x18";
                break;
            case '8':
                ret += "0x19";
                break;
            case '9':
                ret += "0x1A";
                break;
            case ':':
                ret += "0x1B";
                break;
            case ';':
                ret += "0x1C";
                break;
            case '<':
                ret += "0x1D";
                break;
            case '=':
                ret += "0x1E";
                break;
            case '>':
                ret += "0x1F";
                break;
             // Row 3
            case '?':
                ret += "0x20";
                break;
            case '@':
                ret += "0x21";
                break;
            case 'A':
                ret += "0x22";
                break;
            case 'B':
                ret += "0x23";
                break;
            case 'C':
                ret += "0x24";
                break;
            case 'D':
                ret += "0x25";
                break;
            case 'E':
                ret += "0x26";
                break;
            case 'F':
                ret += "0x27";
                break;
            case 'G':
                ret += "0x28";
                break;
            case 'H':
                ret += "0x29";
                break;
            case 'I':
                ret += "0x2A";
                break;
            case 'J':
                ret += "0x2B";
                break;
            case 'K':
                ret += "0x2C";
                break;
            case 'L':
                ret += "0x2D";
                break;
            case 'M':
                ret += "0x2E";
                break;
            case 'N':
                ret += "0x2F";
                break;
            // Row 4
            case 'O':
                ret += "0x30";
                break;
            case 'P':
                ret += "0x31";
                break;
            case 'Q':
                ret += "0x32";
                break;
            case 'R':
                ret += "0x33";
                break;
            case 'S':
                ret += "0x34";
                break;
            case 'T':
                ret += "0x35";
                break;
            case 'U':
                ret += "0x36";
                break;
            case 'V':
                ret += "0x37";
                break;
            case 'W':
                ret += "0x38";
                break;
            case 'X':
                ret += "0x39";
                break;
            case 'Y':
                ret += "0x3A";
                break;
            case 'Z':
                ret += "0x3B";
                break;
            case '[':
                ret += "0x3C";
                break;
            case '\\':
                ret += "0x3D";
                break;
            case ']':
                ret += "0x3E";
                break;
            case '^':
                ret += "0x3F";
                break;
            // Row 5
            case '_':
                ret += "0x40";
                break;
            /*
            TODO: Implement fix to allow this character to be inputted
            case '£':
                ret += "0x41";
                break;
            */
            case 'a':
                ret += "0x42";
                break;
            case 'b':
                ret += "0x43";
                break;
            case 'c':
                ret += "0x44";
                break;
            case 'd':
                ret += "0x45";
                break;
            case 'e':
                ret += "0x46";
                break;
            case 'f':
                ret += "0x47";
                break;
            case 'g':
                ret += "0x48";
                break;
            case 'h':
                ret += "0x49";
                break;
            case 'i':
                ret += "0x4A";
                break;
            case 'j':
                ret += "0x4B";
                break;
            case 'k':
                ret += "0x4C";
                break;
            case 'l':
                ret += "0x4D";
                break;
            case 'm':
                ret += "0x4E";
                break;
            case 'n':
                ret += "0x4F";
                break;
            // Row 6
            case 'o':
                ret += "0x50";
                break;
            case 'p':
                ret += "0x51";
                break;
            case 'q':
                ret += "0x52";
                break;
            case 'r':
                ret += "0x53";
                break;
            case 's':
                ret += "0x54";
                break;
            case 't':
                ret += "0x55";
                break;
            case 'u':
                ret += "0x56";
                break;
            case 'v':
                ret += "0x57";
                break;
            case 'w':
                ret += "0x58";
                break;
            case 'x':
                ret += "0x59";
                break;
            case 'y':
                ret += "0x5A";
                break;
            case 'z':
                ret += "0x5B";
                break;
            case '{':
                ret += "0x5C";
                break;
            case '|':
                ret += "0x5D";
                break;
            case '}':
                ret += "0x5E";
                break;
            case '~':
                ret += "0x5F";
                break;
            // Row 7
            /*
            TODO: Implement fix to allow this character to be inputted
            case '©':
                ret += "0x60";
                break;
            */
            // Generic character
            case ' ':
                ret += "0x00 \n";
            default:
                ret += "0x00";
                break;
            }
            ret +=", ";
        }
        break;
    case 3:
        // font_ibm
        for(auto &elem : inputText)
        {
            switch (elem)
            {
            // Row 1
            case '!':
                ret += "0x02";
                break;
            case '"':
                ret += "0x03";
                break;
            case '#':
                ret += "0x04";
                break;
            case '$':
                ret += "0x05";
                break;
            case '%':
                ret += "0x06";
                break;
            case '&':
                ret += "0x07";
                break;
            case '\'':
                ret += "0x08";
                break;
            case '(':
                ret += "0x09";
                break;
            case ')':
                ret += "0x0A";
                break;
            case '*':
                ret += "0x0B";
                break;
            case '+':
                ret += "0x0C";
                break;
            case ',':
                ret += "0x0D";
                break;
            case '-':
                ret += "0x0E";
                break;
            case '.':
                ret += "0x0F";
                break;
            // Row 2
            case '/':
                ret += "0x10";
                break;
            case '0':
                ret += "0x11";
                break;
            case '1':
                ret += "0x12";
                break;
            case '2':
                ret += "0x13";
                break;
            case '3':
                ret += "0x14";
                break;
            case '4':
                ret += "0x15";
                break;
            case '5':
                ret += "0x16";
                break;
            case '6':
                ret += "0x17";
                break;
            case '7':
                ret += "0x18";
                break;
            case '8':
                ret += "0x19";
                break;
            case '9':
                ret += "0x1A";
                break;
            case ':':
                ret += "0x1B";
                break;
            case ';':
                ret += "0x1C";
                break;
            case '<':
                ret += "0x1D";
                break;
            case '=':
                ret += "0x1E";
                break;
            case '>':
                ret += "0x1F";
                break;
             // Row 3
            case '?':
                ret += "0x20";
                break;
            case '@':
                ret += "0x21";
                break;
            case 'A':
                ret += "0x22";
                break;
            case 'B':
                ret += "0x23";
                break;
            case 'C':
                ret += "0x24";
                break;
            case 'D':
                ret += "0x25";
                break;
            case 'E':
                ret += "0x26";
                break;
            case 'F':
                ret += "0x27";
                break;
            case 'G':
                ret += "0x28";
                break;
            case 'H':
                ret += "0x29";
                break;
            case 'I':
                ret += "0x2A";
                break;
            case 'J':
                ret += "0x2B";
                break;
            case 'K':
                ret += "0x2C";
                break;
            case 'L':
                ret += "0x2D";
                break;
            case 'M':
                ret += "0x2E";
                break;
            case 'N':
                ret += "0x2F";
                break;
            // Row 4
            case 'O':
                ret += "0x30";
                break;
            case 'P':
                ret += "0x31";
                break;
            case 'Q':
                ret += "0x32";
                break;
            case 'R':
                ret += "0x33";
                break;
            case 'S':
                ret += "0x34";
                break;
            case 'T':
                ret += "0x35";
                break;
            case 'U':
                ret += "0x36";
                break;
            case 'V':
                ret += "0x37";
                break;
            case 'W':
                ret += "0x38";
                break;
            case 'X':
                ret += "0x39";
                break;
            case 'Y':
                ret += "0x3A";
                break;
            case 'Z':
                ret += "0x3B";
                break;
            case '[':
                ret += "0x3C";
                break;
            case '\\':
                ret += "0x3D";
                break;
            case ']':
                ret += "0x3E";
                break;
            case '^':
                ret += "0x3F";
                break;
            // Row 5
            case '_':
                ret += "0x40";
                break;
            case '`':
                ret += "0x41";
                break;
            case 'a':
                ret += "0x42";
                break;
            case 'b':
                ret += "0x43";
                break;
            case 'c':
                ret += "0x44";
                break;
            case 'd':
                ret += "0x45";
                break;
            case 'e':
                ret += "0x46";
                break;
            case 'f':
                ret += "0x47";
                break;
            case 'g':
                ret += "0x48";
                break;
            case 'h':
                ret += "0x49";
                break;
            case 'i':
                ret += "0x4A";
                break;
            case 'j':
                ret += "0x4B";
                break;
            case 'k':
                ret += "0x4C";
                break;
            case 'l':
                ret += "0x4D";
                break;
            case 'm':
                ret += "0x4E";
                break;
            case 'n':
                ret += "0x4F";
                break;
            // Row 6
            case 'o':
                ret += "0x50";
                break;
            case 'p':
                ret += "0x51";
                break;
            case 'q':
                ret += "0x52";
                break;
            case 'r':
                ret += "0x53";
                break;
            case 's':
                ret += "0x54";
                break;
            case 't':
                ret += "0x55";
                break;
            case 'u':
                ret += "0x56";
                break;
            case 'v':
                ret += "0x57";
                break;
            case 'w':
                ret += "0x58";
                break;
            case 'x':
                ret += "0x59";
                break;
            case 'y':
                ret += "0x5A";
                break;
            case 'z':
                ret += "0x5B";
                break;
            case '{':
                ret += "0x5C";
                break;
            case '|':
                ret += "0x5D";
                break;
            case '}':
                ret += "0x5E";
                break;
            case '~':
                ret += "0x5F";
                break;
            // Row 7
            /*
            TODO: Implement fix to allow this character to be inputted
            case '∆':
                ret += "0x60";
                break;
            */
            // Generic character
            case ' ':
                ret += "0x00 \n";
            default:
                ret += "0x00";
                break;
            }
            ret +=", ";
        }
        break;
    case 4:
        // font_ibm_fixed
        // TODO: implement, lots of work.
        break;
    default:
        break;
    }

    ret[ret.find_last_of(',')] = ' ';
    ret += "\n};";

    return ret;
}

void save_to_file(std::string fileName, std::string textString)
{
    std::ofstream os;
    
    os.open(fileName+".c");
    os << textString;
    os.close();

}

int main()
{   
    std::string textToConvert;
    std::string arrName;
    std::string fileToSave;
    int conversionMode;

    std::cout << "Please enter text array name: ";
    std::cin >> arrName;
    std::cout << "Please enter file name to save to (without extension): ";
    std::cin >> fileToSave;
    std::cout << "Please choose which font to convert for. \n 0 = font_min \n 1 = font_italic \n 2 = font_spect \n 3 = font_ibm\n";
    std::cin >> conversionMode;
    std::cout << "Please enter text to convert: ";
    std::cin >> textToConvert;

    save_to_file(fileToSave, convert_text(conversionMode, textToConvert, arrName));
    std::cout << "Success!";
    return 0;
}