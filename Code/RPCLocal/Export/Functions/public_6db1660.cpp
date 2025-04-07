#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1660, internal_6db1660, public_6db1660);
extern "C" NAKED register_t __cdecl internal_6db1660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6790]
        mov dword ptr ds : [public_6dbc59c], eax
        ret 
        UNREACHABLE_TRAP(0x6db1660)
    }
}
