#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae610, internal_6dae610, public_6dae610);
extern "C" NAKED register_t __cdecl internal_6dae610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6604]
        mov dword ptr ds : [public_6dbc41c], eax
        ret 
        UNREACHABLE_TRAP(0x6dae610)
    }
}
