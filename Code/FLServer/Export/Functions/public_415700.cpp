#include "FLServer-PCH.h"

PROC_DECLARE(0x415700, internal_415700, public_415700);
extern "C" NAKED register_t __cdecl internal_415700()
{
    __asm
    {
        mov word ptr ds : [public_429528], 2
        mov byte ptr ds : [public_42952a], 1
        ret 
        UNREACHABLE_TRAP(0x415700)
    }
}
