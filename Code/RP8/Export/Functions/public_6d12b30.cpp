#include "RP8-PCH.h"

PROC_DECLARE(0x6d12b30, internal_6d12b30, public_6d12b30);
extern "C" NAKED register_t __cdecl internal_6d12b30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0xFFFFFFF9
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d12b30)
    }
}
