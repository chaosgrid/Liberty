#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d426f2);

#define public_6d42709 _public_6d42709

PROC_DECLARE(0x6d426f2, internal_6d426f2, public_6d426f2);
extern "C" NAKED register_t __cdecl internal_6d426f2()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d42709
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d42709
        mov eax, dword ptr ds : [eax+8]
        and eax, dword ptr ss : [esp+0xC]
        ret 
        public_6d42709 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d426f2)
    }
}

#undef public_6d42709
