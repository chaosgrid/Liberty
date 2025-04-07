#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacc50, internal_6dacc50, public_6dacc50);
extern "C" NAKED register_t __cdecl internal_6dacc50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6508]
        mov dword ptr ds : [public_6dbc324], eax
        ret 
        UNREACHABLE_TRAP(0x6dacc50)
    }
}
