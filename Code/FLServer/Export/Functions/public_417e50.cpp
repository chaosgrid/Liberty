#include "FLServer-PCH.h"

PROC_DECLARE(0x417e50, internal_417e50, public_417e50);
extern "C" NAKED register_t __cdecl internal_417e50()
{
    __asm
    {
        mov word ptr ds : [public_42a6f8], 2
        mov byte ptr ds : [public_42a6fa], 1
        ret 
        UNREACHABLE_TRAP(0x417e50)
    }
}
