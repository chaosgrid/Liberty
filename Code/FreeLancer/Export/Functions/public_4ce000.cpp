#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4cabd0);
CLANG_FORWARD_PROC_SYMBOL(public_4cad10);
CLANG_FORWARD_PROC_SYMBOL(public_4cae10);
CLANG_FORWARD_PROC_SYMBOL(public_4cb250);
CLANG_FORWARD_PROC_SYMBOL(public_4cdf40);
CLANG_FORWARD_PROC_SYMBOL(public_4cdfc0);
CLANG_FORWARD_PROC_SYMBOL(public_4ce000);
CLANG_FORWARD_PROC_SYMBOL(public_4ce460);
CLANG_FORWARD_PROC_SYMBOL(public_4ce490);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4ce053 _public_4ce053
#define public_4ce0f6 _public_4ce0f6
#define public_4ce0f8 _public_4ce0f8
#define public_4ce170 _public_4ce170
#define public_4ce1a0 _public_4ce1a0
#define public_4ce1ba _public_4ce1ba
#define public_4ce1cd _public_4ce1cd
#define public_4ce1d5 _public_4ce1d5
#define public_4ce1fc _public_4ce1fc
#define public_4ce1fe _public_4ce1fe
#define public_4ce227 _public_4ce227
#define public_4ce246 _public_4ce246
#define public_4ce254 _public_4ce254
#define public_4ce2bc _public_4ce2bc
#define public_4ce2e4 _public_4ce2e4
#define public_4ce30f _public_4ce30f
#define public_4ce314 _public_4ce314
#define public_4ce38b _public_4ce38b
#define public_4ce38f _public_4ce38f
#define public_4ce3bf _public_4ce3bf
#define public_4ce3c1 _public_4ce3c1
#define public_4ce424 _public_4ce424
#define public_4ce426 _public_4ce426
#define public_4ce43d _public_4ce43d
#define public_4ce441 _public_4ce441

