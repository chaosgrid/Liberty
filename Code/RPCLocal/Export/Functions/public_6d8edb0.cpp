#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8edb0, internal_6d8edb0, public_6d8edb0);
extern "C" NAKED register_t __cdecl internal_6d8edb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3964]
        mov dword ptr ds : [public_6dbbd08], eax
        ret 
        UNREACHABLE_TRAP(0x6d8edb0)
    }
}
