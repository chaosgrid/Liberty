#include "FreeLancer-PCH.h"

PROC_DECLARE(0x443a70, internal_443a70, public_443a70);
extern "C" NAKED register_t __cdecl internal_443a70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb90c]
        mov dword ptr ds : [public_668a70], eax
        ret 
        UNREACHABLE_TRAP(0x443a70)
    }
}
