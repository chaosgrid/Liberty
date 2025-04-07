#include "Server-PCH.h"

PROC_DECLARE(0x6ced350, internal_6ced350, public_6ced350);
extern "C" NAKED register_t __cdecl internal_6ced350()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        test edx, edx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x6ced350)
    }
}
