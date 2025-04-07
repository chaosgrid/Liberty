#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1b40, internal_6db1b40, public_6db1b40);
extern "C" NAKED register_t __cdecl internal_6db1b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67e0]
        mov dword ptr ds : [public_6dbc614], eax
        ret 
        UNREACHABLE_TRAP(0x6db1b40)
    }
}
