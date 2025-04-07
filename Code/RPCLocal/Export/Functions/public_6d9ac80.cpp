#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9ac80, internal_6d9ac80, public_6d9ac80);
extern "C" NAKED register_t __cdecl internal_6d9ac80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db40a4]
        mov dword ptr ds : [public_6dbbf0c], eax
        ret 
        UNREACHABLE_TRAP(0x6d9ac80)
    }
}
