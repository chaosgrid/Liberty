#include "Freelancer-PCH.h"

PROC_DECLARE(0x564ac0, internal_564ac0, public_564ac0);
extern "C" NAKED register_t __cdecl internal_564ac0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67bfd8], eax
        mov byte ptr ds : [public_67bfdc], al
        ret 
        UNREACHABLE_TRAP(0x564ac0)
    }
}
