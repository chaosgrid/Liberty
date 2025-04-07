#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);

#define public_6f4b017 _public_6f4b017

PROC_DECLARE(0x6f4aff0, internal_6f4aff0, public_6f4aff0);
extern "C" NAKED register_t __cdecl internal_6f4aff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+4]
        sar ecx, 4
        add edx, eax
        cmp ecx, edx
        jge public_6f4b017
/*FIXUP push offset public_6f6036c @0x6f4b00c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6036c
        call public_6f4c7f0
        pop ecx
        public_6f4b017 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4aff0)
    }
}

#undef public_6f4b017
