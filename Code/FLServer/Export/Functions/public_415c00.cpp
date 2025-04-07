#include "FLServer-PCH.h"

PROC_DECLARE(0x415c00, internal_415c00, public_415c00);
extern "C" NAKED register_t __cdecl internal_415c00()
{
    __asm
    {
        mov word ptr ds : [public_429578], 2
        mov byte ptr ds : [public_42957a], 1
        ret 
        UNREACHABLE_TRAP(0x415c00)
    }
}
