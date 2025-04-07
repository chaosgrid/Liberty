#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae210, internal_6dae210, public_6dae210);
extern "C" NAKED register_t __cdecl internal_6dae210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65dc]
        mov dword ptr ds : [public_6dbc3f0], eax
        ret 
        UNREACHABLE_TRAP(0x6dae210)
    }
}
