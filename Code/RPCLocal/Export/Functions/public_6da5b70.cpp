#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5b70, internal_6da5b70, public_6da5b70);
extern "C" NAKED register_t __cdecl internal_6da5b70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6110]
        mov dword ptr ds : [public_6dbbfa4], eax
        ret 
        UNREACHABLE_TRAP(0x6da5b70)
    }
}
