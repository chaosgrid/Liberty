#include "Common-PCH.h"

PROC_DECLARE(0x62d2200, internal_62d2200, public_62d2200);
extern "C" NAKED register_t __cdecl internal_62d2200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0330]
        mov dword ptr ds : [public_63fc95c], eax
        ret 
        UNREACHABLE_TRAP(0x62d2200)
    }
}
