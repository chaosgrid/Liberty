#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d882d0, internal_6d882d0, public_6d882d0);
extern "C" NAKED register_t __cdecl internal_6d882d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3938]
        mov dword ptr ds : [public_6dbbb70], eax
        ret 
        UNREACHABLE_TRAP(0x6d882d0)
    }
}
