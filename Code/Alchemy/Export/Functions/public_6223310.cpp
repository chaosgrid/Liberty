#include "Alchemy-PCH.h"


#define public_6223332 _public_6223332

PROC_DECLARE(0x6223310, internal_6223310, public_6223310);
extern "C" NAKED register_t __cdecl internal_6223310()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xE02B8BD4
        jne public_6223332
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x4C]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6223332 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6223310)
    }
}

#undef public_6223332
