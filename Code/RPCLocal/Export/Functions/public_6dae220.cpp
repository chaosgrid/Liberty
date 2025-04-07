#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae220, internal_6dae220, public_6dae220);
extern "C" NAKED register_t __cdecl internal_6dae220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65dc]
        mov dword ptr ds : [public_6dbc3f4], eax
        ret 
        UNREACHABLE_TRAP(0x6dae220)
    }
}
