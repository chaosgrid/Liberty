#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c210, internal_621c210, public_621c210);
extern "C" NAKED register_t __cdecl internal_621c210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x621c210)
    }
}
