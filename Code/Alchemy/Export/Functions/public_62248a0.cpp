#include "Alchemy-PCH.h"


#define public_62248bd _public_62248bd

PROC_DECLARE(0x62248a0, internal_62248a0, public_62248a0);
extern "C" NAKED register_t __cdecl internal_62248a0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1FC112
        jne public_62248bd
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x80], cl
        xor eax, eax
        ret 0xC
        public_62248bd : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62248a0)
    }
}

#undef public_62248bd
