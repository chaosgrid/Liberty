#include "FLServer-PCH.h"

PROC_DECLARE(0x415bb0, internal_415bb0, public_415bb0);
extern "C" NAKED register_t __cdecl internal_415bb0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_429564], ax
        mov byte ptr ds : [public_429566], al
        ret 
        UNREACHABLE_TRAP(0x415bb0)
    }
}
