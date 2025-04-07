#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02710, internal_6c02710, public_6c02710);
extern "C" NAKED register_t __cdecl internal_6c02710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e484]
        mov dword ptr ds : [public_6c14134], eax
        ret 
        UNREACHABLE_TRAP(0x6c02710)
    }
}
