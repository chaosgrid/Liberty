#include "FLServer-PCH.h"

PROC_DECLARE(0x415c20, internal_415c20, public_415c20);
extern "C" NAKED register_t __cdecl internal_415c20()
{
    __asm
    {
        mov word ptr ds : [public_42956c], 3
        mov byte ptr ds : [public_42956e], 1
        ret 
        UNREACHABLE_TRAP(0x415c20)
    }
}
