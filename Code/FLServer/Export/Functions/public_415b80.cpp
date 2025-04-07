#include "FLServer-PCH.h"

PROC_DECLARE(0x415b80, internal_415b80, public_415b80);
extern "C" NAKED register_t __cdecl internal_415b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e5cc]
        mov dword ptr ds : [public_42955c], eax
        ret 
        UNREACHABLE_TRAP(0x415b80)
    }
}
