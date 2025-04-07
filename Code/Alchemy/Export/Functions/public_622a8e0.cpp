#include "Alchemy-PCH.h"

PROC_DECLARE(0x622a8e0, internal_622a8e0, public_622a8e0);
extern "C" NAKED register_t __cdecl internal_622a8e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+0x1C]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x622a8e0)
    }
}
