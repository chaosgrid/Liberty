#include "Alchemy-PCH.h"

PROC_DECLARE(0x621e660, internal_621e660, public_621e660);
extern "C" NAKED register_t __cdecl internal_621e660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621e660)
    }
}
