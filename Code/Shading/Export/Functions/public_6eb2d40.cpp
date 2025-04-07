#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb32f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3310);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b10);

#define public_6eb2da1 _public_6eb2da1
#define public_6eb2db2 _public_6eb2db2
#define public_6eb2dc1 _public_6eb2dc1
#define public_6eb2dd1 _public_6eb2dd1
#define public_6eb2dda _public_6eb2dda
#define public_6eb2de1 _public_6eb2de1
#define public_6eb2e42 _public_6eb2e42
#define public_6eb2e53 _public_6eb2e53
#define public_6eb2e62 _public_6eb2e62
#define public_6eb2e6d _public_6eb2e6d
#define public_6eb2e78 _public_6eb2e78
#define public_6eb2e7f _public_6eb2e7f
#define public_6eb2f0a _public_6eb2f0a
#define public_6eb2f68 _public_6eb2f68
#define public_6eb2fa6 _public_6eb2fa6
#define public_6eb2fb7 _public_6eb2fb7
#define public_6eb2ff6 _public_6eb2ff6
#define public_6eb301a _public_6eb301a
#define public_6eb306a _public_6eb306a
#define public_6eb30d1 _public_6eb30d1
#define public_6eb3127 _public_6eb3127
#define public_6eb318d _public_6eb318d
#define public_6eb3196 _public_6eb3196
#define public_6eb31cc _public_6eb31cc
#define public_6eb31e5 _public_6eb31e5
#define public_6eb31f5 _public_6eb31f5
#define public_6eb32c5 _public_6eb32c5
#define public_6eb32dd _public_6eb32dd
#define public_6eb32df _public_6eb32df

