#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db10a0, internal_6db10a0, public_6db10a0);
extern "C" NAKED register_t __cdecl internal_6db10a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6760]
        mov dword ptr ds : [public_6dbc55c], eax
        ret 
        UNREACHABLE_TRAP(0x6db10a0)
    }
}
