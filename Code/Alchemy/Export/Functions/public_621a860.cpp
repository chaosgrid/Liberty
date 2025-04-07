#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a860, internal_621a860, public_621a860);
extern "C" NAKED register_t __cdecl internal_621a860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x621a860)
    }
}
