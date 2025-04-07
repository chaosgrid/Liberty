#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daaf80, internal_6daaf80, public_6daaf80);
extern "C" NAKED register_t __cdecl internal_6daaf80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6374]
        mov dword ptr ds : [public_6dbc1dc], eax
        ret 
        UNREACHABLE_TRAP(0x6daaf80)
    }
}
