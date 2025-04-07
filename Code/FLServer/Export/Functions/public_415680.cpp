#include "FLServer-PCH.h"

PROC_DECLARE(0x415680, internal_415680, public_415680);
extern "C" NAKED register_t __cdecl internal_415680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e3bc]
        mov dword ptr ds : [public_42950c], eax
        ret 
        UNREACHABLE_TRAP(0x415680)
    }
}
