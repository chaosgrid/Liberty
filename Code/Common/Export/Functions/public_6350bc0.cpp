#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);

PROC_DECLARE(0x6350bc0, internal_6350bc0, public_6350bc0);
extern "C" NAKED register_t __cdecl internal_6350bc0()
{
    __asm
    {
        sub esp, 0x20
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x24]
        fadd st(0), st
        fld dword ptr ds : [ecx+4]
        fadd st(0), st
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x18]
        fsubr dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+8]
        fsub st, st(1)
        fstp dword ptr ds : [eax+4]
        fld st(1)
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+8]
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x1C]
        fsubr dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [eax+0x14]
        fld dword ptr ss : [esp+0x14]
        fsub st, st(2)
        fstp dword ptr ds : [eax+0x18]
        fld dword ptr ss : [esp+0x10]
        fsub st, st(1)
        fstp dword ptr ds : [eax+0x20]
        fstp st(0)
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+0x24]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x1C]
        fsubr dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [eax+0x28]
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6350bc0)
    }
}
