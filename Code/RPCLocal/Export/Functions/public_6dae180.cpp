#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae180, internal_6dae180, public_6dae180);
extern "C" NAKED register_t __cdecl internal_6dae180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65b4]
        mov dword ptr ds : [public_6dbc3c0], eax
        ret 
        UNREACHABLE_TRAP(0x6dae180)
    }
}
