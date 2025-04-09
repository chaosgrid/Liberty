#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d4ae0, internal_4d4ae0, public_4d4ae0);
extern "C" NAKED register_t __cdecl internal_4d4ae0()
{
    __asm
    {
        mov dword ptr ds : [public_674984], 0
        ret 
        UNREACHABLE_TRAP(0x4d4ae0)
    }
}
