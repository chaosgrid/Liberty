#include "DALib-PCH.h"

PROC_DECLARE(0x65c5560, internal_65c5560, public_65c5560);
extern "C" NAKED register_t __cdecl internal_65c5560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca254]
        ret 
        UNREACHABLE_TRAP(0x65c5560)
    }
}
