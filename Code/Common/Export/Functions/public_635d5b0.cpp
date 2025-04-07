#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63484e0);

PROC_DECLARE(0x635d5b0, internal_635d5b0, public_635d5b0);
extern "C" NAKED register_t __cdecl internal_635d5b0()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, ecx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        call public_63484e0
        fld dword ptr ds : [esi+0x34]
        mov eax, dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [eax]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [eax+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [eax+0x20]
        fld dword ptr ds : [esi+0x38]
        fld dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [eax+0x14]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [eax+0x24]
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        fld dword ptr ds : [esi+0x3C]
        fld dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x18]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [eax+0x34]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x28]
        fmul st, st(1)
        faddp st(2), st
        fxch 
        fadd dword ptr ds : [eax+0x38]
        fxch 
        fstp st(0)
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [esi+0x2C]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [esi+0x28]
        faddp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [esi+0x2C]
        faddp 
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [esi+0x28]
        faddp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x24]
        fmul dword ptr ds : [esi+0x28]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [esi+0x24]
        faddp 
        fld dword ptr ds : [eax+0x28]
        fmul dword ptr ds : [esi+0x2C]
        pop esi
        faddp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x34]
        fsubr dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp]
        faddp 
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x635d5b0)
    }
}
