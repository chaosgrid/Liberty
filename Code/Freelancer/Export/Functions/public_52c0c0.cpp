#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_52c12e _public_52c12e
#define public_52c1bf _public_52c1bf
#define public_52c1d8 _public_52c1d8
#define public_52c1da _public_52c1da
#define public_52c279 _public_52c279
#define public_52c2ad _public_52c2ad
#define public_52c2c4 _public_52c2c4
#define public_52c2d0 _public_52c2d0
#define public_52c2f0 _public_52c2f0
#define public_52c2fc _public_52c2fc
#define public_52c2fe _public_52c2fe
#define public_52c320 _public_52c320
#define public_52c32c _public_52c32c

PROC_DECLARE(0x52c0c0, internal_52c0c0, public_52c0c0);
extern "C" NAKED register_t __cdecl internal_52c0c0()
{
    __asm
    {
        sub esp, 0x74
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_52c2d0
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        push eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_52c2d0
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x34]
        push edx
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c65ec]
        mov eax, dword ptr ds : [public_675430]
        add esp, 8
        test eax, eax
        jne public_52c12e
        call public_5b73e0
        mov dword ptr ds : [public_675430], eax
        public_52c12e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x34]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x40]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [esi+0x30]
        fcomp qword ptr ds : [public_5dbc98]
        fnstsw ax
        test ah, 0x41
        jne public_52c2d0
        fld dword ptr ds : [esi+0x2C]
        fcomp qword ptr ds : [public_5dbc98]
        fnstsw ax
        test ah, 0x41
        jne public_52c2d0
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x1C], 0xA
        call public_540fc0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_52c2d0
        push ebx
        mov ebx, dword ptr ds : [public_5c68a0]
        public_52c1bf : nop
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_52c1d8
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_52c1d8
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 1
        cmp dl, 1
        je public_52c1da
        public_52c1d8 : nop
        xor ecx, ecx
        public_52c1da : nop
        fld dword ptr ds : [ecx+0x34]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+0x30]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52c2c4
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x30]
        fnstsw ax
        test ah, 5
        jp public_52c2c4
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_5dbc98]
        fnstsw ax
        test ah, 5
        jp public_52c279
        fld dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], 0
        jmp public_52c2ad
        public_52c279 : nop
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ds : [esi+0x30]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ds : [esi+0x2C]
        fdiv dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        public_52c2ad : nop
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        je public_52c2c4
        push 0x3F800000
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        call ebx
        add esp, 0xC
        public_52c2c4 : nop
        mov edi, dword ptr ds : [edi+0x14]
        test edi, edi
        jne public_52c1bf
        pop ebx
        public_52c2d0 : nop
        mov edx, dword ptr ss : [esp+0x84]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edx
        je public_52c2fc
        lea esp, ss:[esp]
        public_52c2f0 : nop
        cmp word ptr ds : [eax], dx
        je public_52c2fe
        add eax, 2
        cmp eax, ecx
        jne public_52c2f0
        public_52c2fc : nop
        mov eax, ecx
        public_52c2fe : nop
        cmp eax, ecx
        jne public_52c32c
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c689c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_52c32c
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_52c320 : nop
        cmp word ptr ds : [eax], cx
        je public_52c32c
        add eax, 2
        cmp eax, esi
        jne public_52c320
        public_52c32c : nop
        pop edi
        pop esi
        add esp, 0x74
        ret 8
        UNREACHABLE_TRAP(0x52c0c0)
    }
}

#undef public_52c12e
#undef public_52c1bf
#undef public_52c1d8
#undef public_52c1da
#undef public_52c279
#undef public_52c2ad
#undef public_52c2c4
#undef public_52c2d0
#undef public_52c2f0
#undef public_52c2fc
#undef public_52c2fe
#undef public_52c320
#undef public_52c32c
