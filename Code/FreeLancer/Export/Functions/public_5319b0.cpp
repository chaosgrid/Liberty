#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5319b0, internal_5319b0, public_5319b0);
extern "C" NAKED register_t __cdecl internal_5319b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de0e4]
        mov dword ptr ds : [public_675528], eax
        ret 
        UNREACHABLE_TRAP(0x5319b0)
    }
}
