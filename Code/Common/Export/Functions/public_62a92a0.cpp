#include "Common-PCH.h"

PROC_DECLARE(0x62a92a0, internal_62a92a0, public_62a92a0);
extern "C" NAKED register_t __cdecl internal_62a92a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x168], eax
        ret 4
        UNREACHABLE_TRAP(0x62a92a0)
    }
}
