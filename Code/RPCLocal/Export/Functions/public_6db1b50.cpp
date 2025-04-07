#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1b50, internal_6db1b50, public_6db1b50);
extern "C" NAKED register_t __cdecl internal_6db1b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67e4]
        mov dword ptr ds : [public_6dbc60c], eax
        ret 
        UNREACHABLE_TRAP(0x6db1b50)
    }
}
