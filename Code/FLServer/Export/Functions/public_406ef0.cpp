#include "FLServer-PCH.h"

PROC_DECLARE(0x406ef0, internal_406ef0, public_406ef0);
extern "C" NAKED register_t __cdecl internal_406ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c720]
        mov dword ptr ds : [public_426220], eax
        ret 
        UNREACHABLE_TRAP(0x406ef0)
    }
}
