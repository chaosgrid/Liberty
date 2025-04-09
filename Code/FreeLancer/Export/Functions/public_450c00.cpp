#include "FreeLancer-PCH.h"

PROC_DECLARE(0x450c00, internal_450c00, public_450c00);
extern "C" NAKED register_t __cdecl internal_450c00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+8]
        shl ecx, 6
        fld dword ptr ds : [ecx+public_668b34]
        xor eax, eax
        fstp dword ptr ds : [edx]
        ret 8
        UNREACHABLE_TRAP(0x450c00)
    }
}
