#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f1a0, internal_6d8f1a0, public_6d8f1a0);
extern "C" NAKED register_t __cdecl internal_6d8f1a0()
{
    __asm
    {
        mov dword ptr ds : [public_6dbbd30], 0
        mov dword ptr ds : [public_6dbbd28], offset public_6db3450
        mov dword ptr ds : [public_6dbbd2c], offset public_6db3448
        ret 
        UNREACHABLE_TRAP(0x6d8f1a0)
    }
}
