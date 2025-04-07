#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5ba0, internal_6da5ba0, public_6da5ba0);
extern "C" NAKED register_t __cdecl internal_6da5ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db614c]
        mov dword ptr ds : [public_6dbbfb4], eax
        ret 
        UNREACHABLE_TRAP(0x6da5ba0)
    }
}
