#include "FLServer-PCH.h"

PROC_DECLARE(0x415a20, internal_415a20, public_415a20);
extern "C" NAKED register_t __cdecl internal_415a20()
{
    __asm
    {
        mov eax, offset public_41e4e8
        ret 
        UNREACHABLE_TRAP(0x415a20)
    }
}
