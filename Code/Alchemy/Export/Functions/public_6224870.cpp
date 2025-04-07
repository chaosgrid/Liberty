#include "Alchemy-PCH.h"


#define public_622488f _public_622488f

PROC_DECLARE(0x6224870, internal_6224870, public_6224870);
extern "C" NAKED register_t __cdecl internal_6224870()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1FC112
        jne public_622488f
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [eax+0x80]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622488f : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6224870)
    }
}

#undef public_622488f
