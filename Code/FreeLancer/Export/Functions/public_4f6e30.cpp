#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6e30, internal_4f6e30, public_4f6e30);
extern "C" NAKED register_t __cdecl internal_4f6e30()
{
    __asm
    {
        mov dword ptr ds : [public_674c5c], offset public_5d99b8
        ret 
        UNREACHABLE_TRAP(0x4f6e30)
    }
}
