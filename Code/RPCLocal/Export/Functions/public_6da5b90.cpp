#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5b90, internal_6da5b90, public_6da5b90);
extern "C" NAKED register_t __cdecl internal_6da5b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db614c]
        mov dword ptr ds : [public_6dbbfb0], eax
        ret 
        UNREACHABLE_TRAP(0x6da5b90)
    }
}
