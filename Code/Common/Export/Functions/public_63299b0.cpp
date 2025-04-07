#include "Common-PCH.h"

PROC_DECLARE(0x63299b0, internal_63299b0, public_63299b0);
extern "C" NAKED register_t __cdecl internal_63299b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        ret 0xC
        UNREACHABLE_TRAP(0x63299b0)
    }
}
