#include "Alchemy-PCH.h"

PROC_DECLARE(0x6235790, internal_6235790, public_6235790);
extern "C" NAKED register_t __cdecl internal_6235790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6235790)
    }
}
