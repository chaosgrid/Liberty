#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dabb90, internal_6dabb90, public_6dabb90);
extern "C" NAKED register_t __cdecl internal_6dabb90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63a0]
        mov dword ptr ds : [public_6dbc214], eax
        ret 
        UNREACHABLE_TRAP(0x6dabb90)
    }
}
