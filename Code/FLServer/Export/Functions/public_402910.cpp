#include "FLServer-PCH.h"

PROC_DECLARE(0x402910, internal_402910, public_402910);
extern "C" NAKED register_t __cdecl internal_402910()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x402910)
    }
}
