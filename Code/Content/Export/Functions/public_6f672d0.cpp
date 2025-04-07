#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f672d0);

#define public_6f67434 _public_6f67434
#define public_6f67436 _public_6f67436

PROC_DECLARE(0x6f672d0, internal_6f672d0, public_6f672d0);
extern "C" NAKED register_t __cdecl internal_6f672d0()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x24]
        push esi
        fld dword ptr ds : [eax+4]
        mov esi, 0x5F3759DF
        fsub dword ptr ds : [ecx+0x28]
        xor dl, dl
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0x2C]
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fst dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fst dword ptr ss : [esp+4]
        sar eax, 1
        sub esi, eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x34], esi
        fld dword ptr ss : [esp+0x34]
        pop esi
        fmul dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fcomp dword ptr ds : [eax]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f67434
        fld dword ptr ds : [ecx+8]
        mov eax, 0x5F3759DF
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x20]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fchs 
        fld dword ptr ss : [esp+0x24]
        fchs 
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fst dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x30]
        sar ecx, 1
        fxch st(2)
        sub eax, ecx
        fmul dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x30]
        fxch st(3)
        mov dword ptr ss : [esp+0x2C], eax
        fmul dword ptr ss : [esp+8]
        sar ecx, 1
        mov eax, 0x5F3759DF
        sub eax, ecx
        faddp st(3), st
        mov dword ptr ss : [esp+0x30], eax
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x38]
        fmul st, st(4)
        faddp st(3), st
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fmul st, st(3)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmulp 
        fmul dword ptr ss : [esp+0x30]
        fmul st, st(2)
        fmul dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fdivp st(3), st
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [public_6fb605c]
        fmul dword ptr ds : [public_6fb6060]
        fcos 
        fxch st(3)
        fxch 
        fxch st(3)
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        test ah, 0x41
        jp public_6f67436
        mov al, 1
        add esp, 0x28
        ret 
        public_6f67434 : nop
        fstp st(0)
        public_6f67436 : nop
        mov al, dl
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f672d0)
    }
}

#undef public_6f67434
#undef public_6f67436
