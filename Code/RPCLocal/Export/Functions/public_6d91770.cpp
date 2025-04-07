#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91770, internal_6d91770, public_6d91770);
extern "C" NAKED register_t __cdecl internal_6d91770()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d24]
        mov dword ptr ds : [public_6dbbdcc], eax
        ret 
        UNREACHABLE_TRAP(0x6d91770)
    }
}
