#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a880, internal_621a880, public_621a880);
extern "C" NAKED register_t __cdecl internal_621a880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x621a880)
    }
}