PROC_DECLARE(0x6eb2d40, internal_6eb2d40, public_6eb2d40);
extern "C" NAKED register_t __cdecl internal_6eb2d40()
{
    __asm
    {
        sub esp, 0x144
        push ebx
        mov ebx, dword ptr ss : [esp+0x14C]
        mov al, byte ptr ds : [ebx+0x74]
        test al, al
        push esi
        je public_6eb32dd
        mov eax, dword ptr ss : [esp+0x154]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x34]
        push esi
        mov esi, dword ptr ss : [esp+0x164]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        xor esi, esi
        cmp eax, esi
        jl public_6eb32df
        mov eax, dword ptr ss : [esp+0x38]
        push ebp
        mov ecx, eax
        push edi
        and ecx, 0xC
        xor edi, edi
        cmp cl, 0xC
        jne public_6eb2da1
        mov edi, 0x1C
        jmp public_6eb2dc1
        public_6eb2da1 : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_6eb2db2
        mov edi, 0x10
        jmp public_6eb2dc1
        public_6eb2db2 : nop
        mov ecx, eax
        and ecx, 2
        cmp cl, 2
        jne public_6eb2dc1
        mov edi, 0xC
        public_6eb2dc1 : nop
        test al, 0x10
        mov dword ptr ss : [esp+0x14], esi
        je public_6eb2dd1
        mov dword ptr ss : [esp+0x14], 0xC
        public_6eb2dd1 : nop
        test al, 0x40
        je public_6eb2dda
        mov esi, 4
        public_6eb2dda : nop
        test al, al
        jns public_6eb2de1
        add esi, 4
        public_6eb2de1 : nop
        push eax
        call public_6eb3310
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebp, eax
        add ebp, esi
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 4
        add ebp, ecx
        mov ecx, dword ptr ss : [esp+0x168]
        push ecx
        mov ecx, dword ptr ss : [esp+0x168]
        mov edx, dword ptr ds : [eax]
        push ecx
        add ebp, edi
        mov edi, dword ptr ss : [esp+0x164]
        mov esi, dword ptr ds : [edi+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        push esi
        mov esi, ebp
        imul esi, ecx
        mov ecx, dword ptr ss : [esp+0x58]
        sub ecx, esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, eax
        and edx, 0xC
        xor esi, esi
        cmp dl, 0xC
        jne public_6eb2e42
        mov esi, 0x1C
        jmp public_6eb2e62
        public_6eb2e42 : nop
        mov ecx, eax
        and ecx, 4
        cmp cl, 4
        jne public_6eb2e53
        mov esi, 0x10
        jmp public_6eb2e62
        public_6eb2e53 : nop
        mov edx, eax
        and edx, 2
        cmp dl, 2
        jne public_6eb2e62
        mov esi, 0xC
        public_6eb2e62 : nop
        xor edx, edx
        test al, 0x10
        je public_6eb2e6d
        mov edx, 0xC
        public_6eb2e6d : nop
        xor ecx, ecx
        test al, 0x40
        je public_6eb2e78
        mov ecx, 4
        public_6eb2e78 : nop
        test al, al
        jns public_6eb2e7f
        add ecx, 4
        public_6eb2e7f : nop
        fld dword ptr ds : [ebx+0x70]
        lea eax, ds:[ecx+edx]
        mov edx, dword ptr ss : [esp+0x48]
        fst dword ptr ss : [esp+0x64]
        add eax, esi
        fst dword ptr ss : [esp+0x74]
        mov esi, dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x84]
        add eax, edx
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [public_6ed56c0]
        test eax, eax
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x88], 0
        jne public_6eb2f0a
        call public_6ed0b10
        mov dword ptr ds : [public_6ed56c0], eax
        public_6eb2f0a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x64]
        push edx
        push esi
        lea edx, ss:[esp+0x9C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0xF8]
        call public_6eb32f0
        mov eax, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x34]
        push edx
        push 7
        mov dword ptr ss : [esp+0x3C], 1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        je public_6eb2fa6
        mov eax, dword ptr ds : [public_6ed56c0]
        test eax, eax
        mov esi, dword ptr ds : [edi+8]
        jne public_6eb2f68
        call public_6ed0b10
        mov dword ptr ds : [public_6ed56c0], eax
        public_6eb2f68 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xF4]
        push edx
        push esi
        lea edx, ss:[esp+0x9C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0xC8]
        call public_6eb32f0
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        jmp public_6eb2fb7
        public_6eb2fa6 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xF4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_6eb2fb7 : nop
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x18], 0x3F800000
        je public_6eb2ff6
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [edi]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x88]
        public_6eb2ff6 : nop
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_6ed56c0]
        test eax, eax
        fdiv dword ptr ds : [ebx+0x70]
        mov esi, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x54]
        jne public_6eb301a
        call public_6ed0b10
        mov dword ptr ds : [public_6ed56c0], eax
        public_6eb301a : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0xCC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_6ed56c0]
        test eax, eax
        mov ecx, 0xC
        lea esi, ss:[esp+0xC4]
        lea edi, ss:[esp+0x124]
        rep movsd
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        jne public_6eb306a
        call public_6ed0b10
        mov dword ptr ds : [public_6ed56c0], eax
        public_6eb306a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x128]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        faddp 
        mov dword ptr ss : [esp+0x24], edx
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6ed1284]
        fnstsw ax
        test ah, 0x41
        jp public_6eb30d1
        mov dword ptr ss : [esp+0x10], 0x33D6BF95
        public_6eb30d1 : nop
        fld dword ptr ds : [public_6ed1270]
        fdiv dword ptr ss : [esp+0x10]
        fld st(0)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x70]
        fsub dword ptr ds : [public_6ed1270]
        fmul dword ptr ss : [esp+0x54]
        fcom dword ptr ds : [public_6ed1284]
        fnstsw ax
        test ah, 0x41
        jp public_6eb3127
        fstp st(0)
        fld dword ptr ds : [public_6ed1280]
        public_6eb3127 : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x15C]
        fsub dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x164]
        mov edx, dword ptr ds : [esi+0x18]
        fld st(0)
        lea ecx, ds:[eax+eax*2]
        faddp st(2), st
        lea edx, ds:[edx+ecx*4]
        fxch 
        mov ecx, dword ptr ds : [esi+0x40]
        lea ecx, ds:[ecx+eax*8]
        fdivp 
        mov eax, dword ptr ss : [esp+0x168]
        lea edi, ds:[ecx+eax*8]
        fld st(0)
        fmul st, st(1)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ds : [public_6ed1270]
        fsub dword ptr ds : [ebx+0x6C]
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_6ed1278]
        fnstsw ax
        test ah, 5
        jp public_6eb318d
        fmul dword ptr ss : [esp+0x10]
        fadd st(0), st
        public_6eb318d : nop
        test byte ptr ds : [esi], 4
        jne public_6eb31f5
        cmp ecx, edi
        je public_6eb31f5
        public_6eb3196 : nop
        mov esi, dword ptr ss : [esp+0x38]
        fld st(0)
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx]
        faddp 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6eb31cc
        fstp st(0)
        mov dword ptr ds : [esi], 0
        jmp public_6eb31e5
        public_6eb31cc : nop
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_6ed1270]
        fsub dword ptr ss : [esp+0x14]
        fdivp 
        fmul dword ptr ds : [ebx+0x68]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi]
        public_6eb31e5 : nop
        add esi, ebp
        add ecx, 8
        add edx, 0xC
        cmp ecx, edi
        mov dword ptr ss : [esp+0x38], esi
        jne public_6eb3196
        public_6eb31f5 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        fstp st(0)
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0xE
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ss : [esp+0x170]
        mov esi, dword ptr ss : [esp+0x16C]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x164]
        mov edx, dword ptr ds : [edx+0x10]
        lea edx, ds:[edx+esi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x174]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        mov edx, dword ptr ss : [esp+0x178]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov ebx, dword ptr ds : [ebx+4]
        pop edi
        mov esi, offset public_6ed1130
        mov eax, 0x8D
        pop ebp
        public_6eb32c5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb32c5
        public_6eb32dd : nop
        xor eax, eax
        public_6eb32df : nop
        pop esi
        pop ebx
        add esp, 0x144
        ret 0x20
        UNREACHABLE_TRAP(0x6eb2d40)
    }
}

#undef public_6eb2da1
#undef public_6eb2db2
#undef public_6eb2dc1
#undef public_6eb2dd1
#undef public_6eb2dda
#undef public_6eb2de1
#undef public_6eb2e42
#undef public_6eb2e53
#undef public_6eb2e62
#undef public_6eb2e6d
#undef public_6eb2e78
#undef public_6eb2e7f
#undef public_6eb2f0a
#undef public_6eb2f68
#undef public_6eb2fa6
#undef public_6eb2fb7
#undef public_6eb2ff6
#undef public_6eb301a
#undef public_6eb306a
#undef public_6eb30d1
#undef public_6eb3127
#undef public_6eb318d
#undef public_6eb3196
#undef public_6eb31cc
#undef public_6eb31e5
#undef public_6eb31f5
#undef public_6eb32c5
#undef public_6eb32dd
#undef public_6eb32df
