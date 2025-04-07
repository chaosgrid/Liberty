#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae600, internal_6dae600, public_6dae600);
extern "C" NAKED register_t __cdecl internal_6dae600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6600]
        mov dword ptr ds : [public_6dbc424], eax
        ret 
        UNREACHABLE_TRAP(0x6dae600)
    }
}
