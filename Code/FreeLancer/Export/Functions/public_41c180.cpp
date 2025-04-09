#include "Freelancer-PCH.h"

PROC_DECLARE(0x41c180, internal_41c180, public_41c180);
extern "C" NAKED register_t __cdecl internal_41c180()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_5c9358
        ret 
        UNREACHABLE_TRAP(0x41c180)
    }
}
