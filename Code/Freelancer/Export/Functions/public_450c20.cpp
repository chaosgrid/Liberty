#include "Freelancer-PCH.h"

PROC_DECLARE(0x450c20, internal_450c20, public_450c20);
extern "C" NAKED register_t __cdecl internal_450c20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+8]
        shl ecx, 6
        fld dword ptr ds : [ecx+public_668b38]
        xor eax, eax
        fstp dword ptr ds : [edx]
        ret 8
        UNREACHABLE_TRAP(0x450c20)
    }
}
