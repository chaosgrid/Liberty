#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97510, internal_6d97510, public_6d97510);
extern "C" NAKED register_t __cdecl internal_6d97510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3efc]
        mov dword ptr ds : [public_6dbbe4c], eax
        ret 
        UNREACHABLE_TRAP(0x6d97510)
    }
}
