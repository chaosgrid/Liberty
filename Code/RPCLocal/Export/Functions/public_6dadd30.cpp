#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dadd30, internal_6dadd30, public_6dadd30);
extern "C" NAKED register_t __cdecl internal_6dadd30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65a4]
        mov dword ptr ds : [public_6dbc3b0], eax
        ret 
        UNREACHABLE_TRAP(0x6dadd30)
    }
}
