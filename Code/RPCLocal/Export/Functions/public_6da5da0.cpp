#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5da0, internal_6da5da0, public_6da5da0);
extern "C" NAKED register_t __cdecl internal_6da5da0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6174]
        mov dword ptr ds : [public_6dbbfdc], eax
        ret 
        UNREACHABLE_TRAP(0x6da5da0)
    }
}
