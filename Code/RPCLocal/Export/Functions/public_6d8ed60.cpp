#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ed60, internal_6d8ed60, public_6d8ed60);
extern "C" NAKED register_t __cdecl internal_6d8ed60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3954]
        mov dword ptr ds : [public_6dbbbbc], eax
        ret 
        UNREACHABLE_TRAP(0x6d8ed60)
    }
}
