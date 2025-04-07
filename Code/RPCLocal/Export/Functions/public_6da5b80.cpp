#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5b80, internal_6da5b80, public_6da5b80);
extern "C" NAKED register_t __cdecl internal_6da5b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6114]
        mov dword ptr ds : [public_6dbbf9c], eax
        ret 
        UNREACHABLE_TRAP(0x6da5b80)
    }
}
