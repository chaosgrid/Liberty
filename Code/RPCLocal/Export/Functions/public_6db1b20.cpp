#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1b20, internal_6db1b20, public_6db1b20);
extern "C" NAKED register_t __cdecl internal_6db1b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67d8]
        mov dword ptr ds : [public_6dbc5fc], eax
        ret 
        UNREACHABLE_TRAP(0x6db1b20)
    }
}
