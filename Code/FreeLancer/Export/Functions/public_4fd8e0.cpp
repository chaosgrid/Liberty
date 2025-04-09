#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fd8e0, internal_4fd8e0, public_4fd8e0);
extern "C" NAKED register_t __cdecl internal_4fd8e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da3ec]
        mov dword ptr ds : [public_674f88], eax
        ret 
        UNREACHABLE_TRAP(0x4fd8e0)
    }
}
