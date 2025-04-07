#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c003be _public_6c003be
#define public_6c003d3 _public_6c003d3
#define public_6c00400 _public_6c00400
#define public_6c0041b _public_6c0041b
#define public_6c00430 _public_6c00430
#define public_6c0044c _public_6c0044c
#define public_6c00461 _public_6c00461
#define public_6c00498 _public_6c00498
#define public_6c004ab _public_6c004ab
#define public_6c004b5 _public_6c004b5
#define public_6c004cc _public_6c004cc
#define public_6c004e9 _public_6c004e9
#define public_6c00500 _public_6c00500
#define public_6c00513 _public_6c00513
#define public_6c00516 _public_6c00516
#define public_6c00519 _public_6c00519
#define public_6c0053e _public_6c0053e
#define public_6c00555 _public_6c00555
#define public_6c00586 _public_6c00586
#define public_6c005b0 _public_6c005b0
#define public_6c005da _public_6c005da
#define public_6c00619 _public_6c00619
#define public_6c00630 _public_6c00630
#define public_6c00661 _public_6c00661
#define public_6c0068b _public_6c0068b
#define public_6c006ca _public_6c006ca
#define public_6c006e1 _public_6c006e1
#define public_6c006f5 _public_6c006f5
#define public_6c00733 _public_6c00733
#define public_6c0073f _public_6c0073f

PROC_DECLARE(0x6c00380, internal_6c00380, public_6c00380);
extern "C" NAKED register_t __cdecl internal_6c00380()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        xor ebx, ebx
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6bebe90
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c003be
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c003be : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c003d3
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c003d3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        xor edx, edx
        mov dl, cl
        inc eax
        mov dword ptr ss : [ebp], eax
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ds : [edi+0x20], edx
        call dword ptr ds : [public_6c0b01c]
        test al, al
        mov dl, 1
        je public_6c00400
        mov dl, bl
        public_6c00400 : nop
        mov eax, dword ptr ds : [edi+0x20]
        dec eax
        cmp eax, 0x7F
        ja public_6c00519
