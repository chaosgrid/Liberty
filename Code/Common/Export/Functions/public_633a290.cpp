#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_633a389 _public_633a389
#define public_633a398 _public_633a398
#define public_633a3c5 _public_633a3c5
#define public_633a499 _public_633a499
#define public_633a49b _public_633a49b
#define public_633a4ce _public_633a4ce
#define public_633a4f8 _public_633a4f8
#define public_633a56b _public_633a56b
#define public_633a5c5 _public_633a5c5
#define public_633a692 _public_633a692
#define public_633a6b6 _public_633a6b6

PROC_DECLARE(0x633a290, internal_633a290, public_633a290);
extern "C" NAKED register_t __cdecl internal_633a290()
{
    __asm
    {
        sub esp, 0xD0
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        sub eax, 3
        push edi
        je public_633a5c5
        sub eax, 2
        je public_633a398
        mov eax, dword ptr ss : [esp+0xE0]
        fld dword ptr ds : [eax+8]
        lea edi, ds:[esi+0x30]
        fsub dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea ecx, ss:[esp+8]
        call public_6347e60
        fcom dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 5
        jnp public_633a389
        fdivr qword ptr ds : [public_6399410]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        call dword ptr ds : [eax+0x40]
        fstp dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+8]
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        lea ecx, ss:[esp+0x80]
        push ecx
        call public_6288830
        fld dword ptr ss : [esp+0x8C]
        fadd dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x88]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x84]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x44]
        jmp public_633a6b6
        public_633a389 : nop
        mov ecx, dword ptr ds : [edi]
        fstp st(0)
        mov edx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        jmp public_633a6b6
        public_633a398 : nop
        mov edx, dword ptr ss : [esp+0xE0]
        push ebx
        lea ebx, ds:[esi+0x30]
        push ebx
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        call public_6288800
        mov eax, dword ptr ds : [public_658a9b0]
        add esp, 0xC
        test eax, eax
        jne public_633a3c5
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a3c5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edi, ds:[esi+0xC]
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x38], ecx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x48]
        lea ecx, ss:[esp+0xC]
        fadd dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x10], 0
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x30]
        call public_6347e60
        fdivr dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_6399408]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        call public_6288800
        add esp, 0xC
        lea ecx, ss:[esp+0x18]
        call public_6347e60
        fcom dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 5
        jnp public_633a499
        fdivr qword ptr ds : [public_6399410]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        jmp public_633a49b
        public_633a499 : nop
        fstp st(0)
        public_633a49b : nop
        fld dword ptr ds : [esi+0x4C]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fld dword ptr ds : [esi+0x44]
        fld st(2)
        fld st(1)
        fmul st, st(2)
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fdivp 
        fstp st(1)
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_633a4ce
        fdivp 
        jmp public_633a4f8
        public_633a4ce : nop
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [esi+0x44]
        fsub dword ptr ds : [esi+0x48]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        public_633a4f8 : nop
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fmul st, st(1)
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        call public_62887d0
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_658a9b0]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        jne public_633a56b
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a56b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x88], eax
        lea eax, ss:[esp+0x88]
        push eax
        mov dword ptr ss : [esp+0x90], ecx
        lea ecx, ss:[esp+0x50]
        push ebx
        push ecx
        mov dword ptr ss : [esp+0x9C], edx
        call public_62887d0
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x5C]
        mov edi, dword ptr ss : [esp+0x60]
        add esp, 0xC
        pop ebx
        jmp public_633a6b6
        public_633a5c5 : nop
        lea ecx, ss:[esp+0x9C]
        call public_62748a0
        fld dword ptr ds : [esi+0x4C]
        fmul dword ptr ds : [public_639c13c]
        sub esp, 0xC
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x44]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x58]
        add esi, 0xC
        mov ecx, 0xC
        lea edi, ss:[esp+0x9C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0xCC], edx
        lea edx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0xD0], eax
        mov eax, dword ptr ss : [esp+0xE0]
        push edx
        mov dword ptr ss : [esp+0xD8], ecx
        push eax
        lea ecx, ss:[esp+0x74]
        push ecx
        call public_6288800
        lea edx, ss:[esp+0x78]
        push edx
        lea eax, ss:[esp+0xAC]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        call public_62dbb90
        add esp, 0x18
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0xA4]
        call public_62dba00
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_633a692
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a692 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        public_633a6b6 : nop
        mov eax, dword ptr ss : [esp+0xDC]
        mov esi, eax
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edi
        pop edi
        pop esi
        add esp, 0xD0
        ret 8
        UNREACHABLE_TRAP(0x633a290)
    }
}

#undef public_633a389
#undef public_633a398
#undef public_633a3c5
#undef public_633a499
#undef public_633a49b
#undef public_633a4ce
#undef public_633a4f8
#undef public_633a56b
#undef public_633a5c5
#undef public_633a692
#undef public_633a6b6
