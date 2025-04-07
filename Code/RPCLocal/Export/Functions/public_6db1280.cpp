#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1280, internal_6db1280, public_6db1280);
extern "C" NAKED register_t __cdecl internal_6db1280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6778]
        mov dword ptr ds : [public_6dbc57c], eax
        ret 
        UNREACHABLE_TRAP(0x6db1280)
    }
}
