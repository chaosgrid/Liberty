#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42722);

#define public_6d42735 _public_6d42735

PROC_DECLARE(0x6d42722, internal_6d42722, public_6d42722);
extern "C" NAKED register_t __cdecl internal_6d42722()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d42735
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d42735
        mov al, byte ptr ds : [eax+0x1D]
        ret 
        public_6d42735 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6d42722)
    }
}

#undef public_6d42735
