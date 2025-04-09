#include "FreeLancer-PCH.h"

PROC_DECLARE(0x450c40, internal_450c40, public_450c40);
extern "C" NAKED register_t __cdecl internal_450c40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+8]
        shl ecx, 6
        fld dword ptr ds : [ecx+public_668b3c]
        xor eax, eax
        fstp dword ptr ds : [edx]
        ret 8
        UNREACHABLE_TRAP(0x450c40)
    }
}
