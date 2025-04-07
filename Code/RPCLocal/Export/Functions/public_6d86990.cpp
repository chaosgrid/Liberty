#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d86990, internal_6d86990, public_6d86990);
extern "C" NAKED register_t __cdecl internal_6d86990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3760]
        mov dword ptr ds : [public_6dbba2c], eax
        ret 
        UNREACHABLE_TRAP(0x6d86990)
    }
}
