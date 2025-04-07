#include "FLServer-PCH.h"

PROC_DECLARE(0x415ce0, internal_415ce0, public_415ce0);
extern "C" NAKED register_t __cdecl internal_415ce0()
{
    __asm
    {
        mov eax, offset public_41e620
        ret 
        UNREACHABLE_TRAP(0x415ce0)
    }
}
