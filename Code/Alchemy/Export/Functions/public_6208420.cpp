#include "Alchemy-PCH.h"

PROC_DECLARE(0x6208420, internal_6208420, public_6208420);
extern "C" NAKED register_t __cdecl internal_6208420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6208420)
    }
}
