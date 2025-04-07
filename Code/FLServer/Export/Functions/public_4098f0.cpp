#include "FLServer-PCH.h"

PROC_DECLARE(0x4098f0, internal_4098f0, public_4098f0);
extern "C" NAKED register_t __cdecl internal_4098f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41cdb0]
        mov dword ptr ds : [public_426bc0], eax
        ret 
        UNREACHABLE_TRAP(0x4098f0)
    }
}
