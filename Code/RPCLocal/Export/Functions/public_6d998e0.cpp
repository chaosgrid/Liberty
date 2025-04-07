#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d998e0, internal_6d998e0, public_6d998e0);
extern "C" NAKED register_t __cdecl internal_6d998e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db402c]
        mov dword ptr ds : [public_6dbbed4], eax
        ret 
        UNREACHABLE_TRAP(0x6d998e0)
    }
}
