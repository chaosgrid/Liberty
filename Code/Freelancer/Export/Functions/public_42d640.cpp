#include "Freelancer-PCH.h"

PROC_DECLARE(0x42d640, internal_42d640, public_42d640);
extern "C" NAKED register_t __cdecl internal_42d640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca858]
        mov dword ptr ds : [public_667d24], eax
        ret 
        UNREACHABLE_TRAP(0x42d640)
    }
}
