#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daab30, internal_6daab30, public_6daab30);
extern "C" NAKED register_t __cdecl internal_6daab30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db634c]
        mov dword ptr ds : [public_6dbc1cc], eax
        ret 
        UNREACHABLE_TRAP(0x6daab30)
    }
}
