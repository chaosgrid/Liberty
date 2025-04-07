#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9a780, internal_6d9a780, public_6d9a780);
extern "C" NAKED register_t __cdecl internal_6d9a780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4084]
        mov dword ptr ds : [public_6dbbf00], eax
        ret 
        UNREACHABLE_TRAP(0x6d9a780)
    }
}
