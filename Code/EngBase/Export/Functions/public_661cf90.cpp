#include "EngBase-PCH.h"

PROC_DECLARE(0x661cf90, internal_661cf90, public_661cf90);
extern "C" NAKED register_t __cdecl internal_661cf90()
{
    __asm
    {
        mov eax, 6
        ret 
        UNREACHABLE_TRAP(0x661cf90)
    }
}
