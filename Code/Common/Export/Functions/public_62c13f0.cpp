#include "Common-PCH.h"

PROC_DECLARE(0x62c13f0, internal_62c13f0, public_62c13f0);
extern "C" NAKED register_t __cdecl internal_62c13f0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x80]
        xor eax, eax
        test edx, edx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x62c13f0)
    }
}
