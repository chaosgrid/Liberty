#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6e10, internal_4f6e10, public_4f6e10);
extern "C" NAKED register_t __cdecl internal_4f6e10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d99a0]
        mov dword ptr ds : [public_674c64], eax
        ret 
        UNREACHABLE_TRAP(0x4f6e10)
    }
}
