#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5d40, internal_6da5d40, public_6da5d40);
extern "C" NAKED register_t __cdecl internal_6da5d40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db615c]
        mov dword ptr ds : [public_6dbbfbc], eax
        ret 
        UNREACHABLE_TRAP(0x6da5d40)
    }
}
