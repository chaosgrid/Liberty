#include "Server-PCH.h"

PROC_DECLARE(0x6cfb920, internal_6cfb920, public_6cfb920);
extern "C" NAKED register_t __cdecl internal_6cfb920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d64500]
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x6cfb920)
    }
}
