#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daaf70, internal_6daaf70, public_6daaf70);
extern "C" NAKED register_t __cdecl internal_6daaf70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6370]
        mov dword ptr ds : [public_6dbc1e4], eax
        ret 
        UNREACHABLE_TRAP(0x6daaf70)
    }
}
