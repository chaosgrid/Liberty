#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73a10, internal_6b73a10, public_6b73a10);
extern "C" NAKED register_t __cdecl internal_6b73a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x1C], 5
        mov eax, 1
        ret 0x18
        UNREACHABLE_TRAP(0x6b73a10)
    }
}
