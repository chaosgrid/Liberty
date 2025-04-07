#include "FLServer-PCH.h"

PROC_DECLARE(0x413ac0, internal_413ac0, public_413ac0);
extern "C" NAKED register_t __cdecl internal_413ac0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_428ca8], ax
        mov byte ptr ds : [public_428caa], al
        ret 
        UNREACHABLE_TRAP(0x413ac0)
    }
}
