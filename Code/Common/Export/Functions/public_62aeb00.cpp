#include "Common-PCH.h"


#define public_62aeb28 _public_62aeb28
#define public_62aeb2f _public_62aeb2f
#define public_62aeb36 _public_62aeb36
#define public_62aeb3d _public_62aeb3d
#define public_62aeb44 _public_62aeb44
#define public_62aeb4b _public_62aeb4b
#define public_62aeb52 _public_62aeb52
#define public_62aeb70 _public_62aeb70
#define public_62aeb77 _public_62aeb77
#define public_62aeb7e _public_62aeb7e
#define public_62aeb93 _public_62aeb93
#define public_62aeb98 _public_62aeb98
#define public_62aeba7 _public_62aeba7
#define public_62aebb8 _public_62aebb8
#define public_62aebbc _public_62aebbc

PROC_DECLARE(0x62aeb00, internal_62aeb00, public_62aeb00);
extern "C" NAKED register_t __cdecl internal_62aeb00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x303
        push esi
        jg public_62aeb52
        je public_62aeb4b
        dec eax
        cmp eax, 0xA6
        ja public_62aebb8
/*FIXUP movzx eax, byte ptr ds : [eax+public_62aebe4] @0x62aeb1a*/
/*FIXUP jmp dword ptr ds : [eax*4+public_62aebcc] @0x62aeb21*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000059f8
  JMPTB mov eax, 0
  JMPTB public_4c000000000059f8 : nop
        je public_62aeb28
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000059f4
  JMPTB mov eax, 5
  JMPTB public_4c000000000059f4 : nop
        je public_62aebb8
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000059f0
  JMPTB mov eax, 5
  JMPTB public_4c000000000059f0 : nop
        je public_62aebb8
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000059ec
  JMPTB mov eax, 5
  JMPTB public_4c000000000059ec : nop
        je public_62aebb8
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000059e8
  JMPTB mov eax, 5
  JMPTB public_4c000000000059e8 : nop
        je public_62aebb8
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000059e4
  JMPTB mov eax, 5
  JMPTB public_4c000000000059e4 : nop
        je public_62aebb8
  JMPTB cmp eax, 6
  JMPTB jne public_4c000000000059e0
  JMPTB mov eax, 5
  JMPTB public_4c000000000059e0 : nop
        je public_62aebb8
  JMPTB cmp eax, 7
  JMPTB jne public_4c000000000059dc
  JMPTB mov eax, 5
  JMPTB public_4c000000000059dc : nop
        je public_62aebb8
  JMPTB cmp eax, 8
  JMPTB jne public_4c000000000059d8
  JMPTB mov eax, 5
  JMPTB public_4c000000000059d8 : nop
        je public_62aebb8
  JMPTB cmp eax, 9
  JMPTB jne public_4c000000000059d4
  JMPTB mov eax, 5
  JMPTB public_4c000000000059d4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c000000000059d0
  JMPTB mov eax, 5
  JMPTB public_4c000000000059d0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c000000000059cc
  JMPTB mov eax, 5
  JMPTB public_4c000000000059cc : nop
        je public_62aebb8
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c000000000059c8
  JMPTB mov eax, 5
  JMPTB public_4c000000000059c8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c000000000059c4
  JMPTB mov eax, 5
  JMPTB public_4c000000000059c4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c000000000059c0
  JMPTB mov eax, 1
  JMPTB public_4c000000000059c0 : nop
        je public_62aeb3d
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c000000000059bc
  JMPTB mov eax, 5
  JMPTB public_4c000000000059bc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c000000000059b8
  JMPTB mov eax, 5
  JMPTB public_4c000000000059b8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c000000000059b4
  JMPTB mov eax, 5
  JMPTB public_4c000000000059b4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c000000000059b0
  JMPTB mov eax, 5
  JMPTB public_4c000000000059b0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c000000000059ac
  JMPTB mov eax, 5
  JMPTB public_4c000000000059ac : nop
        je public_62aebb8
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c000000000059a8
  JMPTB mov eax, 5
  JMPTB public_4c000000000059a8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c000000000059a4
  JMPTB mov eax, 5
  JMPTB public_4c000000000059a4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c000000000059a0
  JMPTB mov eax, 2
  JMPTB public_4c000000000059a0 : nop
        je public_62aeb44
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000599c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000599c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c00000000005998
  JMPTB mov eax, 5
  JMPTB public_4c00000000005998 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c00000000005994
  JMPTB mov eax, 5
  JMPTB public_4c00000000005994 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c00000000005990
  JMPTB mov eax, 5
  JMPTB public_4c00000000005990 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000598c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000598c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c00000000005988
  JMPTB mov eax, 5
  JMPTB public_4c00000000005988 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c00000000005984
  JMPTB mov eax, 5
  JMPTB public_4c00000000005984 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c00000000005980
  JMPTB mov eax, 5
  JMPTB public_4c00000000005980 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000597c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000597c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c00000000005978
  JMPTB mov eax, 5
  JMPTB public_4c00000000005978 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c00000000005974
  JMPTB mov eax, 5
  JMPTB public_4c00000000005974 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c00000000005970
  JMPTB mov eax, 5
  JMPTB public_4c00000000005970 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000596c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000596c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c00000000005968
  JMPTB mov eax, 5
  JMPTB public_4c00000000005968 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c00000000005964
  JMPTB mov eax, 5
  JMPTB public_4c00000000005964 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c00000000005960
  JMPTB mov eax, 5
  JMPTB public_4c00000000005960 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000595c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000595c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c00000000005958
  JMPTB mov eax, 5
  JMPTB public_4c00000000005958 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c00000000005954
  JMPTB mov eax, 5
  JMPTB public_4c00000000005954 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c00000000005950
  JMPTB mov eax, 5
  JMPTB public_4c00000000005950 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000594c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000594c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c00000000005948
  JMPTB mov eax, 5
  JMPTB public_4c00000000005948 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c00000000005944
  JMPTB mov eax, 5
  JMPTB public_4c00000000005944 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c00000000005940
  JMPTB mov eax, 5
  JMPTB public_4c00000000005940 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000593c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000593c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c00000000005938
  JMPTB mov eax, 5
  JMPTB public_4c00000000005938 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c00000000005934
  JMPTB mov eax, 5
  JMPTB public_4c00000000005934 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c00000000005930
  JMPTB mov eax, 5
  JMPTB public_4c00000000005930 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000592c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000592c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c00000000005928
  JMPTB mov eax, 5
  JMPTB public_4c00000000005928 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c00000000005924
  JMPTB mov eax, 5
  JMPTB public_4c00000000005924 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c00000000005920
  JMPTB mov eax, 5
  JMPTB public_4c00000000005920 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000591c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000591c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c00000000005918
  JMPTB mov eax, 5
  JMPTB public_4c00000000005918 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c00000000005914
  JMPTB mov eax, 5
  JMPTB public_4c00000000005914 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c00000000005910
  JMPTB mov eax, 5
  JMPTB public_4c00000000005910 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000590c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000590c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c00000000005908
  JMPTB mov eax, 5
  JMPTB public_4c00000000005908 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c00000000005904
  JMPTB mov eax, 5
  JMPTB public_4c00000000005904 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c00000000005900
  JMPTB mov eax, 5
  JMPTB public_4c00000000005900 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c000000000058fc
  JMPTB mov eax, 5
  JMPTB public_4c000000000058fc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c000000000058f8
  JMPTB mov eax, 5
  JMPTB public_4c000000000058f8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c000000000058f4
  JMPTB mov eax, 5
  JMPTB public_4c000000000058f4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c000000000058f0
  JMPTB mov eax, 5
  JMPTB public_4c000000000058f0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c000000000058ec
  JMPTB mov eax, 5
  JMPTB public_4c000000000058ec : nop
        je public_62aebb8
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c000000000058e8
  JMPTB mov eax, 5
  JMPTB public_4c000000000058e8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c000000000058e4
  JMPTB mov eax, 5
  JMPTB public_4c000000000058e4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c000000000058e0
  JMPTB mov eax, 5
  JMPTB public_4c000000000058e0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c000000000058dc
  JMPTB mov eax, 5
  JMPTB public_4c000000000058dc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c000000000058d8
  JMPTB mov eax, 5
  JMPTB public_4c000000000058d8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c000000000058d4
  JMPTB mov eax, 5
  JMPTB public_4c000000000058d4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c000000000058d0
  JMPTB mov eax, 5
  JMPTB public_4c000000000058d0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c000000000058cc
  JMPTB mov eax, 5
  JMPTB public_4c000000000058cc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c000000000058c8
  JMPTB mov eax, 5
  JMPTB public_4c000000000058c8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c000000000058c4
  JMPTB mov eax, 5
  JMPTB public_4c000000000058c4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c000000000058c0
  JMPTB mov eax, 5
  JMPTB public_4c000000000058c0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c000000000058bc
  JMPTB mov eax, 5
  JMPTB public_4c000000000058bc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c000000000058b8
  JMPTB mov eax, 5
  JMPTB public_4c000000000058b8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c000000000058b4
  JMPTB mov eax, 5
  JMPTB public_4c000000000058b4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c000000000058b0
  JMPTB mov eax, 5
  JMPTB public_4c000000000058b0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c000000000058ac
  JMPTB mov eax, 5
  JMPTB public_4c000000000058ac : nop
        je public_62aebb8
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c000000000058a8
  JMPTB mov eax, 5
  JMPTB public_4c000000000058a8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c000000000058a4
  JMPTB mov eax, 5
  JMPTB public_4c000000000058a4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c000000000058a0
  JMPTB mov eax, 5
  JMPTB public_4c000000000058a0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c0000000000589c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000589c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c00000000005898
  JMPTB mov eax, 5
  JMPTB public_4c00000000005898 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c00000000005894
  JMPTB mov eax, 5
  JMPTB public_4c00000000005894 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c00000000005890
  JMPTB mov eax, 5
  JMPTB public_4c00000000005890 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c0000000000588c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000588c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c00000000005888
  JMPTB mov eax, 5
  JMPTB public_4c00000000005888 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c00000000005884
  JMPTB mov eax, 5
  JMPTB public_4c00000000005884 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c00000000005880
  JMPTB mov eax, 5
  JMPTB public_4c00000000005880 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c0000000000587c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000587c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c00000000005878
  JMPTB mov eax, 5
  JMPTB public_4c00000000005878 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c00000000005874
  JMPTB mov eax, 5
  JMPTB public_4c00000000005874 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c00000000005870
  JMPTB mov eax, 5
  JMPTB public_4c00000000005870 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c0000000000586c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000586c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c00000000005868
  JMPTB mov eax, 5
  JMPTB public_4c00000000005868 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c00000000005864
  JMPTB mov eax, 5
  JMPTB public_4c00000000005864 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c00000000005860
  JMPTB mov eax, 3
  JMPTB public_4c00000000005860 : nop
        je public_62aeb2f
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c0000000000585c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000585c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c00000000005858
  JMPTB mov eax, 5
  JMPTB public_4c00000000005858 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c00000000005854
  JMPTB mov eax, 5
  JMPTB public_4c00000000005854 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c00000000005850
  JMPTB mov eax, 5
  JMPTB public_4c00000000005850 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c0000000000584c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000584c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c00000000005848
  JMPTB mov eax, 5
  JMPTB public_4c00000000005848 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c00000000005844
  JMPTB mov eax, 5
  JMPTB public_4c00000000005844 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c00000000005840
  JMPTB mov eax, 5
  JMPTB public_4c00000000005840 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c0000000000583c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000583c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c00000000005838
  JMPTB mov eax, 5
  JMPTB public_4c00000000005838 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c00000000005834
  JMPTB mov eax, 5
  JMPTB public_4c00000000005834 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c00000000005830
  JMPTB mov eax, 5
  JMPTB public_4c00000000005830 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c0000000000582c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000582c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c00000000005828
  JMPTB mov eax, 5
  JMPTB public_4c00000000005828 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c00000000005824
  JMPTB mov eax, 5
  JMPTB public_4c00000000005824 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c00000000005820
  JMPTB mov eax, 5
  JMPTB public_4c00000000005820 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c0000000000581c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000581c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c00000000005818
  JMPTB mov eax, 5
  JMPTB public_4c00000000005818 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c00000000005814
  JMPTB mov eax, 5
  JMPTB public_4c00000000005814 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c00000000005810
  JMPTB mov eax, 5
  JMPTB public_4c00000000005810 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c0000000000580c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000580c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c00000000005808
  JMPTB mov eax, 5
  JMPTB public_4c00000000005808 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c00000000005804
  JMPTB mov eax, 5
  JMPTB public_4c00000000005804 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c00000000005800
  JMPTB mov eax, 5
  JMPTB public_4c00000000005800 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c000000000057fc
  JMPTB mov eax, 5
  JMPTB public_4c000000000057fc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x80
  JMPTB jne public_4c000000000057f8
  JMPTB mov eax, 5
  JMPTB public_4c000000000057f8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x81
  JMPTB jne public_4c000000000057f4
  JMPTB mov eax, 5
  JMPTB public_4c000000000057f4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x82
  JMPTB jne public_4c000000000057f0
  JMPTB mov eax, 5
  JMPTB public_4c000000000057f0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x83
  JMPTB jne public_4c000000000057ec
  JMPTB mov eax, 5
  JMPTB public_4c000000000057ec : nop
        je public_62aebb8
  JMPTB cmp eax, 0x84
  JMPTB jne public_4c000000000057e8
  JMPTB mov eax, 5
  JMPTB public_4c000000000057e8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x85
  JMPTB jne public_4c000000000057e4
  JMPTB mov eax, 5
  JMPTB public_4c000000000057e4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x86
  JMPTB jne public_4c000000000057e0
  JMPTB mov eax, 5
  JMPTB public_4c000000000057e0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x87
  JMPTB jne public_4c000000000057dc
  JMPTB mov eax, 5
  JMPTB public_4c000000000057dc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x88
  JMPTB jne public_4c000000000057d8
  JMPTB mov eax, 5
  JMPTB public_4c000000000057d8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x89
  JMPTB jne public_4c000000000057d4
  JMPTB mov eax, 5
  JMPTB public_4c000000000057d4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x8A
  JMPTB jne public_4c000000000057d0
  JMPTB mov eax, 5
  JMPTB public_4c000000000057d0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x8B
  JMPTB jne public_4c000000000057cc
  JMPTB mov eax, 5
  JMPTB public_4c000000000057cc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x8C
  JMPTB jne public_4c000000000057c8
  JMPTB mov eax, 5
  JMPTB public_4c000000000057c8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x8D
  JMPTB jne public_4c000000000057c4
  JMPTB mov eax, 5
  JMPTB public_4c000000000057c4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x8E
  JMPTB jne public_4c000000000057c0
  JMPTB mov eax, 5
  JMPTB public_4c000000000057c0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x8F
  JMPTB jne public_4c000000000057bc
  JMPTB mov eax, 5
  JMPTB public_4c000000000057bc : nop
        je public_62aebb8
  JMPTB cmp eax, 0x90
  JMPTB jne public_4c000000000057b8
  JMPTB mov eax, 5
  JMPTB public_4c000000000057b8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x91
  JMPTB jne public_4c000000000057b4
  JMPTB mov eax, 5
  JMPTB public_4c000000000057b4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x92
  JMPTB jne public_4c000000000057b0
  JMPTB mov eax, 5
  JMPTB public_4c000000000057b0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x93
  JMPTB jne public_4c000000000057ac
  JMPTB mov eax, 5
  JMPTB public_4c000000000057ac : nop
        je public_62aebb8
  JMPTB cmp eax, 0x94
  JMPTB jne public_4c000000000057a8
  JMPTB mov eax, 5
  JMPTB public_4c000000000057a8 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x95
  JMPTB jne public_4c000000000057a4
  JMPTB mov eax, 5
  JMPTB public_4c000000000057a4 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x96
  JMPTB jne public_4c000000000057a0
  JMPTB mov eax, 5
  JMPTB public_4c000000000057a0 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x97
  JMPTB jne public_4c0000000000579c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000579c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x98
  JMPTB jne public_4c00000000005798
  JMPTB mov eax, 5
  JMPTB public_4c00000000005798 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x99
  JMPTB jne public_4c00000000005794
  JMPTB mov eax, 5
  JMPTB public_4c00000000005794 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x9A
  JMPTB jne public_4c00000000005790
  JMPTB mov eax, 5
  JMPTB public_4c00000000005790 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x9B
  JMPTB jne public_4c0000000000578c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000578c : nop
        je public_62aebb8
  JMPTB cmp eax, 0x9C
  JMPTB jne public_4c00000000005788
  JMPTB mov eax, 5
  JMPTB public_4c00000000005788 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x9D
  JMPTB jne public_4c00000000005784
  JMPTB mov eax, 5
  JMPTB public_4c00000000005784 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x9E
  JMPTB jne public_4c00000000005780
  JMPTB mov eax, 5
  JMPTB public_4c00000000005780 : nop
        je public_62aebb8
  JMPTB cmp eax, 0x9F
  JMPTB jne public_4c0000000000577c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000577c : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA0
  JMPTB jne public_4c00000000005778
  JMPTB mov eax, 5
  JMPTB public_4c00000000005778 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA1
  JMPTB jne public_4c00000000005774
  JMPTB mov eax, 5
  JMPTB public_4c00000000005774 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA2
  JMPTB jne public_4c00000000005770
  JMPTB mov eax, 5
  JMPTB public_4c00000000005770 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA3
  JMPTB jne public_4c0000000000576c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000576c : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA4
  JMPTB jne public_4c00000000005768
  JMPTB mov eax, 5
  JMPTB public_4c00000000005768 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA5
  JMPTB jne public_4c00000000005764
  JMPTB mov eax, 5
  JMPTB public_4c00000000005764 : nop
        je public_62aebb8
  JMPTB cmp eax, 0xA6
  JMPTB jne public_4c00000000005760
  JMPTB mov eax, 4
  JMPTB public_4c00000000005760 : nop
        je public_62aeb36
  JMPTB int 3
        public_62aeb28 : nop
        mov eax, offset public_63fc32c
        jmp public_62aeb98
        public_62aeb2f : nop
        mov eax, offset public_63fc398
        jmp public_62aeb98
        public_62aeb36 : nop
        mov eax, offset public_63fc38c
        jmp public_62aeb98
        public_62aeb3d : nop
        mov eax, offset public_63fc374
        jmp public_62aeb98
        public_62aeb44 : nop
        mov eax, offset public_63fc368
        jmp public_62aeb98
        public_62aeb4b : nop
        mov eax, offset public_63fc35c
        jmp public_62aeb98
        public_62aeb52 : nop
        cmp eax, 0x1003
        jg public_62aeb7e
        je public_62aeb77
        cmp eax, 0x503
        je public_62aeb70
        cmp eax, 0x803
        jne public_62aebb8
        mov eax, offset public_63fc380
        jmp public_62aeb98
        public_62aeb70 : nop
        mov eax, offset public_63fc3a4
        jmp public_62aeb98
        public_62aeb77 : nop
        mov eax, offset public_63fc350
        jmp public_62aeb98
        public_62aeb7e : nop
        cmp eax, 0x2001
        je public_62aeb93
        cmp eax, 0x4001
        jne public_62aebb8
        mov eax, offset public_63fc344
        jmp public_62aeb98
        public_62aeb93 : nop
        mov eax, offset public_63fc338
        public_62aeb98 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_62aebb8
        mov eax, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [eax]
        public_62aeba7 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [eax+0xB0], esi
        je public_62aebbc
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_62aeba7
        public_62aebb8 : nop
        xor eax, eax
        pop esi
        ret 
        public_62aebbc : nop
        mov ecx, dword ptr ds : [eax+0x98]
        inc ecx
        mov dword ptr ds : [eax+0x98], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62aeb00)
        ASM_EXPORT_ENTRY_FIRST(0x62aeb28, public_62aeb28)
        ASM_EXPORT_ENTRY(0x62aeb2f, public_62aeb2f)
        ASM_EXPORT_ENTRY(0x62aeb36, public_62aeb36)
        ASM_EXPORT_ENTRY(0x62aeb3d, public_62aeb3d)
        ASM_EXPORT_ENTRY(0x62aeb44, public_62aeb44)
        ASM_EXPORT_ENTRY_LAST(0x62aebb8, public_62aebb8)
    }
}

#undef public_62aeb28
#undef public_62aeb2f
#undef public_62aeb36
#undef public_62aeb3d
#undef public_62aeb44
#undef public_62aeb4b
#undef public_62aeb52
#undef public_62aeb70
#undef public_62aeb77
#undef public_62aeb7e
#undef public_62aeb93
#undef public_62aeb98
#undef public_62aeba7
#undef public_62aebb8
#undef public_62aebbc

#pragma init_seg(compiler)
extern "C" void const* const public_62aeb28 = __AsmFindLabelExport(&internal_62aeb00, 0x62aeb28);
extern "C" void const* const public_62aeb2f = __AsmFindLabelExport(&internal_62aeb00, 0x62aeb2f);
extern "C" void const* const public_62aeb36 = __AsmFindLabelExport(&internal_62aeb00, 0x62aeb36);
extern "C" void const* const public_62aeb3d = __AsmFindLabelExport(&internal_62aeb00, 0x62aeb3d);
extern "C" void const* const public_62aeb44 = __AsmFindLabelExport(&internal_62aeb00, 0x62aeb44);
extern "C" void const* const public_62aebb8 = __AsmFindLabelExport(&internal_62aeb00, 0x62aebb8);
