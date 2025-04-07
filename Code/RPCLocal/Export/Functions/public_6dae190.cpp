#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae190, internal_6dae190, public_6dae190);
extern "C" NAKED register_t __cdecl internal_6dae190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65b4]
        mov dword ptr ds : [public_6dbc3c4], eax
        ret 
        UNREACHABLE_TRAP(0x6dae190)
    }
}
