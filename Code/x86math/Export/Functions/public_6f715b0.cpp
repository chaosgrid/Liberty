#include "x86math-PCH.h"

PROC_DECLARE(0x6f715b0, internal_6f715b0, public_6f715b0);
extern "C" NAKED register_t __cdecl internal_6f715b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x14]
        fstp dword ptr ds : [ecx+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x18]
        fstp dword ptr ds : [ecx+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x1C]
        fstp dword ptr ds : [ecx+0x1C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x20]
        xor eax, eax
        fstp dword ptr ds : [ecx+0x20]
        ret 0x10
        UNREACHABLE_TRAP(0x6f715b0)
    }
}
