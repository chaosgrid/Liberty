#include "FLServer-PCH.h"

PROC_DECLARE(0x4127f0, internal_4127f0, public_4127f0);
extern "C" NAKED register_t __cdecl internal_4127f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41debc]
        mov dword ptr ds : [public_428c34], eax
        ret 
        UNREACHABLE_TRAP(0x4127f0)
    }
}
