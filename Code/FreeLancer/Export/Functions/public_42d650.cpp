#include "Freelancer-PCH.h"

PROC_DECLARE(0x42d650, internal_42d650, public_42d650);
extern "C" NAKED register_t __cdecl internal_42d650()
{
    __asm
    {
        call dword ptr ds : [public_5c72ec]
        mov dword ptr ds : [public_667d20], eax
        ret 
        UNREACHABLE_TRAP(0x42d650)
    }
}
