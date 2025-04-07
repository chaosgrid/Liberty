#include "FLServer-PCH.h"

PROC_DECLARE(0x413a90, internal_413a90, public_413a90);
extern "C" NAKED register_t __cdecl internal_413a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e180]
        mov dword ptr ds : [public_428ca0], eax
        ret 
        UNREACHABLE_TRAP(0x413a90)
    }
}
