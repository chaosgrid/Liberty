#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da0560, internal_6da0560, public_6da0560);
extern "C" NAKED register_t __cdecl internal_6da0560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db5384]
        mov dword ptr ds : [public_6dbbf3c], eax
        ret 
        UNREACHABLE_TRAP(0x6da0560)
    }
}
