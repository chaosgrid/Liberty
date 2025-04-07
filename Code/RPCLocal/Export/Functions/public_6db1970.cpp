#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1970, internal_6db1970, public_6db1970);
extern "C" NAKED register_t __cdecl internal_6db1970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67c0]
        mov dword ptr ds : [public_6dbc5dc], eax
        ret 
        UNREACHABLE_TRAP(0x6db1970)
    }
}
