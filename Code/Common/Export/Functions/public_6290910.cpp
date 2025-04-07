#include "Common-PCH.h"

PROC_DECLARE(0x6290910, internal_6290910, public_6290910);
extern "C" NAKED register_t __cdecl internal_6290910()
{
    __asm
    {
        mov dword ptr ds : [public_63fc0d0], 0x5368D4A5
        mov dword ptr ds : [public_63fc0d4], 0x5368D4A5
        mov dword ptr ds : [public_63fc0d8], 0x5368D4A5
        ret 
        UNREACHABLE_TRAP(0x6290910)
    }
}
