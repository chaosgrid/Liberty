#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f3a70, internal_4f3a70, public_4f3a70);
extern "C" NAKED register_t __cdecl internal_4f3a70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9680]
        mov dword ptr ds : [public_674bc0], eax
        ret 
        UNREACHABLE_TRAP(0x4f3a70)
    }
}
