#include "FLServer-PCH.h"

PROC_DECLARE(0x415850, internal_415850, public_415850);
extern "C" NAKED register_t __cdecl internal_415850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e4c8]
        mov dword ptr ds : [public_429530], eax
        ret 
        UNREACHABLE_TRAP(0x415850)
    }
}
