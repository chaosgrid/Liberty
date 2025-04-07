#include "FLServer-PCH.h"

PROC_DECLARE(0x402900, internal_402900, public_402900);
extern "C" NAKED register_t __cdecl internal_402900()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x18], 8
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x402900)
    }
}
