#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7fb0, internal_6da7fb0, public_6da7fb0);
extern "C" NAKED register_t __cdecl internal_6da7fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6238]
        mov dword ptr ds : [public_6dbc0e0], eax
        ret 
        UNREACHABLE_TRAP(0x6da7fb0)
    }
}
