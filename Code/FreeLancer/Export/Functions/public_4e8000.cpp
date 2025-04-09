#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e8000, internal_4e8000, public_4e8000);
extern "C" NAKED register_t __cdecl internal_4e8000()
{
    __asm
    {
        mov dword ptr ds : [public_674b54], 0
        mov dword ptr ds : [public_674b58], 0
        mov dword ptr ds : [public_674b5c], 0
        ret 
        UNREACHABLE_TRAP(0x4e8000)
    }
}
