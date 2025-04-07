#include "FLServer-PCH.h"

PROC_DECLARE(0x4132c0, internal_4132c0, public_4132c0);
extern "C" NAKED register_t __cdecl internal_4132c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e070]
        mov dword ptr ds : [public_428c4c], eax
        ret 
        UNREACHABLE_TRAP(0x4132c0)
    }
}
