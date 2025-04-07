#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_631e050);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_631e10b _public_631e10b
#define public_631e21d _public_631e21d
#define public_631e240 _public_631e240
#define public_631e278 _public_631e278

PROC_DECLARE(0x631e050, internal_631e050, public_631e050);
extern "C" NAKED register_t __cdecl internal_631e050()
{
    __asm
    {
        sub esp, 0x74
        push esi
        mov esi, dword ptr ds : [public_6399308]
        push edi
        call esi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x1C], 0
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x88]
        fmulp 
        fadd dword ptr ss : [esp+0x88]
        fld st(0)
        fsin 
        fstp dword ptr ss : [esp+0x18]
        fcos 
        fstp dword ptr ss : [esp+0x20]
        call esi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_6401814]
        test eax, eax
        mov dword ptr ss : [esp+0x3C], 0
        fmul dword ptr ds : [public_63997d0]
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        fmul qword ptr ds : [public_639c9e0]
        fst dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x54], 0x3F800000
        fcos 
        fld dword ptr ss : [esp+8]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x34]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        jne public_631e10b
        call public_6391cf0
        mov dword ptr ds : [public_6401814], eax
        public_631e10b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ss : [esp+0x84]
        fld dword ptr ds : [ecx+4]
        mov edi, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6399408]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], esi
        fld st(0)
        fadd st, st(2)
        fadd dword ptr ds : [ecx+8]
        fst dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_63a3c50]
        fnstsw ax
        test ah, 5
        jp public_631e278
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_6399408]
        fld dword ptr ds : [ecx+4]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x10]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        call public_6391fc2
        fmul dword ptr ds : [public_639c13c]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fld st(0)
        fsin 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fxch 
        fcos 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_6401814]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        jne public_631e21d
        call public_6391cf0
        mov dword ptr ds : [public_6401814], eax
        public_631e21d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_6401814]
        test eax, eax
        jne public_631e240
        call public_6391cf0
        mov dword ptr ds : [public_6401814], eax
        public_631e240 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        pop esi
        add esp, 0x74
        ret 
        public_631e278 : nop
        mov eax, dword ptr ss : [esp+0x80]
        fstp st(0)
        mov ecx, edi
        fstp st(0)
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        pop esi
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x631e050)
    }
}

#undef public_631e10b
#undef public_631e21d
#undef public_631e240
#undef public_631e278