/*FIXUP movzx eax, byte ptr ds : [eax+public_6c00768] @0x6c0040d*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6c00748] @0x6c00414*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000011fc
  JMPTB mov eax, 0
  JMPTB public_4c000000000011fc : nop
        je public_6c006ca
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000011f8
  JMPTB mov eax, 1
  JMPTB public_4c000000000011f8 : nop
        je public_6c0041b
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000011f4
  JMPTB mov eax, 7
  JMPTB public_4c000000000011f4 : nop
        je public_6c00519
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000011f0
  JMPTB mov eax, 2
  JMPTB public_4c000000000011f0 : nop
        je public_6c004b5
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000011ec
  JMPTB mov eax, 7
  JMPTB public_4c000000000011ec : nop
        je public_6c00519
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000011e8
  JMPTB mov eax, 7
  JMPTB public_4c000000000011e8 : nop
        je public_6c00519
  JMPTB cmp eax, 6
  JMPTB jne public_4c000000000011e4
  JMPTB mov eax, 7
  JMPTB public_4c000000000011e4 : nop
        je public_6c00519
  JMPTB cmp eax, 7
  JMPTB jne public_4c000000000011e0
  JMPTB mov eax, 3
  JMPTB public_4c000000000011e0 : nop
        je public_6c0053e
  JMPTB cmp eax, 8
  JMPTB jne public_4c000000000011dc
  JMPTB mov eax, 7
  JMPTB public_4c000000000011dc : nop
        je public_6c00519
  JMPTB cmp eax, 9
  JMPTB jne public_4c000000000011d8
  JMPTB mov eax, 7
  JMPTB public_4c000000000011d8 : nop
        je public_6c00519
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c000000000011d4
  JMPTB mov eax, 7
  JMPTB public_4c000000000011d4 : nop
        je public_6c00519
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c000000000011d0
  JMPTB mov eax, 7
  JMPTB public_4c000000000011d0 : nop
        je public_6c00519
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c000000000011cc
  JMPTB mov eax, 7
  JMPTB public_4c000000000011cc : nop
        je public_6c00519
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c000000000011c8
  JMPTB mov eax, 7
  JMPTB public_4c000000000011c8 : nop
        je public_6c00519
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c000000000011c4
  JMPTB mov eax, 7
  JMPTB public_4c000000000011c4 : nop
        je public_6c00519
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c000000000011c0
  JMPTB mov eax, 4
  JMPTB public_4c000000000011c0 : nop
        je public_6c00619
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c000000000011bc
  JMPTB mov eax, 7
  JMPTB public_4c000000000011bc : nop
        je public_6c00519
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c000000000011b8
  JMPTB mov eax, 7
  JMPTB public_4c000000000011b8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c000000000011b4
  JMPTB mov eax, 7
  JMPTB public_4c000000000011b4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c000000000011b0
  JMPTB mov eax, 7
  JMPTB public_4c000000000011b0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c000000000011ac
  JMPTB mov eax, 7
  JMPTB public_4c000000000011ac : nop
        je public_6c00519
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c000000000011a8
  JMPTB mov eax, 7
  JMPTB public_4c000000000011a8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c000000000011a4
  JMPTB mov eax, 7
  JMPTB public_4c000000000011a4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c000000000011a0
  JMPTB mov eax, 7
  JMPTB public_4c000000000011a0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000119c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000119c : nop
        je public_6c00519
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c00000000001198
  JMPTB mov eax, 7
  JMPTB public_4c00000000001198 : nop
        je public_6c00519
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c00000000001194
  JMPTB mov eax, 7
  JMPTB public_4c00000000001194 : nop
        je public_6c00519
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c00000000001190
  JMPTB mov eax, 7
  JMPTB public_4c00000000001190 : nop
        je public_6c00519
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000118c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000118c : nop
        je public_6c00519
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c00000000001188
  JMPTB mov eax, 7
  JMPTB public_4c00000000001188 : nop
        je public_6c00519
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c00000000001184
  JMPTB mov eax, 7
  JMPTB public_4c00000000001184 : nop
        je public_6c00519
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c00000000001180
  JMPTB mov eax, 0
  JMPTB public_4c00000000001180 : nop
        je public_6c006ca
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000117c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000117c : nop
        je public_6c00519
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c00000000001178
  JMPTB mov eax, 7
  JMPTB public_4c00000000001178 : nop
        je public_6c00519
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c00000000001174
  JMPTB mov eax, 7
  JMPTB public_4c00000000001174 : nop
        je public_6c00519
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c00000000001170
  JMPTB mov eax, 7
  JMPTB public_4c00000000001170 : nop
        je public_6c00519
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000116c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000116c : nop
        je public_6c00519
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c00000000001168
  JMPTB mov eax, 7
  JMPTB public_4c00000000001168 : nop
        je public_6c00519
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c00000000001164
  JMPTB mov eax, 7
  JMPTB public_4c00000000001164 : nop
        je public_6c00519
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c00000000001160
  JMPTB mov eax, 7
  JMPTB public_4c00000000001160 : nop
        je public_6c00519
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000115c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000115c : nop
        je public_6c00519
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c00000000001158
  JMPTB mov eax, 7
  JMPTB public_4c00000000001158 : nop
        je public_6c00519
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c00000000001154
  JMPTB mov eax, 7
  JMPTB public_4c00000000001154 : nop
        je public_6c00519
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c00000000001150
  JMPTB mov eax, 7
  JMPTB public_4c00000000001150 : nop
        je public_6c00519
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000114c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000114c : nop
        je public_6c00519
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c00000000001148
  JMPTB mov eax, 7
  JMPTB public_4c00000000001148 : nop
        je public_6c00519
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c00000000001144
  JMPTB mov eax, 7
  JMPTB public_4c00000000001144 : nop
        je public_6c00519
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c00000000001140
  JMPTB mov eax, 7
  JMPTB public_4c00000000001140 : nop
        je public_6c00519
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000113c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000113c : nop
        je public_6c00519
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c00000000001138
  JMPTB mov eax, 7
  JMPTB public_4c00000000001138 : nop
        je public_6c00519
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c00000000001134
  JMPTB mov eax, 7
  JMPTB public_4c00000000001134 : nop
        je public_6c00519
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c00000000001130
  JMPTB mov eax, 7
  JMPTB public_4c00000000001130 : nop
        je public_6c00519
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000112c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000112c : nop
        je public_6c00519
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c00000000001128
  JMPTB mov eax, 7
  JMPTB public_4c00000000001128 : nop
        je public_6c00519
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c00000000001124
  JMPTB mov eax, 7
  JMPTB public_4c00000000001124 : nop
        je public_6c00519
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c00000000001120
  JMPTB mov eax, 7
  JMPTB public_4c00000000001120 : nop
        je public_6c00519
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000111c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000111c : nop
        je public_6c00519
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c00000000001118
  JMPTB mov eax, 7
  JMPTB public_4c00000000001118 : nop
        je public_6c00519
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c00000000001114
  JMPTB mov eax, 7
  JMPTB public_4c00000000001114 : nop
        je public_6c00519
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c00000000001110
  JMPTB mov eax, 7
  JMPTB public_4c00000000001110 : nop
        je public_6c00519
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000110c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000110c : nop
        je public_6c00519
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c00000000001108
  JMPTB mov eax, 7
  JMPTB public_4c00000000001108 : nop
        je public_6c00519
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c00000000001104
  JMPTB mov eax, 7
  JMPTB public_4c00000000001104 : nop
        je public_6c00519
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c00000000001100
  JMPTB mov eax, 5
  JMPTB public_4c00000000001100 : nop
        je public_6c0044c
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c000000000010fc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010fc : nop
        je public_6c00519
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c000000000010f8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010f8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c000000000010f4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010f4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c000000000010f0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010f0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c000000000010ec
  JMPTB mov eax, 7
  JMPTB public_4c000000000010ec : nop
        je public_6c00519
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c000000000010e8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010e8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c000000000010e4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010e4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c000000000010e0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010e0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c000000000010dc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010dc : nop
        je public_6c00519
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c000000000010d8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010d8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c000000000010d4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010d4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c000000000010d0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010d0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c000000000010cc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010cc : nop
        je public_6c00519
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c000000000010c8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010c8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c000000000010c4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010c4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c000000000010c0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010c0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c000000000010bc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010bc : nop
        je public_6c00519
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c000000000010b8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010b8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c000000000010b4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010b4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c000000000010b0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010b0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c000000000010ac
  JMPTB mov eax, 7
  JMPTB public_4c000000000010ac : nop
        je public_6c00519
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c000000000010a8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010a8 : nop
        je public_6c00519
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c000000000010a4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010a4 : nop
        je public_6c00519
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c000000000010a0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010a0 : nop
        je public_6c00519
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c0000000000109c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000109c : nop
        je public_6c00519
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c00000000001098
  JMPTB mov eax, 7
  JMPTB public_4c00000000001098 : nop
        je public_6c00519
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c00000000001094
  JMPTB mov eax, 7
  JMPTB public_4c00000000001094 : nop
        je public_6c00519
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c00000000001090
  JMPTB mov eax, 7
  JMPTB public_4c00000000001090 : nop
        je public_6c00519
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c0000000000108c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000108c : nop
        je public_6c00519
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c00000000001088
  JMPTB mov eax, 7
  JMPTB public_4c00000000001088 : nop
        je public_6c00519
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c00000000001084
  JMPTB mov eax, 7
  JMPTB public_4c00000000001084 : nop
        je public_6c00519
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c00000000001080
  JMPTB mov eax, 7
  JMPTB public_4c00000000001080 : nop
        je public_6c00519
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c0000000000107c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000107c : nop
        je public_6c00519
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c00000000001078
  JMPTB mov eax, 7
  JMPTB public_4c00000000001078 : nop
        je public_6c00519
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c00000000001074
  JMPTB mov eax, 7
  JMPTB public_4c00000000001074 : nop
        je public_6c00519
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c00000000001070
  JMPTB mov eax, 7
  JMPTB public_4c00000000001070 : nop
        je public_6c00519
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c0000000000106c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000106c : nop
        je public_6c00519
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c00000000001068
  JMPTB mov eax, 7
  JMPTB public_4c00000000001068 : nop
        je public_6c00519
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c00000000001064
  JMPTB mov eax, 7
  JMPTB public_4c00000000001064 : nop
        je public_6c00519
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c00000000001060
  JMPTB mov eax, 7
  JMPTB public_4c00000000001060 : nop
        je public_6c00519
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c0000000000105c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000105c : nop
        je public_6c00519
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c00000000001058
  JMPTB mov eax, 7
  JMPTB public_4c00000000001058 : nop
        je public_6c00519
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c00000000001054
  JMPTB mov eax, 7
  JMPTB public_4c00000000001054 : nop
        je public_6c00519
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c00000000001050
  JMPTB mov eax, 7
  JMPTB public_4c00000000001050 : nop
        je public_6c00519
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c0000000000104c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000104c : nop
        je public_6c00519
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c00000000001048
  JMPTB mov eax, 7
  JMPTB public_4c00000000001048 : nop
        je public_6c00519
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c00000000001044
  JMPTB mov eax, 7
  JMPTB public_4c00000000001044 : nop
        je public_6c00519
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c00000000001040
  JMPTB mov eax, 7
  JMPTB public_4c00000000001040 : nop
        je public_6c00519
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c0000000000103c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000103c : nop
        je public_6c00519
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c00000000001038
  JMPTB mov eax, 7
  JMPTB public_4c00000000001038 : nop
        je public_6c00519
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c00000000001034
  JMPTB mov eax, 7
  JMPTB public_4c00000000001034 : nop
        je public_6c00519
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c00000000001030
  JMPTB mov eax, 7
  JMPTB public_4c00000000001030 : nop
        je public_6c00519
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c0000000000102c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000102c : nop
        je public_6c00519
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c00000000001028
  JMPTB mov eax, 7
  JMPTB public_4c00000000001028 : nop
        je public_6c00519
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c00000000001024
  JMPTB mov eax, 7
  JMPTB public_4c00000000001024 : nop
        je public_6c00519
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c00000000001020
  JMPTB mov eax, 7
  JMPTB public_4c00000000001020 : nop
        je public_6c00519
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c0000000000101c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000101c : nop
        je public_6c00519
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c00000000001018
  JMPTB mov eax, 7
  JMPTB public_4c00000000001018 : nop
        je public_6c00519
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c00000000001014
  JMPTB mov eax, 7
  JMPTB public_4c00000000001014 : nop
        je public_6c00519
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c00000000001010
  JMPTB mov eax, 7
  JMPTB public_4c00000000001010 : nop
        je public_6c00519
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c0000000000100c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000100c : nop
        je public_6c00519
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c00000000001008
  JMPTB mov eax, 7
  JMPTB public_4c00000000001008 : nop
        je public_6c00519
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c00000000001004
  JMPTB mov eax, 7
  JMPTB public_4c00000000001004 : nop
        je public_6c00519
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c00000000001000
  JMPTB mov eax, 6
  JMPTB public_4c00000000001000 : nop
        je public_6c004e9
  JMPTB int 3
        public_6c0041b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c00430
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c00430 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        inc eax
        mov dword ptr ds : [edi+0x24], edx
        jmp public_6c00516
        public_6c0044c : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc ebx
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6c00461
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c00461 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov dword ptr ss : [ebp], eax
        setne al
        test dl, dl
        mov byte ptr ds : [edi+0x30], al
        je public_6c00498
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c00498
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c00498 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c004ab
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c004ab : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        jmp public_6c00513
        public_6c004b5 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6c004cc
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c004cc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        test dl, dl
        mov dword ptr ds : [edi+0x2C], ecx
        mov dword ptr ss : [ebp], eax
        je public_6c00500
        public_6c004e9 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6c00500
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c00500 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], edx
        public_6c00513 : nop
        add eax, 4
        public_6c00516 : nop
        mov dword ptr ss : [ebp], eax
        public_6c00519 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ebp
        mov ecx, edi
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c006f5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c0053e : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6c00555
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c00555 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x34], ecx
        mov dword ptr ss : [ebp], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        mov ecx, 0x17
        jbe public_6c00586
        mov dword ptr ds : [esi+0xC], ecx
        public_6c00586 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x38], ebx
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6c005b0
        mov dword ptr ds : [esi+0xC], ecx
        public_6c005b0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x3C], ebx
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6c005da
        mov dword ptr ds : [esi+0xC], ecx
        public_6c005da : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [eax]
        add eax, 2
        test dl, dl
        mov word ptr ds : [edi+0x40], bx
        mov dword ptr ss : [ebp], eax
        je public_6c00500
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6c00500
        mov dword ptr ds : [esi+0xC], ecx
        jmp public_6c00500
        public_6c00619 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6c00630
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c00630 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x34], ecx
        mov dword ptr ss : [ebp], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        mov ecx, 0x17
        jbe public_6c00661
        mov dword ptr ds : [esi+0xC], ecx
        public_6c00661 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x38], ebx
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6c0068b
        mov dword ptr ds : [esi+0xC], ecx
        public_6c0068b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [eax]
        add eax, 2
        test dl, dl
        mov word ptr ds : [edi+0x40], bx
        mov dword ptr ss : [ebp], eax
        je public_6c00500
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6c00500
        mov dword ptr ds : [esi+0xC], ecx
        jmp public_6c00500
        public_6c006ca : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6c006e1
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c006e1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0073f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], ecx
        jmp public_6c00513
        public_6c006f5 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6c00733
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6c00733 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c0073f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c00380)
        ASM_EXPORT_ENTRY_FIRST(0x6c0041b, public_6c0041b)
        ASM_EXPORT_ENTRY(0x6c0044c, public_6c0044c)
        ASM_EXPORT_ENTRY(0x6c004b5, public_6c004b5)
        ASM_EXPORT_ENTRY(0x6c004e9, public_6c004e9)
        ASM_EXPORT_ENTRY(0x6c00519, public_6c00519)
        ASM_EXPORT_ENTRY(0x6c0053e, public_6c0053e)
        ASM_EXPORT_ENTRY(0x6c00619, public_6c00619)
        ASM_EXPORT_ENTRY_LAST(0x6c006ca, public_6c006ca)
    }
}

#undef public_6c003be
#undef public_6c003d3
#undef public_6c00400
#undef public_6c0041b
#undef public_6c00430
#undef public_6c0044c
#undef public_6c00461
#undef public_6c00498
#undef public_6c004ab
#undef public_6c004b5
#undef public_6c004cc
#undef public_6c004e9
#undef public_6c00500
#undef public_6c00513
#undef public_6c00516
#undef public_6c00519
#undef public_6c0053e
#undef public_6c00555
#undef public_6c00586
#undef public_6c005b0
#undef public_6c005da
#undef public_6c00619
#undef public_6c00630
#undef public_6c00661
#undef public_6c0068b
#undef public_6c006ca
#undef public_6c006e1
#undef public_6c006f5
#undef public_6c00733
#undef public_6c0073f

#pragma init_seg(compiler)
extern "C" void const* const public_6c0041b = __AsmFindLabelExport(&internal_6c00380, 0x6c0041b);
extern "C" void const* const public_6c0044c = __AsmFindLabelExport(&internal_6c00380, 0x6c0044c);
extern "C" void const* const public_6c004b5 = __AsmFindLabelExport(&internal_6c00380, 0x6c004b5);
extern "C" void const* const public_6c004e9 = __AsmFindLabelExport(&internal_6c00380, 0x6c004e9);
extern "C" void const* const public_6c00519 = __AsmFindLabelExport(&internal_6c00380, 0x6c00519);
extern "C" void const* const public_6c0053e = __AsmFindLabelExport(&internal_6c00380, 0x6c0053e);
extern "C" void const* const public_6c00619 = __AsmFindLabelExport(&internal_6c00380, 0x6c00619);
extern "C" void const* const public_6c006ca = __AsmFindLabelExport(&internal_6c00380, 0x6c006ca);
