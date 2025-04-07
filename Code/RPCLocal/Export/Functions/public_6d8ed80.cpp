#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ed80, internal_6d8ed80, public_6d8ed80);
extern "C" NAKED register_t __cdecl internal_6d8ed80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3958]
        mov dword ptr ds : [public_6dbbbb8], eax
        ret 
        UNREACHABLE_TRAP(0x6d8ed80)
    }
}
