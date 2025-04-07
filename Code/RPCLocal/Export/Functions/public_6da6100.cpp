#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6100, internal_6da6100, public_6da6100);
extern "C" NAKED register_t __cdecl internal_6da6100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6194]
        mov dword ptr ds : [public_6dbc010], eax
        ret 
        UNREACHABLE_TRAP(0x6da6100)
    }
}
