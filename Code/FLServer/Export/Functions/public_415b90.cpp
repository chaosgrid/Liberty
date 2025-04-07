#include "FLServer-PCH.h"

PROC_DECLARE(0x415b90, internal_415b90, public_415b90);
extern "C" NAKED register_t __cdecl internal_415b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e5cc]
        mov dword ptr ds : [public_429568], eax
        ret 
        UNREACHABLE_TRAP(0x415b90)
    }
}
