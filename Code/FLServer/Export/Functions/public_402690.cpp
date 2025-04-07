#include "FLServer-PCH.h"

PROC_DECLARE(0x402690, internal_402690, public_402690);
extern "C" NAKED register_t __cdecl internal_402690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c08c]
        mov dword ptr ds : [public_425f50], eax
        ret 
        UNREACHABLE_TRAP(0x402690)
    }
}
