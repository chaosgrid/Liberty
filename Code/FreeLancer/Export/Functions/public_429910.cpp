#include "FreeLancer-PCH.h"

PROC_DECLARE(0x429910, internal_429910, public_429910);
extern "C" NAKED register_t __cdecl internal_429910()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x2C]
        xor eax, eax
        test edx, edx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x429910)
    }
}
