#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db18f0, internal_6db18f0, public_6db18f0);
extern "C" NAKED register_t __cdecl internal_6db18f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67a4]
        mov dword ptr ds : [public_6dbc5c0], eax
        ret 
        UNREACHABLE_TRAP(0x6db18f0)
    }
}
