#include "FLServer-PCH.h"

PROC_DECLARE(0x417e70, internal_417e70, public_417e70);
extern "C" NAKED register_t __cdecl internal_417e70()
{
    __asm
    {
        mov word ptr ds : [public_429e0c], 3
        mov byte ptr ds : [public_429e0e], 1
        ret 
        UNREACHABLE_TRAP(0x417e70)
    }
}
