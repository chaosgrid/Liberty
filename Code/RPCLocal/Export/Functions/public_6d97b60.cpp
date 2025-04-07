#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97b60, internal_6d97b60, public_6d97b60);
extern "C" NAKED register_t __cdecl internal_6d97b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f8c]
        mov dword ptr ds : [public_6dbbe8c], eax
        ret 
        UNREACHABLE_TRAP(0x6d97b60)
    }
}
