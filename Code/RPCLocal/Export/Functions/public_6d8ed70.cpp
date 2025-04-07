#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ed70, internal_6d8ed70, public_6d8ed70);
extern "C" NAKED register_t __cdecl internal_6d8ed70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3954]
        mov dword ptr ds : [public_6dbbcc4], eax
        ret 
        UNREACHABLE_TRAP(0x6d8ed70)
    }
}
