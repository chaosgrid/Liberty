#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c190);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_629f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5e00);
CLANG_FORWARD_PROC_SYMBOL(public_6309ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_629f90c _public_629f90c
#define public_629f932 _public_629f932
#define public_629f983 _public_629f983
#define public_629f9d0 _public_629f9d0
#define public_629fa16 _public_629fa16
#define public_629fa1b _public_629fa1b
#define public_629fa2c _public_629fa2c
#define public_629faa6 _public_629faa6
#define public_629fae5 _public_629fae5
#define public_629fafb _public_629fafb
#define public_629fb10 _public_629fb10
#define public_629fb25 _public_629fb25
#define public_629fb30 _public_629fb30
#define public_629fb44 _public_629fb44
#define public_629fb4a _public_629fb4a
#define public_629fb4d _public_629fb4d
#define public_629fb66 _public_629fb66
#define public_629fb74 _public_629fb74

PROC_DECLARE(0x629f8c0, internal_629f8c0, public_629f8c0);
extern "C" NAKED register_t __cdecl internal_629f8c0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x830]
        mov eax, dword ptr ds : [edi+0x834]
        lea ebx, ds:[edi+0x82C]
        push ecx
        push eax
        push eax
        call public_626c190
        mov esi, eax
        mov eax, dword ptr ds : [ebx+8]
        add esp, 0xC
        push eax
        push esi
        mov ecx, ebx
        call public_628f050
        mov dword ptr ds : [ebx+8], esi
        mov esi, dword ptr ss : [esp+0x44]
        test esi, esi
        jne public_629f90c
        pop edi
        pop esi
        mov eax, 4
        pop ebx
        add esp, 0x34
        ret 4
        public_629f90c : nop
        mov ecx, esi
        call public_62b5e00
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [edi+4]
        call public_62b5e00
        fld dword ptr ss : [esp+0x44]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_629f932
        fstp st(0)
        fld dword ptr ss : [esp+0x44]
        public_629f932 : nop
        fsubr dword ptr ds : [public_639a1d0]
        mov ecx, dword ptr ds : [edi+0xC]
        mov edi, dword ptr ds : [edi+4]
        fmul dword ptr ds : [ecx+0x78]
        fld dword ptr ds : [esi+0x2C]
        fsub dword ptr ds : [edi+0x2C]
        fld dword ptr ds : [esi+0x30]
        fsub dword ptr ds : [edi+0x30]
        fld dword ptr ds : [esi+0x34]
        fsub dword ptr ds : [edi+0x34]
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_629f983
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 4
        public_629f983 : nop
        fld dword ptr ds : [ecx+0x70]
        fld dword ptr ds : [edi+0x198]
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_629fb74
        fsub st, st(1)
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ds : [edi+0x198]
        fstp st(0)
        call public_629b990
        lea edx, ss:[esp+0x10]
        lea ecx, ds:[esi+0xE4]
        push edx
        mov dword ptr ss : [esp+0x10], ecx
        call public_629b440
        mov esi, eax
        test esi, esi
        je public_629fb66
        push ebp
        nop 
        public_629f9d0 : nop
        lea ecx, ss:[esp+0x24]
        call public_6309ae0
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        test al, al
        je public_629fb4d
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, eax
        sar edx, 5
        cmp edx, 1
        mov ebp, eax
        jae public_629faa6
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_629fa16
        sub eax, ecx
        sar eax, 5
        cmp eax, 1
        mov edi, eax
        ja public_629fa1b
        public_629fa16 : nop
        mov edi, 1
        public_629fa1b : nop
        mov ecx, ebx
        call public_62695c0
        mov esi, eax
        add esi, edi
        mov eax, esi
        jns public_629fa2c
        xor eax, eax
        public_629fa2c : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        push edi
        push ebp
        push eax
        mov ecx, ebx
        call public_626a570
        lea ecx, ss:[esp+0x24]
        push ecx
        push 1
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x54], eax
        call public_626a5b0
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ebx+8]
        add edx, 0x20
        push edx
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        shl esi, 5
        add esi, edi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], esi
        call public_62695c0
        inc eax
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [ebx+4], edi
        jmp public_629fb4a
        public_629faa6 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_629fafb
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        push ebp
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov edx, eax
        lea ecx, ss:[esp+0x24]
        push ecx
        sub edx, ebp
        sar edx, 5
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_629fb44
        public_629fae5 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ss:[esp+0x24]
        rep movsd
        jne public_629fae5
        jmp public_629fb44
        public_629fafb : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_629fb25
        public_629fb10 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_629fb10
        public_629fb25 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_629fb44
        lea esp, ss:[esp]
        public_629fb30 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ss:[esp+0x24]
        rep movsd
        jne public_629fb30
        public_629fb44 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_629fb4a : nop
        mov dword ptr ds : [ebx+8], eax
        public_629fb4d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        push edx
        call public_629b440
        mov esi, eax
        test esi, esi
        jne public_629f9d0
        pop ebp
        public_629fb66 : nop
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0x34
        ret 4
        public_629fb74 : nop
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x629f8c0)
    }
}

#undef public_629f90c
#undef public_629f932
#undef public_629f983
#undef public_629f9d0
#undef public_629fa16
#undef public_629fa1b
#undef public_629fa2c
#undef public_629faa6
#undef public_629fae5
#undef public_629fafb
#undef public_629fb10
#undef public_629fb25
#undef public_629fb30
#undef public_629fb44
#undef public_629fb4a
#undef public_629fb4d
#undef public_629fb66
#undef public_629fb74
