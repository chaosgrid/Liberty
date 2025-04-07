#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dab750, internal_6dab750, public_6dab750);
extern "C" NAKED register_t __cdecl internal_6dab750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6390]
        mov dword ptr ds : [public_6dbc200], eax
        ret 
        UNREACHABLE_TRAP(0x6dab750)
    }
}
