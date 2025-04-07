#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5d20, internal_6da5d20, public_6da5d20);
extern "C" NAKED register_t __cdecl internal_6da5d20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6158]
        mov dword ptr ds : [public_6dbbfc0], eax
        ret 
        UNREACHABLE_TRAP(0x6da5d20)
    }
}
