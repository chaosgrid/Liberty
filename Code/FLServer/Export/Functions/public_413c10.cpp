#include "FLServer-PCH.h"

PROC_DECLARE(0x413c10, internal_413c10, public_413c10);
extern "C" NAKED register_t __cdecl internal_413c10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e288]
        mov dword ptr ds : [public_428cc8], eax
        ret 
        UNREACHABLE_TRAP(0x413c10)
    }
}
