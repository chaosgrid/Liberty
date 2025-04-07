#include "FLServer-PCH.h"

PROC_DECLARE(0x4135e0, internal_4135e0, public_4135e0);
extern "C" NAKED register_t __cdecl internal_4135e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e178]
        mov dword ptr ds : [public_428c74], eax
        ret 
        UNREACHABLE_TRAP(0x4135e0)
    }
}
