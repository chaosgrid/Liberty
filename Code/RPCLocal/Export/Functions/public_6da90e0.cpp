#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da90e0, internal_6da90e0, public_6da90e0);
extern "C" NAKED register_t __cdecl internal_6da90e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62c8]
        mov dword ptr ds : [public_6dbc150], eax
        ret 
        UNREACHABLE_TRAP(0x6da90e0)
    }
}
