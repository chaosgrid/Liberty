#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da60e0, internal_6da60e0, public_6da60e0);
extern "C" NAKED register_t __cdecl internal_6da60e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6188]
        mov dword ptr ds : [public_6dbc004], eax
        ret 
        UNREACHABLE_TRAP(0x6da60e0)
    }
}
