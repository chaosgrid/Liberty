#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b690ce _public_6b690ce
#define public_6b690e3 _public_6b690e3
#define public_6b69110 _public_6b69110
#define public_6b6912b _public_6b6912b
#define public_6b69140 _public_6b69140
#define public_6b6915c _public_6b6915c
#define public_6b69171 _public_6b69171
#define public_6b691a8 _public_6b691a8
#define public_6b691bb _public_6b691bb
#define public_6b691c5 _public_6b691c5
#define public_6b691dc _public_6b691dc
#define public_6b691f9 _public_6b691f9
#define public_6b69210 _public_6b69210
#define public_6b69223 _public_6b69223
#define public_6b69226 _public_6b69226
#define public_6b69229 _public_6b69229
#define public_6b6924e _public_6b6924e
#define public_6b69265 _public_6b69265
#define public_6b69296 _public_6b69296
#define public_6b692c0 _public_6b692c0
#define public_6b692ea _public_6b692ea
#define public_6b69329 _public_6b69329
#define public_6b69340 _public_6b69340
#define public_6b69371 _public_6b69371
#define public_6b6939b _public_6b6939b
#define public_6b693da _public_6b693da
#define public_6b693f1 _public_6b693f1
#define public_6b69405 _public_6b69405
#define public_6b69443 _public_6b69443
#define public_6b6944f _public_6b6944f

PROC_DECLARE(0x6b69090, internal_6b69090, public_6b69090);
extern "C" NAKED register_t __cdecl internal_6b69090()
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
        call public_6b4e780
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b690ce
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b690ce : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b690e3
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b690e3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        xor edx, edx
        mov dl, cl
        inc eax
        mov dword ptr ss : [ebp], eax
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ds : [edi+0x20], edx
        call dword ptr ds : [public_6b6b028]
        test al, al
        mov dl, 1
        je public_6b69110
        mov dl, bl
        public_6b69110 : nop
        mov eax, dword ptr ds : [edi+0x20]
        dec eax
        cmp eax, 0x7F
        ja public_6b69229
