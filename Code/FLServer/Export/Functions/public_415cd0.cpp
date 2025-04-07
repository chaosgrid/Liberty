#include "FLServer-PCH.h"

PROC_DECLARE(0x415cd0, internal_415cd0, public_415cd0);
extern "C" NAKED register_t __cdecl internal_415cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x415cd0)
    }
}
