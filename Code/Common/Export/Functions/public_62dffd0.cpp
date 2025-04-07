#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6299880);
CLANG_FORWARD_PROC_SYMBOL(public_62d3af0);
CLANG_FORWARD_PROC_SYMBOL(public_62dfd80);
CLANG_FORWARD_PROC_SYMBOL(public_62dffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62e0480);
CLANG_FORWARD_PROC_SYMBOL(public_62e04a0);

#define public_62e0107 _public_62e0107
#define public_62e01a7 _public_62e01a7
#define public_62e01ab _public_62e01ab
#define public_62e0212 _public_62e0212
#define public_62e0216 _public_62e0216
#define public_62e027d _public_62e027d
#define public_62e0281 _public_62e0281
#define public_62e02fd _public_62e02fd
#define public_62e0343 _public_62e0343
#define public_62e0387 _public_62e0387
#define public_62e03b8 _public_62e03b8
#define public_62e03e1 _public_62e03e1
#define public_62e044f _public_62e044f

PROC_DECLARE(0x62dffd0, internal_62dffd0, public_62dffd0);
extern "C" NAKED register_t __cdecl internal_62dffd0()
{
    __asm
    {
        sub esp, 0x88
        push esi
        mov esi, dword ptr ss : [esp+0x98]
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], ecx
        push edi
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        call public_62e0480
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], edx
        call public_62e04a0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], eax
        call public_62d3af0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x50], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x54], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xA0]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+0x10]
        fsub dword ptr ds : [eax]
        push ecx
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ds : [eax+8]
        fabs 
        push edx
        fmul qword ptr ds : [public_639df88]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [eax+0xC]
        fsub dword ptr ds : [eax+8]
        fabs 
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ds : [eax+0x14]
        fsub dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax]
        push eax
        fabs 
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x70]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x90]
        call public_628b030
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        call public_62887d0
        add esp, 0xC
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, esi
        call public_6299880
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0xA8]
        test edi, edi
        mov dword ptr ss : [esp+0x2C], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x30], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x34], edx
        je public_62e0107
        mov byte ptr ds : [edi], 0
        public_62e0107 : nop
        mov esi, dword ptr ss : [esp+0x94]
        fld dword ptr ds : [esi+8]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [ecx]
        faddp 
        fld st(0)
        fabs 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld st(0)
        fabs 
        fcomp dword ptr ss : [esp+0x5C]
        fnstsw ax
        test ah, 0x41
        jne public_62e01a7
        fmul st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_62e01ab
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x88
        ret 
        public_62e01a7 : nop
        fstp st(0)
        fstp st(0)
        public_62e01ab : nop
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld st(0)
        fabs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld st(0)
        fabs 
        fcomp dword ptr ss : [esp+0x60]
        fnstsw ax
        test ah, 0x41
        jne public_62e0212
        fmul st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_62e0216
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x88
        ret 
        public_62e0212 : nop
        fstp st(0)
        fstp st(0)
        public_62e0216 : nop
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld st(0)
        fabs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld st(0)
        fabs 
        fcomp dword ptr ss : [esp+0x64]
        fnstsw ax
        test ah, 0x41
        jne public_62e027d
        fmul st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_62e0281
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x88
        ret 
        public_62e027d : nop
        fstp st(0)
        fstp st(0)
        public_62e0281 : nop
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx]
        fsubp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fabs 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62e02fd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x88
        ret 
        public_62e02fd : nop
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+8]
        faddp 
        fabs 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62e0343
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x88
        ret 
        public_62e0343 : nop
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+8]
        faddp 
        fabs 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x5C]
        faddp 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62e0387
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x88
        ret 
        public_62e0387 : nop
        lea eax, ss:[esp+0x6C]
        push eax
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        push esi
        mov dword ptr ss : [esp+0x7C], 0
        call public_62dfd80
        mov eax, dword ptr ss : [esp+0x7C]
        add esp, 0x14
        cmp eax, 1
        jne public_62e03e1
        test edi, edi
        je public_62e03b8
        mov byte ptr ds : [edi], 1
        public_62e03b8 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [ecx+4], eax
        pop edi
        mov dword ptr ds : [ecx+8], edx
        mov eax, 1
        pop esi
        add esp, 0x88
        ret 
        public_62e03e1 : nop
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x7C]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x80]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x28]
        fld st(2)
        fmul st, st(3)
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(5)
        fmul st, st(6)
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        lea eax, ss:[esp+0x6C]
        je public_62e044f
        lea eax, ss:[esp+0x78]
        public_62e044f : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        pop edi
        mov dword ptr ds : [ecx+8], eax
        mov eax, 1
        pop esi
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x62dffd0)
    }
}

#undef public_62e0107
#undef public_62e01a7
#undef public_62e01ab
#undef public_62e0212
#undef public_62e0216
#undef public_62e027d
#undef public_62e0281
#undef public_62e02fd
#undef public_62e0343
#undef public_62e0387
#undef public_62e03b8
#undef public_62e03e1
#undef public_62e044f
