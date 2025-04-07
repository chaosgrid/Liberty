#include "Alchemy-PCH.h"

PROC_DECLARE(0x6207c90, internal_6207c90, public_6207c90);
extern "C" NAKED register_t __cdecl internal_6207c90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6207c90)
    }
}
