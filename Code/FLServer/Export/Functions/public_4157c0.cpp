#include "FLServer-PCH.h"

PROC_DECLARE(0x4157c0, internal_4157c0, public_4157c0);
extern "C" NAKED register_t __cdecl internal_4157c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x4157c0)
    }
}
