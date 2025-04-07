#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da90c0, internal_6da90c0, public_6da90c0);
extern "C" NAKED register_t __cdecl internal_6da90c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62b8]
        mov dword ptr ds : [public_6dbc144], eax
        ret 
        UNREACHABLE_TRAP(0x6da90c0)
    }
}
