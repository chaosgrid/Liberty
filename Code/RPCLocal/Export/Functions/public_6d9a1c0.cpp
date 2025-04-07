#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9a1c0, internal_6d9a1c0, public_6d9a1c0);
extern "C" NAKED register_t __cdecl internal_6d9a1c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db406c]
        mov dword ptr ds : [public_6dbbeec], eax
        ret 
        UNREACHABLE_TRAP(0x6d9a1c0)
    }
}
