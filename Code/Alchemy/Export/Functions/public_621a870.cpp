#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a870, internal_621a870, public_621a870);
extern "C" NAKED register_t __cdecl internal_621a870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x621a870)
    }
}
