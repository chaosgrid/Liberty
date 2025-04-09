#include "FreeLancer-PCH.h"

PROC_DECLARE(0x555cf0, internal_555cf0, public_555cf0);
extern "C" NAKED register_t __cdecl internal_555cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e120c]
        mov dword ptr ds : [public_6799a8], eax
        ret 
        UNREACHABLE_TRAP(0x555cf0)
    }
}
