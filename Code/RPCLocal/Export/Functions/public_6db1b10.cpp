#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1b10, internal_6db1b10, public_6db1b10);
extern "C" NAKED register_t __cdecl internal_6db1b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67d4]
        mov dword ptr ds : [public_6dbc604], eax
        ret 
        UNREACHABLE_TRAP(0x6db1b10)
    }
}
