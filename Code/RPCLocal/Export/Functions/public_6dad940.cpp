#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad940, internal_6dad940, public_6dad940);
extern "C" NAKED register_t __cdecl internal_6dad940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6584]
        mov dword ptr ds : [public_6dbc390], eax
        ret 
        UNREACHABLE_TRAP(0x6dad940)
    }
}
