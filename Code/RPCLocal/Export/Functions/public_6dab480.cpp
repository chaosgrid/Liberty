#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dab480, internal_6dab480, public_6dab480);
extern "C" NAKED register_t __cdecl internal_6dab480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6380]
        mov dword ptr ds : [public_6dbc1f0], eax
        ret 
        UNREACHABLE_TRAP(0x6dab480)
    }
}
