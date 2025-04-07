#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d909a0, internal_6d909a0, public_6d909a0);
extern "C" NAKED register_t __cdecl internal_6d909a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ca8]
        mov dword ptr ds : [public_6dbbd88], eax
        ret 
        UNREACHABLE_TRAP(0x6d909a0)
    }
}
