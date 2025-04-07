#include "Alchemy-PCH.h"

PROC_DECLARE(0x6207400, internal_6207400, public_6207400);
extern "C" NAKED register_t __cdecl internal_6207400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6207400)
    }
}
