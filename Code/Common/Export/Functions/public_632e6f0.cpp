#include "Common-PCH.h"

PROC_DECLARE(0x632e6f0, internal_632e6f0, public_632e6f0);
extern "C" NAKED register_t __cdecl internal_632e6f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a48c4]
        mov dword ptr ds : [public_640a724], eax
        ret 
        UNREACHABLE_TRAP(0x632e6f0)
    }
}
