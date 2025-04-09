#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6e20, internal_4f6e20, public_4f6e20);
extern "C" NAKED register_t __cdecl internal_4f6e20()
{
    __asm
    {
        mov dword ptr ds : [public_674c60], offset public_5d99a8
        ret 
        UNREACHABLE_TRAP(0x4f6e20)
    }
}
