#include "THORN-PCH.h"

PROC_DECLARE(0x6f39440, internal_6f39440, public_6f39440);
extern "C" NAKED register_t __cdecl internal_6f39440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x2C]
        ret 4
        UNREACHABLE_TRAP(0x6f39440)
    }
}
