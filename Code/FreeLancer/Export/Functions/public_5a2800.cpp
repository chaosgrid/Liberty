#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a2800, internal_5a2800, public_5a2800);
extern "C" NAKED register_t __cdecl internal_5a2800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e600c]
        mov dword ptr ds : [public_67de44], eax
        ret 
        UNREACHABLE_TRAP(0x5a2800)
    }
}
