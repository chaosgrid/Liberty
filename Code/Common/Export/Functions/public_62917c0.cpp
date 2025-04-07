#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62917c0);

#define public_6291818 _public_6291818
#define public_6291832 _public_6291832
#define public_6291834 _public_6291834
#define public_62919f2 _public_62919f2
#define public_6291b92 _public_6291b92

PROC_DECLARE(0x62917c0, internal_62917c0, public_62917c0);
extern "C" NAKED register_t __cdecl internal_62917c0()
{
    __asm
    {
        sub esp, 0x3C
        fld qword ptr ss : [esp+0x40]
        push esi
        mov esi, ecx
        fadd qword ptr ds : [esi+0xC0]
        mov eax, dword ptr ds : [esi+0xB4]
        test eax, eax
        push edi
        fst qword ptr ss : [esp+8]
        fst qword ptr ds : [esi+0xC0]
        jne public_6291818
        push ecx
        lea eax, ds:[esi+0x90]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_6288830
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_62887d0
        add esp, 0x18
        add esi, 0x60
        jmp public_6291b92
        public_6291818 : nop
        fld st(0)
        push ebx
        fmul st, st(1)
        fstp qword ptr ss : [esp+0x4C]
        fcomp qword ptr ds : [esi+0xB8]
        fnstsw ax
        test ah, 5
        jp public_6291832
        mov bl, 1
        jmp public_6291834
        public_6291832 : nop
        xor bl, bl
        public_6291834 : nop
        fld dword ptr ds : [esi+0xA4]
        sub esp, 0xC
        fmul dword ptr ds : [public_639c13c]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xA0]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x9C]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ss : [esp+0x4C]
        sub esp, 0xC
        fst dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ss : [esp+0xC]
        sub esp, 0xC
        fld st(0)
        lea ecx, ss:[esp+0x48]
        fmul dword ptr ds : [esi+0x80]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+0x7C]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x78]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ds:[esi+0x48]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_62887d0
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x38]
        lea edx, ds:[esi+0x6C]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        test bl, bl
        mov dword ptr ds : [edx+8], edi
        pop ebx
        jne public_62919f2
        lea edx, ds:[esi+0x60]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], edi
        fld dword ptr ds : [esi+0xA4]
        fmul dword ptr ds : [public_639c13c]
        sub esp, 0xC
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xA0]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x9C]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x48]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        sub esp, 0xC
        fadd dword ptr ds : [esi+0x80]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0x7C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0x78]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        add esi, 0x90
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        add esp, 0x3C
        ret 8
        public_62919f2 : nop
        fld dword ptr ds : [esi+0xB0]
        sub esp, 0xC
        fmul dword ptr ds : [public_639c13c]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xAC]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x48]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld qword ptr ds : [esi+0xC0]
        sub esp, 0xC
        fld st(0)
        lea ecx, ss:[esp+0x38]
        fmul dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+0x88]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x84]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        sub esp, 0xC
        fadd dword ptr ds : [esi+0x5C]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0x54]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        lea eax, ds:[esi+0x60]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi+0xB0]
        fmul dword ptr ds : [public_639c13c]
        sub esp, 0xC
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xAC]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x48]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        add esi, 0x90
        fadd dword ptr ds : [esi-0xC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi-8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi-4]
        fstp dword ptr ss : [esp+0x10]
        public_6291b92 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x62917c0)
    }
}

#undef public_6291818
#undef public_6291832
#undef public_6291834
#undef public_62919f2
#undef public_6291b92
