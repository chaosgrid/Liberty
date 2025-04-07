#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa210, internal_6daa210, public_6daa210);
extern "C" NAKED register_t __cdecl internal_6daa210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6328]
        mov dword ptr ds : [public_6dbc1b0], eax
        ret 
        UNREACHABLE_TRAP(0x6daa210)
    }
}
