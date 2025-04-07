#include "FLServer-PCH.h"

PROC_DECLARE(0x406ee0, internal_406ee0, public_406ee0);
extern "C" NAKED register_t __cdecl internal_406ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c71c]
        mov dword ptr ds : [public_426230], eax
        ret 
        UNREACHABLE_TRAP(0x406ee0)
    }
}
