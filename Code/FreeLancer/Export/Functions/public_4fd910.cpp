#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fd910, internal_4fd910, public_4fd910);
extern "C" NAKED register_t __cdecl internal_4fd910()
{
    __asm
    {
        mov dword ptr ds : [public_674f7c], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x4fd910)
    }
}
