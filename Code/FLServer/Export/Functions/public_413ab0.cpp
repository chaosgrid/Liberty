#include "FLServer-PCH.h"

PROC_DECLARE(0x413ab0, internal_413ab0, public_413ab0);
extern "C" NAKED register_t __cdecl internal_413ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e184]
        mov dword ptr ds : [public_428c9c], eax
        ret 
        UNREACHABLE_TRAP(0x413ab0)
    }
}