PROC_DECLARE(0x4ce000, internal_4ce000, public_4ce000);
extern "C" NAKED register_t __cdecl internal_4ce000()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [ebp+0x3C]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call public_430ab0
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4ce053
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x934
/*FIXUP push offset public_5d7220 @0x4ce034*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        mov eax, 0x100002
/*FIXUP push offset public_5d76c0 @0x4ce03e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d76c0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        public_4ce053 : nop
        mov dword ptr ss : [ebp+0x8C], 0
        mov eax, dword ptr ds : [esi+0xA4]
        test eax, eax
        je public_4ce1fe
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4ce1fe
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_4ce1fe
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4ce441
        add eax, 0xC
        test eax, eax
        je public_4ce441
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4ce441
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4ce441
        mov ecx, ebp
        call public_4ce460
        test al, al
        jne public_4ce1fe
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [edi+0xA4]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x34], ecx
        je public_4ce0f6
        lea ecx, ds:[eax-8]
        jmp public_4ce0f8
        public_4ce0f6 : nop
        xor ecx, ecx
        public_4ce0f8 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], edx
        push ecx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_423b60
        add esp, 0xC
        lea ecx, ss:[esp+0x38]
        call public_410190
        fld dword ptr ds : [esi+0x38]
        fsubr st, st(1)
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        call public_4ce490
        test al, al
        je public_4ce170
        mov ecx, dword ptr ds : [public_5c64dc]
        mov edx, dword ptr ds : [public_5c64d8]
        fld dword ptr ds : [ecx]
        fld dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x4C]
        fnstsw ax
        test ah, 0x41
        jne public_4ce1cd
        mov dword ptr ss : [ebp+0x8C], 0
        jmp public_4ce1fc
        public_4ce170 : nop
        push ebp
        mov ecx, edi
        call public_4cdf40
        mov ecx, dword ptr ds : [public_5c64d4]
        cmp eax, dword ptr ds : [ecx]
        jle public_4ce1a0
        mov edx, dword ptr ds : [public_5c64d0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [public_5c64cc]
        mov edx, dword ptr ds : [public_5c64c8]
        fld dword ptr ds : [ecx]
        fld dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_4ce1ba
        public_4ce1a0 : nop
        mov eax, dword ptr ds : [public_5c64c4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c64c0]
        mov eax, dword ptr ds : [public_5c64bc]
        fld dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        public_4ce1ba : nop
        fld dword ptr ss : [esp+0x4C]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jp public_4ce1d5
        fstp st(0)
        public_4ce1cd : nop
        fstp dword ptr ss : [ebp+0x8C]
        jmp public_4ce1fe
        public_4ce1d5 : nop
        fld dword ptr ss : [esp+0x4C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        je public_4ce43d
        fsub st, st(1)
        fld dword ptr ss : [esp+0x4C]
        fdiv dword ptr ss : [esp+0x14]
        fmulp 
        fadd st, st(1)
        fstp dword ptr ss : [ebp+0x8C]
        public_4ce1fc : nop
        fstp st(0)
        public_4ce1fe : nop
        mov ecx, dword ptr ss : [ebp+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x50], 0xFFFFFF9C
        call public_430ab0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_4ce254
        mov eax, dword ptr ss : [ebp+0x84]
        xor edi, edi
        test eax, eax
        jle public_4ce254
        lea esi, ss:[ebp+0x44]
        public_4ce227 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_4ce246
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x38]
        cmp eax, dword ptr ss : [esp+0x4C]
        jle public_4ce246
        mov dword ptr ss : [esp+0x4C], eax
        public_4ce246 : nop
        mov eax, dword ptr ss : [ebp+0x84]
        inc edi
        add esi, 4
        cmp edi, eax
        jl public_4ce227
        public_4ce254 : nop
        mov edi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, ebp
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [edi+0xC], 1
        call public_4ce490
        test al, al
        jne public_4ce2bc
        mov ecx, ebp
        call public_4ce460
        test al, al
        jne public_4ce2bc
        mov esi, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_4cabd0
        lea ecx, ds:[esi+0x1CC]
        push ecx
        lea edx, ds:[esi+0x1C8]
        push edx
        lea eax, ds:[esi+0x1C4]
        push eax
        push 1
        push 0
        push 0
        push ebp
        mov ecx, esi
        call public_4cae10
        mov ecx, dword ptr ss : [ebp+0x90]
        mov dword ptr ds : [esi+0x1B8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        public_4ce2bc : nop
        mov ecx, ebp
        call public_4ce490
        mov byte ptr ss : [esp+0x13], al
        mov byte ptr ss : [esp+0x4C], 0
        call public_54baf0
        test eax, eax
        je public_4ce2e4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [ebp]
        sete byte ptr ss : [esp+0x4C]
        public_4ce2e4 : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        lea esi, ss:[ebp+8]
        mov byte ptr ss : [esp+0x48], 1
        jne public_4ce30f
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4ce30f
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_4ce30f
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_4ce30f
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_4ce314
        public_4ce30f : nop
        mov byte ptr ss : [esp+0x48], 0
        public_4ce314 : nop
        call public_41a3e0
        cmp byte ptr ss : [esp+0x13], 1
        jne public_4ce424
        mov cl, byte ptr ss : [esp+0x4C]
        test cl, cl
        jne public_4ce424
        mov cl, byte ptr ss : [esp+0x48]
        test cl, cl
        jne public_4ce424
        test al, al
        jne public_4ce426
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, ebx
        call public_4cabd0
        push 0x2C
        call public_5645c0
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        push edi
        push eax
        call public_5416c0
        add esp, 0xC
        cmp eax, edi
        je public_4ce38b
        add eax, 0xC
        cmp eax, edi
        je public_4ce38b
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_4ce38b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        mov dword ptr ss : [esp+0x4C], eax
        je public_4ce38f
        public_4ce38b : nop
        mov dword ptr ss : [esp+0x4C], edi
        public_4ce38f : nop
        mov edx, dword ptr ss : [ebp+4]
        push edi
        push edx
        call public_5416c0
        add esp, 8
        cmp eax, edi
        je public_4ce3bf
        add eax, 0xC
        cmp eax, edi
        je public_4ce3bf
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_4ce3bf
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_4ce3c1
        public_4ce3bf : nop
        xor eax, eax
        public_4ce3c1 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [ebp+0x40]
        push ecx
        push edx
        sub esp, 0x34
        mov edi, esp
        push eax
        mov eax, dword ptr ss : [esp+0x90]
        mov ecx, 0xD
        rep movsd
        push eax
        mov ecx, ebx
        call public_4cb250
        lea ecx, ds:[ebx+0x1CC]
        push ecx
        lea edx, ds:[ebx+0x1C8]
        push edx
        lea eax, ds:[ebx+0x1C4]
        push eax
        push 0
        push 1
        push 0
        push ebp
        mov ecx, ebx
        call public_4cae10
        mov ecx, dword ptr ss : [ebp+0x90]
        mov dword ptr ds : [ebx+0x1B8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        public_4ce424 : nop
        test al, al
        public_4ce426 : nop
        mov ecx, dword ptr ds : [edi+4]
        sete dl
        push edx
        push ebp
        call public_4cad10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        public_4ce43d : nop
        fstp st(0)
        fstp st(0)
        public_4ce441 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ebp
        call public_4cdfc0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x4ce000)
    }
}

#undef public_4ce053
#undef public_4ce0f6
#undef public_4ce0f8
#undef public_4ce170
#undef public_4ce1a0
#undef public_4ce1ba
#undef public_4ce1cd
#undef public_4ce1d5
#undef public_4ce1fc
#undef public_4ce1fe
#undef public_4ce227
#undef public_4ce246
#undef public_4ce254
#undef public_4ce2bc
#undef public_4ce2e4
#undef public_4ce30f
#undef public_4ce314
#undef public_4ce38b
#undef public_4ce38f
#undef public_4ce3bf
#undef public_4ce3c1
#undef public_4ce424
#undef public_4ce426
#undef public_4ce43d
#undef public_4ce441
