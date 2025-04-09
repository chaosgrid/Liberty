#include "Freelancer-PCH.h"

PROC_DECLARE(0x556950, internal_556950, public_556950);
extern "C" NAKED register_t __cdecl internal_556950()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        fild dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push esi
        fadd dword ptr ds : [esi+0x30]
        fsubr dword ptr ss : [esp+0x44]
        fdiv dword ptr ds : [esi+0x38]
        fstp dword ptr ss : [esp+0x44]
        fild dword ptr ds : [esi+8]
        fadd dword ptr ds : [esi+0x34]
        fsubr dword ptr ss : [esp+0x48]
        fdiv dword ptr ds : [esi+0x3C]
        fstp dword ptr ss : [esp+0x3C]
        call dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ds : [eax]
        fld dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fadd st, st(2)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x3C]
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x30]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [esi+0x1C]
        fld st(0)
        pop esi
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        add esp, 0x30
        ret 0x10
        UNREACHABLE_TRAP(0x556950)
    }
}
