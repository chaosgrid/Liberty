#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d90990, internal_6d90990, public_6d90990);
extern "C" NAKED register_t __cdecl internal_6d90990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ca4]
        mov dword ptr ds : [public_6dbbd90], eax
        ret 
        UNREACHABLE_TRAP(0x6d90990)
    }
}
