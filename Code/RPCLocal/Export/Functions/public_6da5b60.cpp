#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5b60, internal_6da5b60, public_6da5b60);
extern "C" NAKED register_t __cdecl internal_6da5b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6110]
        mov dword ptr ds : [public_6dbbfa0], eax
        ret 
        UNREACHABLE_TRAP(0x6da5b60)
    }
}
