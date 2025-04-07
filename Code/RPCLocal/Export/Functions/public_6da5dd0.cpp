#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5dd0, internal_6da5dd0, public_6da5dd0);
extern "C" NAKED register_t __cdecl internal_6da5dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6180]
        mov dword ptr ds : [public_6dbbfec], eax
        ret 
        UNREACHABLE_TRAP(0x6da5dd0)
    }
}
