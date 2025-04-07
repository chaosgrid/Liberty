#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5d30, internal_6da5d30, public_6da5d30);
extern "C" NAKED register_t __cdecl internal_6da5d30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6158]
        mov dword ptr ds : [public_6dbbfc4], eax
        ret 
        UNREACHABLE_TRAP(0x6da5d30)
    }
}
