#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4545a0, internal_4545a0, public_4545a0);
extern "C" NAKED register_t __cdecl internal_4545a0()
{
    __asm
    {
        fld dword ptr ds : [public_66d2b0]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [public_66d2b4]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        fld dword ptr ds : [public_66d2b8]
        fstp dword ptr ds : [edx]
        ret 0x10
        UNREACHABLE_TRAP(0x4545a0)
    }
}
