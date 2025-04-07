#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d882e0, internal_6d882e0, public_6d882e0);
extern "C" NAKED register_t __cdecl internal_6d882e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db393c]
        mov dword ptr ds : [public_6dbbb60], eax
        ret 
        UNREACHABLE_TRAP(0x6d882e0)
    }
}
