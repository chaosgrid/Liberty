#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f323c0);

#define public_6f323e9 _public_6f323e9
#define public_6f323eb _public_6f323eb
#define public_6f323f9 _public_6f323f9

PROC_DECLARE(0x6f323c0, internal_6f323c0, public_6f323c0);
extern "C" NAKED register_t __cdecl internal_6f323c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov eax, dword ptr ds : [edx+4]
        add eax, 0xFFFFC0E9
        cmp eax, 0xD
        ja public_6f323f9
/*FIXUP movzx eax, byte ptr ds : [eax+public_6f32408] @0x6f323db*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f323fc] @0x6f323e2*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000052c2
  JMPTB mov eax, 0
  JMPTB public_4c000000000052c2 : nop
        je public_6f323e9
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000052be
  JMPTB mov eax, 2
  JMPTB public_4c000000000052be : nop
        je public_6f323f9
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000052ba
  JMPTB mov eax, 0
  JMPTB public_4c000000000052ba : nop
        je public_6f323e9
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000052b6
  JMPTB mov eax, 2
  JMPTB public_4c000000000052b6 : nop
        je public_6f323f9
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000052b2
  JMPTB mov eax, 0
  JMPTB public_4c000000000052b2 : nop
        je public_6f323e9
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000052ae
  JMPTB mov eax, 2
  JMPTB public_4c000000000052ae : nop
        je public_6f323f9
  JMPTB cmp eax, 6
  JMPTB jne public_4c000000000052aa
  JMPTB mov eax, 0
  JMPTB public_4c000000000052aa : nop
        je public_6f323e9
  JMPTB cmp eax, 7
  JMPTB jne public_4c000000000052a6
  JMPTB mov eax, 2
  JMPTB public_4c000000000052a6 : nop
        je public_6f323f9
  JMPTB cmp eax, 8
  JMPTB jne public_4c000000000052a2
  JMPTB mov eax, 2
  JMPTB public_4c000000000052a2 : nop
        je public_6f323f9
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000529e
  JMPTB mov eax, 0
  JMPTB public_4c0000000000529e : nop
        je public_6f323e9
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000529a
  JMPTB mov eax, 2
  JMPTB public_4c0000000000529a : nop
        je public_6f323f9
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000005296
  JMPTB mov eax, 2
  JMPTB public_4c00000000005296 : nop
        je public_6f323f9
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c00000000005292
  JMPTB mov eax, 2
  JMPTB public_4c00000000005292 : nop
        je public_6f323f9
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000528e
  JMPTB mov eax, 1
  JMPTB public_4c0000000000528e : nop
        je public_6f323eb
  JMPTB int 3
        public_6f323e9 : nop
        mov edx, dword ptr ds : [edx]
        public_6f323eb : nop
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], edx
        mov al, 1
        ret 
        public_6f323f9 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6f323c0)
        ASM_EXPORT_ENTRY_FIRST(0x6f323e9, public_6f323e9)
        ASM_EXPORT_ENTRY(0x6f323eb, public_6f323eb)
        ASM_EXPORT_ENTRY_LAST(0x6f323f9, public_6f323f9)
    }
}

#undef public_6f323e9
#undef public_6f323eb
#undef public_6f323f9

#pragma init_seg(compiler)
extern "C" void const* const public_6f323e9 = __AsmFindLabelExport(&internal_6f323c0, 0x6f323e9);
extern "C" void const* const public_6f323eb = __AsmFindLabelExport(&internal_6f323c0, 0x6f323eb);
extern "C" void const* const public_6f323f9 = __AsmFindLabelExport(&internal_6f323c0, 0x6f323f9);
