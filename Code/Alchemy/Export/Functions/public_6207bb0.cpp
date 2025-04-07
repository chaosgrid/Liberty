#include "Alchemy-PCH.h"

PROC_DECLARE(0x6207bb0, internal_6207bb0, public_6207bb0);
extern "C" NAKED register_t __cdecl internal_6207bb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6207bb0)
    }
}
