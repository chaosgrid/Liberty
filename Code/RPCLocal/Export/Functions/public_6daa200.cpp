#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa200, internal_6daa200, public_6daa200);
extern "C" NAKED register_t __cdecl internal_6daa200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db631c]
        mov dword ptr ds : [public_6dbc19c], eax
        ret 
        UNREACHABLE_TRAP(0x6daa200)
    }
}
