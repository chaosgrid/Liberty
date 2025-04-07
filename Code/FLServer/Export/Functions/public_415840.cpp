#include "FLServer-PCH.h"

PROC_DECLARE(0x415840, internal_415840, public_415840);
extern "C" NAKED register_t __cdecl internal_415840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e4c4]
        mov dword ptr ds : [public_429540], eax
        ret 
        UNREACHABLE_TRAP(0x415840)
    }
}
