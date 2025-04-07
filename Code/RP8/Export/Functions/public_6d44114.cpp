#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44114);

#define public_6d4412e _public_6d4412e

PROC_DECLARE(0x6d44114, internal_6d44114, public_6d44114);
extern "C" NAKED register_t __cdecl internal_6d44114()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d4412e
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d4412e
        mov cl, byte ptr ss : [esp+0xC]
        or byte ptr ds : [eax+9], 8
        mov byte ptr ds : [eax+0x2C], cl
        public_6d4412e : nop
        ret 
        UNREACHABLE_TRAP(0x6d44114)
    }
}

#undef public_6d4412e
