#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1910, internal_6db1910, public_6db1910);
extern "C" NAKED register_t __cdecl internal_6db1910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67a8]
        mov dword ptr ds : [public_6dbc5bc], eax
        ret 
        UNREACHABLE_TRAP(0x6db1910)
    }
}
