#include "Alchemy-PCH.h"


#define public_62248ec _public_62248ec

PROC_DECLARE(0x62248d0, internal_62248d0, public_62248d0);
extern "C" NAKED register_t __cdecl internal_62248d0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xB7EE41C
        jne public_62248ec
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_62248ec : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62248d0)
    }
}

#undef public_62248ec
