#include "FLServer-PCH.h"

PROC_DECLARE(0x40d570, internal_40d570, public_40d570);
extern "C" NAKED register_t __cdecl internal_40d570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d2b8]
        mov dword ptr ds : [public_42783c], eax
        ret 
        UNREACHABLE_TRAP(0x40d570)
    }
}
