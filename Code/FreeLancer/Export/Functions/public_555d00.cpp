#include "FreeLancer-PCH.h"

PROC_DECLARE(0x555d00, internal_555d00, public_555d00);
extern "C" NAKED register_t __cdecl internal_555d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1210]
        mov dword ptr ds : [public_6799a4], eax
        ret 
        UNREACHABLE_TRAP(0x555d00)
    }
}
