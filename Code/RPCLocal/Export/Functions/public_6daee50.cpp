#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daee50, internal_6daee50, public_6daee50);
extern "C" NAKED register_t __cdecl internal_6daee50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db661c]
        mov dword ptr ds : [public_6dbc43c], eax
        ret 
        UNREACHABLE_TRAP(0x6daee50)
    }
}
