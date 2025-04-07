#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db12b0, internal_6db12b0, public_6db12b0);
extern "C" NAKED register_t __cdecl internal_6db12b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6784]
        mov dword ptr ds : [public_6dbc58c], eax
        ret 
        UNREACHABLE_TRAP(0x6db12b0)
    }
}
