#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dab4a0, internal_6dab4a0, public_6dab4a0);
extern "C" NAKED register_t __cdecl internal_6dab4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6384]
        mov dword ptr ds : [public_6dbc1ec], eax
        ret 
        UNREACHABLE_TRAP(0x6dab4a0)
    }
}
