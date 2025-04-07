#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae230, internal_6dae230, public_6dae230);
extern "C" NAKED register_t __cdecl internal_6dae230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65e0]
        mov dword ptr ds : [public_6dbc3ec], eax
        ret 
        UNREACHABLE_TRAP(0x6dae230)
    }
}