/*FIXUP movzx eax, byte ptr ds : [eax+public_6b69478] @0x6b6911d*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6b69458] @0x6b69124*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000011ac
  JMPTB mov eax, 0
  JMPTB public_4c000000000011ac : nop
        je public_6b693da
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000011a8
  JMPTB mov eax, 1
  JMPTB public_4c000000000011a8 : nop
        je public_6b6912b
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000011a4
  JMPTB mov eax, 7
  JMPTB public_4c000000000011a4 : nop
        je public_6b69229
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000011a0
  JMPTB mov eax, 2
  JMPTB public_4c000000000011a0 : nop
        je public_6b691c5
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000119c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000119c : nop
        je public_6b69229
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000001198
  JMPTB mov eax, 7
  JMPTB public_4c00000000001198 : nop
        je public_6b69229
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000001194
  JMPTB mov eax, 7
  JMPTB public_4c00000000001194 : nop
        je public_6b69229
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000001190
  JMPTB mov eax, 3
  JMPTB public_4c00000000001190 : nop
        je public_6b6924e
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000118c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000118c : nop
        je public_6b69229
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000001188
  JMPTB mov eax, 7
  JMPTB public_4c00000000001188 : nop
        je public_6b69229
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000001184
  JMPTB mov eax, 7
  JMPTB public_4c00000000001184 : nop
        je public_6b69229
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000001180
  JMPTB mov eax, 7
  JMPTB public_4c00000000001180 : nop
        je public_6b69229
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000117c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000117c : nop
        je public_6b69229
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000001178
  JMPTB mov eax, 7
  JMPTB public_4c00000000001178 : nop
        je public_6b69229
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c00000000001174
  JMPTB mov eax, 7
  JMPTB public_4c00000000001174 : nop
        je public_6b69229
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c00000000001170
  JMPTB mov eax, 4
  JMPTB public_4c00000000001170 : nop
        je public_6b69329
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000116c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000116c : nop
        je public_6b69229
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c00000000001168
  JMPTB mov eax, 7
  JMPTB public_4c00000000001168 : nop
        je public_6b69229
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c00000000001164
  JMPTB mov eax, 7
  JMPTB public_4c00000000001164 : nop
        je public_6b69229
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c00000000001160
  JMPTB mov eax, 7
  JMPTB public_4c00000000001160 : nop
        je public_6b69229
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000115c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000115c : nop
        je public_6b69229
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c00000000001158
  JMPTB mov eax, 7
  JMPTB public_4c00000000001158 : nop
        je public_6b69229
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c00000000001154
  JMPTB mov eax, 7
  JMPTB public_4c00000000001154 : nop
        je public_6b69229
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c00000000001150
  JMPTB mov eax, 7
  JMPTB public_4c00000000001150 : nop
        je public_6b69229
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000114c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000114c : nop
        je public_6b69229
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c00000000001148
  JMPTB mov eax, 7
  JMPTB public_4c00000000001148 : nop
        je public_6b69229
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c00000000001144
  JMPTB mov eax, 7
  JMPTB public_4c00000000001144 : nop
        je public_6b69229
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c00000000001140
  JMPTB mov eax, 7
  JMPTB public_4c00000000001140 : nop
        je public_6b69229
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000113c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000113c : nop
        je public_6b69229
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c00000000001138
  JMPTB mov eax, 7
  JMPTB public_4c00000000001138 : nop
        je public_6b69229
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c00000000001134
  JMPTB mov eax, 7
  JMPTB public_4c00000000001134 : nop
        je public_6b69229
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c00000000001130
  JMPTB mov eax, 0
  JMPTB public_4c00000000001130 : nop
        je public_6b693da
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000112c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000112c : nop
        je public_6b69229
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c00000000001128
  JMPTB mov eax, 7
  JMPTB public_4c00000000001128 : nop
        je public_6b69229
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c00000000001124
  JMPTB mov eax, 7
  JMPTB public_4c00000000001124 : nop
        je public_6b69229
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c00000000001120
  JMPTB mov eax, 7
  JMPTB public_4c00000000001120 : nop
        je public_6b69229
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000111c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000111c : nop
        je public_6b69229
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c00000000001118
  JMPTB mov eax, 7
  JMPTB public_4c00000000001118 : nop
        je public_6b69229
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c00000000001114
  JMPTB mov eax, 7
  JMPTB public_4c00000000001114 : nop
        je public_6b69229
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c00000000001110
  JMPTB mov eax, 7
  JMPTB public_4c00000000001110 : nop
        je public_6b69229
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000110c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000110c : nop
        je public_6b69229
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c00000000001108
  JMPTB mov eax, 7
  JMPTB public_4c00000000001108 : nop
        je public_6b69229
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c00000000001104
  JMPTB mov eax, 7
  JMPTB public_4c00000000001104 : nop
        je public_6b69229
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c00000000001100
  JMPTB mov eax, 7
  JMPTB public_4c00000000001100 : nop
        je public_6b69229
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c000000000010fc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010fc : nop
        je public_6b69229
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c000000000010f8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010f8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c000000000010f4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010f4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c000000000010f0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010f0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c000000000010ec
  JMPTB mov eax, 7
  JMPTB public_4c000000000010ec : nop
        je public_6b69229
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c000000000010e8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010e8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c000000000010e4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010e4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c000000000010e0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010e0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c000000000010dc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010dc : nop
        je public_6b69229
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c000000000010d8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010d8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c000000000010d4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010d4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c000000000010d0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010d0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c000000000010cc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010cc : nop
        je public_6b69229
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c000000000010c8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010c8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c000000000010c4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010c4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c000000000010c0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010c0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c000000000010bc
  JMPTB mov eax, 7
  JMPTB public_4c000000000010bc : nop
        je public_6b69229
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c000000000010b8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010b8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c000000000010b4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010b4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c000000000010b0
  JMPTB mov eax, 5
  JMPTB public_4c000000000010b0 : nop
        je public_6b6915c
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c000000000010ac
  JMPTB mov eax, 7
  JMPTB public_4c000000000010ac : nop
        je public_6b69229
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c000000000010a8
  JMPTB mov eax, 7
  JMPTB public_4c000000000010a8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c000000000010a4
  JMPTB mov eax, 7
  JMPTB public_4c000000000010a4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c000000000010a0
  JMPTB mov eax, 7
  JMPTB public_4c000000000010a0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c0000000000109c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000109c : nop
        je public_6b69229
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c00000000001098
  JMPTB mov eax, 7
  JMPTB public_4c00000000001098 : nop
        je public_6b69229
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c00000000001094
  JMPTB mov eax, 7
  JMPTB public_4c00000000001094 : nop
        je public_6b69229
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c00000000001090
  JMPTB mov eax, 7
  JMPTB public_4c00000000001090 : nop
        je public_6b69229
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c0000000000108c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000108c : nop
        je public_6b69229
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c00000000001088
  JMPTB mov eax, 7
  JMPTB public_4c00000000001088 : nop
        je public_6b69229
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c00000000001084
  JMPTB mov eax, 7
  JMPTB public_4c00000000001084 : nop
        je public_6b69229
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c00000000001080
  JMPTB mov eax, 7
  JMPTB public_4c00000000001080 : nop
        je public_6b69229
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c0000000000107c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000107c : nop
        je public_6b69229
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c00000000001078
  JMPTB mov eax, 7
  JMPTB public_4c00000000001078 : nop
        je public_6b69229
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c00000000001074
  JMPTB mov eax, 7
  JMPTB public_4c00000000001074 : nop
        je public_6b69229
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c00000000001070
  JMPTB mov eax, 7
  JMPTB public_4c00000000001070 : nop
        je public_6b69229
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c0000000000106c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000106c : nop
        je public_6b69229
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c00000000001068
  JMPTB mov eax, 7
  JMPTB public_4c00000000001068 : nop
        je public_6b69229
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c00000000001064
  JMPTB mov eax, 7
  JMPTB public_4c00000000001064 : nop
        je public_6b69229
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c00000000001060
  JMPTB mov eax, 7
  JMPTB public_4c00000000001060 : nop
        je public_6b69229
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c0000000000105c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000105c : nop
        je public_6b69229
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c00000000001058
  JMPTB mov eax, 7
  JMPTB public_4c00000000001058 : nop
        je public_6b69229
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c00000000001054
  JMPTB mov eax, 7
  JMPTB public_4c00000000001054 : nop
        je public_6b69229
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c00000000001050
  JMPTB mov eax, 7
  JMPTB public_4c00000000001050 : nop
        je public_6b69229
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c0000000000104c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000104c : nop
        je public_6b69229
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c00000000001048
  JMPTB mov eax, 7
  JMPTB public_4c00000000001048 : nop
        je public_6b69229
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c00000000001044
  JMPTB mov eax, 7
  JMPTB public_4c00000000001044 : nop
        je public_6b69229
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c00000000001040
  JMPTB mov eax, 7
  JMPTB public_4c00000000001040 : nop
        je public_6b69229
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c0000000000103c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000103c : nop
        je public_6b69229
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c00000000001038
  JMPTB mov eax, 7
  JMPTB public_4c00000000001038 : nop
        je public_6b69229
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c00000000001034
  JMPTB mov eax, 7
  JMPTB public_4c00000000001034 : nop
        je public_6b69229
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c00000000001030
  JMPTB mov eax, 7
  JMPTB public_4c00000000001030 : nop
        je public_6b69229
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c0000000000102c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000102c : nop
        je public_6b69229
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c00000000001028
  JMPTB mov eax, 7
  JMPTB public_4c00000000001028 : nop
        je public_6b69229
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c00000000001024
  JMPTB mov eax, 7
  JMPTB public_4c00000000001024 : nop
        je public_6b69229
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c00000000001020
  JMPTB mov eax, 7
  JMPTB public_4c00000000001020 : nop
        je public_6b69229
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c0000000000101c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000101c : nop
        je public_6b69229
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c00000000001018
  JMPTB mov eax, 7
  JMPTB public_4c00000000001018 : nop
        je public_6b69229
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c00000000001014
  JMPTB mov eax, 7
  JMPTB public_4c00000000001014 : nop
        je public_6b69229
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c00000000001010
  JMPTB mov eax, 7
  JMPTB public_4c00000000001010 : nop
        je public_6b69229
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c0000000000100c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000100c : nop
        je public_6b69229
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c00000000001008
  JMPTB mov eax, 7
  JMPTB public_4c00000000001008 : nop
        je public_6b69229
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c00000000001004
  JMPTB mov eax, 7
  JMPTB public_4c00000000001004 : nop
        je public_6b69229
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c00000000001000
  JMPTB mov eax, 7
  JMPTB public_4c00000000001000 : nop
        je public_6b69229
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c00000000000ffc
  JMPTB mov eax, 7
  JMPTB public_4c00000000000ffc : nop
        je public_6b69229
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c00000000000ff8
  JMPTB mov eax, 7
  JMPTB public_4c00000000000ff8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c00000000000ff4
  JMPTB mov eax, 7
  JMPTB public_4c00000000000ff4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c00000000000ff0
  JMPTB mov eax, 7
  JMPTB public_4c00000000000ff0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c00000000000fec
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fec : nop
        je public_6b69229
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c00000000000fe8
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fe8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c00000000000fe4
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fe4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c00000000000fe0
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fe0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c00000000000fdc
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fdc : nop
        je public_6b69229
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c00000000000fd8
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fd8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c00000000000fd4
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fd4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c00000000000fd0
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fd0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c00000000000fcc
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fcc : nop
        je public_6b69229
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c00000000000fc8
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fc8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c00000000000fc4
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fc4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c00000000000fc0
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fc0 : nop
        je public_6b69229
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c00000000000fbc
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fbc : nop
        je public_6b69229
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c00000000000fb8
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fb8 : nop
        je public_6b69229
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c00000000000fb4
  JMPTB mov eax, 7
  JMPTB public_4c00000000000fb4 : nop
        je public_6b69229
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c00000000000fb0
  JMPTB mov eax, 6
  JMPTB public_4c00000000000fb0 : nop
        je public_6b691f9
  JMPTB int 3
        public_6b6912b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b69140
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b69140 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        inc eax
        mov dword ptr ds : [edi+0x24], edx
        jmp public_6b69226
        public_6b6915c : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc ebx
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b69171
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b69171 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov dword ptr ss : [ebp], eax
        setne al
        test dl, dl
        mov byte ptr ds : [edi+0x30], al
        je public_6b691a8
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b691a8
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b691a8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b691bb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b691bb : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        jmp public_6b69223
        public_6b691c5 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b691dc
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b691dc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        test dl, dl
        mov dword ptr ds : [edi+0x2C], ecx
        mov dword ptr ss : [ebp], eax
        je public_6b69210
        public_6b691f9 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6b69210
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b69210 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], edx
        public_6b69223 : nop
        add eax, 4
        public_6b69226 : nop
        mov dword ptr ss : [ebp], eax
        public_6b69229 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ebp
        mov ecx, edi
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b69405
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b6924e : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b69265
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b69265 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
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
        jbe public_6b69296
        mov dword ptr ds : [esi+0xC], ecx
        public_6b69296 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
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
        jbe public_6b692c0
        mov dword ptr ds : [esi+0xC], ecx
        public_6b692c0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
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
        jbe public_6b692ea
        mov dword ptr ds : [esi+0xC], ecx
        public_6b692ea : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [eax]
        add eax, 2
        test dl, dl
        mov word ptr ds : [edi+0x40], bx
        mov dword ptr ss : [ebp], eax
        je public_6b69210
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b69210
        mov dword ptr ds : [esi+0xC], ecx
        jmp public_6b69210
        public_6b69329 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b69340
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b69340 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
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
        jbe public_6b69371
        mov dword ptr ds : [esi+0xC], ecx
        public_6b69371 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
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
        jbe public_6b6939b
        mov dword ptr ds : [esi+0xC], ecx
        public_6b6939b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [eax]
        add eax, 2
        test dl, dl
        mov word ptr ds : [edi+0x40], bx
        mov dword ptr ss : [ebp], eax
        je public_6b69210
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b69210
        mov dword ptr ds : [esi+0xC], ecx
        jmp public_6b69210
        public_6b693da : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6b693f1
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b693f1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b6944f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], ecx
        jmp public_6b69223
        public_6b69405 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
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
        jbe public_6b69443
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b69443 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b6944f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b69090)
        ASM_EXPORT_ENTRY_FIRST(0x6b6912b, public_6b6912b)
        ASM_EXPORT_ENTRY(0x6b6915c, public_6b6915c)
        ASM_EXPORT_ENTRY(0x6b691c5, public_6b691c5)
        ASM_EXPORT_ENTRY(0x6b691f9, public_6b691f9)
        ASM_EXPORT_ENTRY(0x6b69229, public_6b69229)
        ASM_EXPORT_ENTRY(0x6b6924e, public_6b6924e)
        ASM_EXPORT_ENTRY(0x6b69329, public_6b69329)
        ASM_EXPORT_ENTRY_LAST(0x6b693da, public_6b693da)
    }
}

#undef public_6b690ce
#undef public_6b690e3
#undef public_6b69110
#undef public_6b6912b
#undef public_6b69140
#undef public_6b6915c
#undef public_6b69171
#undef public_6b691a8
#undef public_6b691bb
#undef public_6b691c5
#undef public_6b691dc
#undef public_6b691f9
#undef public_6b69210
#undef public_6b69223
#undef public_6b69226
#undef public_6b69229
#undef public_6b6924e
#undef public_6b69265
#undef public_6b69296
#undef public_6b692c0
#undef public_6b692ea
#undef public_6b69329
#undef public_6b69340
#undef public_6b69371
#undef public_6b6939b
#undef public_6b693da
#undef public_6b693f1
#undef public_6b69405
#undef public_6b69443
#undef public_6b6944f

#pragma init_seg(compiler)
extern "C" void const* const public_6b6912b = __AsmFindLabelExport(&internal_6b69090, 0x6b6912b);
extern "C" void const* const public_6b6915c = __AsmFindLabelExport(&internal_6b69090, 0x6b6915c);
extern "C" void const* const public_6b691c5 = __AsmFindLabelExport(&internal_6b69090, 0x6b691c5);
extern "C" void const* const public_6b691f9 = __AsmFindLabelExport(&internal_6b69090, 0x6b691f9);
extern "C" void const* const public_6b69229 = __AsmFindLabelExport(&internal_6b69090, 0x6b69229);
extern "C" void const* const public_6b6924e = __AsmFindLabelExport(&internal_6b69090, 0x6b6924e);
extern "C" void const* const public_6b69329 = __AsmFindLabelExport(&internal_6b69090, 0x6b69329);
extern "C" void const* const public_6b693da = __AsmFindLabelExport(&internal_6b69090, 0x6b693da);
