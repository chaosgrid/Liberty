#include "FLServer-PCH.h"

PROC_DECLARE(0x409140, internal_409140, public_409140);
extern "C" NAKED register_t __cdecl internal_409140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41cb68]
        mov dword ptr ds : [public_426b94], eax
        ret 
        UNREACHABLE_TRAP(0x409140)
    }
}
