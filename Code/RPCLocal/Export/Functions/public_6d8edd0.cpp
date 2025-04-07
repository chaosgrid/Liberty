#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8edd0, internal_6d8edd0, public_6d8edd0);
extern "C" NAKED register_t __cdecl internal_6d8edd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3968]
        mov dword ptr ds : [public_6dbbd00], eax
        ret 
        UNREACHABLE_TRAP(0x6d8edd0)
    }
}
