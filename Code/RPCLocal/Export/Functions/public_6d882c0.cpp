#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d882c0, internal_6d882c0, public_6d882c0);
extern "C" NAKED register_t __cdecl internal_6d882c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3938]
        mov dword ptr ds : [public_6dbbb64], eax
        ret 
        UNREACHABLE_TRAP(0x6d882c0)
    }
}
