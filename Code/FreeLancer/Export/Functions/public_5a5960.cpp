#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a5960, internal_5a5960, public_5a5960);
extern "C" NAKED register_t __cdecl internal_5a5960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e63f8]
        mov dword ptr ds : [public_67e7a4], eax
        ret 
        UNREACHABLE_TRAP(0x5a5960)
    }
}
