#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c7260, internal_4c7260, public_4c7260);
extern "C" NAKED register_t __cdecl internal_4c7260()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_673518], eax
        mov dword ptr ds : [public_67351c], eax
        ret 
        UNREACHABLE_TRAP(0x4c7260)
    }
}
