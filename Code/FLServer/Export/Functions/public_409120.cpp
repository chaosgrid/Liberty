#include "FLServer-PCH.h"

PROC_DECLARE(0x409120, internal_409120, public_409120);
extern "C" NAKED register_t __cdecl internal_409120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41cb64]
        mov dword ptr ds : [public_426b98], eax
        ret 
        UNREACHABLE_TRAP(0x409120)
    }
}
