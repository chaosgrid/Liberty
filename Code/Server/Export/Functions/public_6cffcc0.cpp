#include "Server-PCH.h"

PROC_DECLARE(0x6cffcc0, internal_6cffcc0, public_6cffcc0);
extern "C" NAKED register_t __cdecl internal_6cffcc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6700c]
        mov dword ptr ds : [public_6d8d918], eax
        ret 
        UNREACHABLE_TRAP(0x6cffcc0)
    }
}
