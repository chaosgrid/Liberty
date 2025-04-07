#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad810, internal_6dad810, public_6dad810);
extern "C" NAKED register_t __cdecl internal_6dad810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6578]
        mov dword ptr ds : [public_6dbc37c], eax
        ret 
        UNREACHABLE_TRAP(0x6dad810)
    }
}
