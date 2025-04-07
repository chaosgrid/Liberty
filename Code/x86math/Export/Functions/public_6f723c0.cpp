#include "x86math-PCH.h"

PROC_DECLARE(0x6f723c0, internal_6f723c0, public_6f723c0);
extern "C" NAKED register_t __cdecl internal_6f723c0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fdivr dword ptr ds : [public_6f73104]
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fld st(1)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp]
        fxch 
        fmul dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x20]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        fsubr dword ptr ds : [public_6f730f8]
        fstp dword ptr ds : [eax]
        fld st(2)
        fsub dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+4]
        fld st(1)
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+8]
        fxch st(2)
        fadd dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0xC]
        fxch 
        fadd st, st(2)
        fsubr dword ptr ds : [public_6f730f8]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp]
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax+0x14]
        fsub dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x18]
        fld dword ptr ss : [esp]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fsubr dword ptr ds : [public_6f730f8]
        fstp dword ptr ds : [eax+0x20]
        xor eax, eax
        fstp st(0)
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6f723c0)
    }
}
