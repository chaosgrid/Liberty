#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81020, internal_6d81020, public_6d81020);
extern "C" NAKED register_t __cdecl internal_6d81020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3244]
        mov dword ptr ds : [public_6dbb820], eax
        ret 
        UNREACHABLE_TRAP(0x6d81020)
    }
}
