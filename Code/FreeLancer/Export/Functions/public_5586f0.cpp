#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5586f0);

#define public_55870e _public_55870e
#define public_558734 _public_558734
#define public_558802 _public_558802

PROC_DECLARE(0x5586f0, internal_5586f0, public_5586f0);
extern "C" NAKED register_t __cdecl internal_5586f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx]
        sub esp, 0x18
        cmp ecx, 3
        jne public_55870e
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], 0x40400000
        mov al, 1
        add esp, 0x18
        ret 
        public_55870e : nop
        fld dword ptr ds : [edx+0x4C]
        fld st(0)
        fmulp 
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_558734
        mov ecx, dword ptr ss : [esp+0x30]
        fstp st(0)
        mov dword ptr ds : [ecx], 0
        xor al, al
        add esp, 0x18
        ret 
        public_558734 : nop
        cmp ecx, 1
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], esi
        fsub dword ptr ss : [esp+0x10]
        pop esi
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ds : [public_5d55b4]
        je public_558802
        fld st(1)
        fcomp qword ptr ds : [public_5c75f0]
        fnstsw ax
        test ah, 5
        jnp public_558802
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld st(2)
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fst dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edx+0x64]
        fmul dword ptr ds : [public_5c75e0]
        fcos 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_558802
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        public_558802 : nop
        fxch 
        mov edx, dword ptr ss : [esp+0x30]
        fdiv st, st(2)
        mov al, 1
        fsubp 
        fstp dword ptr ds : [edx]
        fstp st(0)
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x5586f0)
    }
}

#undef public_55870e
#undef public_558734
#undef public_558802
