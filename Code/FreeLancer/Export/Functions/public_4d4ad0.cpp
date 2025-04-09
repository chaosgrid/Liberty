#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d4ad0, internal_4d4ad0, public_4d4ad0);
extern "C" NAKED register_t __cdecl internal_4d4ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7c18]
        mov dword ptr ds : [public_674988], eax
        ret 
        UNREACHABLE_TRAP(0x4d4ad0)
    }
}
