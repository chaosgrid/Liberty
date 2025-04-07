#include "Freelancer-PCH.h"

PROC_DECLARE(0x51ec20, internal_51ec20, public_51ec20);
extern "C" NAKED register_t __cdecl internal_51ec20()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_675350], 0x10
        mov dword ptr ds : [public_675354], eax
        mov dword ptr ds : [public_675358], 0xFFFFFFFF
        mov dword ptr ds : [public_67535c], eax
        ret 
        UNREACHABLE_TRAP(0x51ec20)
    }
}
