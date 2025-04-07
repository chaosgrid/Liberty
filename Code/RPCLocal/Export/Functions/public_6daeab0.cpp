#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daeab0, internal_6daeab0, public_6daeab0);
extern "C" NAKED register_t __cdecl internal_6daeab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6610]
        mov dword ptr ds : [public_6dbc42c], eax
        ret 
        UNREACHABLE_TRAP(0x6daeab0)
    }
}
