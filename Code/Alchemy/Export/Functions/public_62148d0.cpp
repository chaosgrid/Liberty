#include "Alchemy-PCH.h"

PROC_DECLARE(0x62148d0, internal_62148d0, public_62148d0);
extern "C" NAKED register_t __cdecl internal_62148d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x62148d0)
    }
}
