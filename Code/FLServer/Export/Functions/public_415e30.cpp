#include "FLServer-PCH.h"

PROC_DECLARE(0x415e30, internal_415e30, public_415e30);
extern "C" NAKED register_t __cdecl internal_415e30()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_429d90], ax
        mov byte ptr ds : [public_429d92], al
        ret 
        UNREACHABLE_TRAP(0x415e30)
    }
}
