#include "FLServer-PCH.h"

PROC_DECLARE(0x40ec60, internal_40ec60, public_40ec60);
extern "C" NAKED register_t __cdecl internal_40ec60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b824]
        ret 
        UNREACHABLE_TRAP(0x40ec60)
    }
}
