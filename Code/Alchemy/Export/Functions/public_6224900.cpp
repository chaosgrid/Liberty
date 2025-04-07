#include "Alchemy-PCH.h"


#define public_622491a _public_622491a

PROC_DECLARE(0x6224900, internal_6224900, public_6224900);
extern "C" NAKED register_t __cdecl internal_6224900()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xB7EE41C
        jne public_622491a
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622491a : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6224900)
    }
}

#undef public_622491a
