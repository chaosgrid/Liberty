#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_633d5d0);

PROC_DECLARE(0x633d5d0, internal_633d5d0, public_633d5d0);
extern "C" NAKED register_t __cdecl internal_633d5d0()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_639c13c]
        push esi
        fld dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax+4]
        sub esp, 0xC
        fld dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        fld st(3)
        fsin 
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x48]
        fdivp 
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcos 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi]
        fsubp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+4]
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+8]
        faddp 
        fadd st(0), st
        fld dword ptr ss : [esp+0xC]
        sub esp, 0xC
        fmul st, st(1)
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x1C]
        fadd st(0), st
        fsub dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x10]
        mov ecx, eax
        fld dword ptr ss : [esp+8]
        pop esi
        fadd dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp]
        fsub dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x633d5d0)
    }
}
