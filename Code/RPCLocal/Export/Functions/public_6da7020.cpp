#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7020, internal_6da7020, public_6da7020);
extern "C" NAKED register_t __cdecl internal_6da7020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61f8]
        mov dword ptr ds : [public_6dbc08c], eax
        ret 
        UNREACHABLE_TRAP(0x6da7020)
    }
}
