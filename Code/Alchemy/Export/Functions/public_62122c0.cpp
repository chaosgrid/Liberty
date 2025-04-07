#include "Alchemy-PCH.h"

PROC_DECLARE(0x62122c0, internal_62122c0, public_62122c0);
extern "C" NAKED register_t __cdecl internal_62122c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x62122c0)
    }
}
