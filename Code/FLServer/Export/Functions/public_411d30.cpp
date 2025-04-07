#include "FLServer-PCH.h"

PROC_DECLARE(0x411d30, internal_411d30, public_411d30);
extern "C" NAKED register_t __cdecl internal_411d30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b294]
        ret 
        UNREACHABLE_TRAP(0x411d30)
    }
}
