#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5d70, internal_6da5d70, public_6da5d70);
extern "C" NAKED register_t __cdecl internal_6da5d70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6168]
        mov dword ptr ds : [public_6dbbfcc], eax
        ret 
        UNREACHABLE_TRAP(0x6da5d70)
    }
}
