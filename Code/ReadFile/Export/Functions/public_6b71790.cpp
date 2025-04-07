#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b71790, internal_6b71790, public_6b71790);
extern "C" NAKED register_t __cdecl internal_6b71790()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, ecx
        inc eax
        neg eax
        sbb eax, eax
        and eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6b71790)
    }
}
