#include "FreeLancer-PCH.h"

PROC_DECLARE(0x555ce0, internal_555ce0, public_555ce0);
extern "C" NAKED register_t __cdecl internal_555ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e120c]
        mov dword ptr ds : [public_6799ac], eax
        ret 
        UNREACHABLE_TRAP(0x555ce0)
    }
}
