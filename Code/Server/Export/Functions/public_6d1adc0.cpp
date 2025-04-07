#include "Server-PCH.h"

PROC_DECLARE(0x6d1adc0, internal_6d1adc0, public_6d1adc0);
extern "C" NAKED register_t __cdecl internal_6d1adc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or eax, 0x8000
        ret 4
        UNREACHABLE_TRAP(0x6d1adc0)
    }
}
