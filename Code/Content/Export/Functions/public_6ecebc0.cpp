#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ecebc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6ecec94 _public_6ecec94
#define public_6ececa7 _public_6ececa7
#define public_6eced09 _public_6eced09
#define public_6eced6c _public_6eced6c
#define public_6ecedca _public_6ecedca
#define public_6eceef5 _public_6eceef5
#define public_6eceefb _public_6eceefb

PROC_DECLARE(0x6ecebc0, internal_6ecebc0, public_6ecebc0);
extern "C" NAKED register_t __cdecl internal_6ecebc0()
{
    __asm
    {
        sub esp, 0xBC
        mov edx, dword ptr ss : [esp+0xC4]
        lea eax, ss:[esp+0x74]
        push eax
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3664]
        fld dword ptr ss : [esp+0xD8]
        fcomp dword ptr ds : [public_6fb444c]
        add esp, 0xC
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        fnstsw ax
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        test ah, 1
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        jne public_6ecec94
        fld dword ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0x30], 0
        fmul dword ptr ds : [public_6fb6060]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        fst dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x48], 0
        fcos 
        fld dword ptr ss : [esp]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x2C]
        fst dword ptr ss : [esp+0x34]
        fchs 
        fstp dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x4C]
        public_6ecec94 : nop
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        jne public_6ececa7
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ececa7 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ds : [eax]
        sub eax, 0
        mov ecx, 9
        lea esi, ss:[esp+0xA0]
        lea edi, ss:[esp+0x34]
        rep movsd
        mov edi, dword ptr ss : [esp+0xD8]
        je public_6ecedca
        dec eax
        je public_6eced6c
        dec eax
        jne public_6eceefb
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        jne public_6eced09
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6eced09 : nop
        mov edx, dword ptr ss : [esp+0xD0]
        mov ecx, dword ptr ds : [eax]
        add edx, 0x24
        push edx
        lea edx, ss:[esp+0x80]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0x24]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        jmp public_6eceef5
        public_6eced6c : nop
        mov eax, dword ptr ss : [esp+0xD0]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x5C]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x34]
        rep movsd
        pop edi
        mov dword ptr ds : [edx+8], eax
        pop esi
        add esp, 0xBC
        ret 
        public_6ecedca : nop
        mov eax, dword ptr ss : [esp+0xD0]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [eax+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [eax+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [eax+0x24]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, 0x5F3759DF
        faddp 
        mov dword ptr ss : [esp+0x2C], eax
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x3C]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x70]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x34]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x38]
        fmul st, st(3)
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fdivr dword ptr ds : [public_6fb6054]
        fsqrt 
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6eb7810
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x78]
        lea ecx, ss:[esp+0x7C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov ecx, dword ptr ss : [esp+0x70]
        lea eax, ds:[edi+0x24]
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x78]
        public_6eceef5 : nop
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_6eceefb : nop
        mov ecx, 9
        lea esi, ss:[esp+0x34]
        rep movsd
        pop edi
        pop esi
        add esp, 0xBC
        ret 
        UNREACHABLE_TRAP(0x6ecebc0)
    }
}

#undef public_6ecec94
#undef public_6ececa7
#undef public_6eced09
#undef public_6eced6c
#undef public_6ecedca
#undef public_6eceef5
#undef public_6eceefb
