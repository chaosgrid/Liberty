#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2c360, internal_6c2c360, public_6c2c360);
extern "C" NAKED register_t __cdecl internal_6c2c360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or dword ptr ds : [eax+8], 2
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6c2c360)
    }
}
