#include "FLServer-PCH.h"

PROC_DECLARE(0x415740, internal_415740, public_415740);
extern "C" NAKED register_t __cdecl internal_415740()
{
    __asm
    {
        mov word ptr ds : [public_429520], 4
        mov byte ptr ds : [public_429522], 1
        ret 
        UNREACHABLE_TRAP(0x415740)
    }
}
