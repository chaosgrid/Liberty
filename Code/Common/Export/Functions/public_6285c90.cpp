#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_6348fe0);

#define public_6285cab _public_6285cab

PROC_DECLARE(0x6285c90, internal_6285c90, public_6285c90);
extern "C" NAKED register_t __cdecl internal_6285c90()
{
    __asm
    {
        cmp word ptr ds : [ecx+6], 0
        je public_6285cab
        mov eax, dword ptr ds : [ecx+8]
        push ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [edx+0x90]
        call public_6348fe0
        public_6285cab : nop
        ret 
        UNREACHABLE_TRAP(0x6285c90)
    }
}

#undef public_6285cab
