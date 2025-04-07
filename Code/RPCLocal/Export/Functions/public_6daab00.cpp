#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daab00, internal_6daab00, public_6daab00);
extern "C" NAKED register_t __cdecl internal_6daab00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db633c]
        mov dword ptr ds : [public_6dbc1bc], eax
        ret 
        UNREACHABLE_TRAP(0x6daab00)
    }
}
