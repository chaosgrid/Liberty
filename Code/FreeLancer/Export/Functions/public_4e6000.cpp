#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e6000, internal_4e6000, public_4e6000);
extern "C" NAKED register_t __cdecl internal_4e6000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8d54]
        mov dword ptr ds : [public_674b14], eax
        ret 
        UNREACHABLE_TRAP(0x4e6000)
    }
}
