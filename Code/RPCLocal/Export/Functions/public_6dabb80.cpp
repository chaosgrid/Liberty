#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dabb80, internal_6dabb80, public_6dabb80);
extern "C" NAKED register_t __cdecl internal_6dabb80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63a0]
        mov dword ptr ds : [public_6dbc210], eax
        ret 
        UNREACHABLE_TRAP(0x6dabb80)
    }
}
