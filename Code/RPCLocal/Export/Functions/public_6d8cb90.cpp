#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cb90, internal_6d8cb90, public_6d8cb90);
extern "C" NAKED register_t __cdecl internal_6d8cb90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3948]
        mov dword ptr ds : [public_6dbbb8c], eax
        ret 
        UNREACHABLE_TRAP(0x6d8cb90)
    }
}
