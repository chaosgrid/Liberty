#include "Freelancer-PCH.h"

PROC_DECLARE(0x41dc00, internal_41dc00, public_41dc00);
extern "C" NAKED register_t __cdecl internal_41dc00()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_616794], eax
        mov byte ptr ds : [public_616798], al
        ret 
        UNREACHABLE_TRAP(0x41dc00)
    }
}
