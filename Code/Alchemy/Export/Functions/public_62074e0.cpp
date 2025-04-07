#include "Alchemy-PCH.h"

PROC_DECLARE(0x62074e0, internal_62074e0, public_62074e0);
extern "C" NAKED register_t __cdecl internal_62074e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62074e0)
    }
}
