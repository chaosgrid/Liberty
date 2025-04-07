#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae200, internal_6dae200, public_6dae200);
extern "C" NAKED register_t __cdecl internal_6dae200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65d4]
        mov dword ptr ds : [public_6dbc3dc], eax
        ret 
        UNREACHABLE_TRAP(0x6dae200)
    }
}
