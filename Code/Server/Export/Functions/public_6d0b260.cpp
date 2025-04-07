#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f210);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f460);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d615cd);

#define public_6d0b2ea _public_6d0b2ea
#define public_6d0b34f _public_6d0b34f
#define public_6d0b360 _public_6d0b360
#define public_6d0b38a _public_6d0b38a
#define public_6d0b3b2 _public_6d0b3b2
#define public_6d0b3c4 _public_6d0b3c4
#define public_6d0b3eb _public_6d0b3eb
#define public_6d0b420 _public_6d0b420
#define public_6d0b448 _public_6d0b448
#define public_6d0b44a _public_6d0b44a
#define public_6d0b464 _public_6d0b464
#define public_6d0b471 _public_6d0b471
#define public_6d0b479 _public_6d0b479
#define public_6d0b4bb _public_6d0b4bb
#define public_6d0b4d3 _public_6d0b4d3
#define public_6d0b52b _public_6d0b52b
#define public_6d0b573 _public_6d0b573
#define public_6d0b575 _public_6d0b575
#define public_6d0b57f _public_6d0b57f
#define public_6d0b5b0 _public_6d0b5b0
#define public_6d0b5b4 _public_6d0b5b4
#define public_6d0b5cb _public_6d0b5cb
#define public_6d0b5de _public_6d0b5de
#define public_6d0b623 _public_6d0b623
#define public_6d0b657 _public_6d0b657
#define public_6d0b662 _public_6d0b662
#define public_6d0b664 _public_6d0b664
#define public_6d0b696 _public_6d0b696
#define public_6d0b6a5 _public_6d0b6a5
#define public_6d0b737 _public_6d0b737
#define public_6d0b75b _public_6d0b75b
#define public_6d0b798 _public_6d0b798
#define public_6d0b7a0 _public_6d0b7a0
#define public_6d0b7af _public_6d0b7af
#define public_6d0b7b8 _public_6d0b7b8

PROC_DECLARE(0x6d0b260, internal_6d0b260, public_6d0b260);
extern "C" NAKED register_t __cdecl internal_6d0b260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d615cd @0x6d0b262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d615cd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x164
        push ebx
        mov ebx, dword ptr ss : [esp+0x178]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x3C], esi
        call public_6d0c840
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        mov ebp, eax
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [edx]
        push 0x3C
        lea edx, ss:[esp+0x88]
        push edx
        mov edx, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [edx+4]
        push edx
        lea ecx, ds:[ebx+0xC]
        push ecx
        push eax
        call dword ptr ds : [public_6d64198]
        xor esi, esi
        mov edi, eax
        mov al, byte ptr ss : [esp+0x26]
        add esp, 0x14
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        cmp edi, esi
        mov dword ptr ss : [esp+0x17C], esi
        jbe public_6d0b34f
        mov eax, edi
        jge public_6d0b2ea
        xor eax, eax
        public_6d0b2ea : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6d60012
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x28]
        push esi
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6d23e40
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_6d28880
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6d5ffb0
        lea ecx, ds:[esi+edi*4]
        mov dword ptr ss : [esp+0x34], ecx
        add esp, 4
        lea ecx, ss:[esp+0x24]
        call public_6d31890
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [esp+0x28], esi
        xor esi, esi
        mov dword ptr ss : [esp+0x2C], edx
        cmp edi, esi
        public_6d0b34f : nop
        jle public_6d0b3c4
        mov ebp, dword ptr ds : [public_6d64234]
        mov ebx, dword ptr ds : [public_6d64a48]
        lea ecx, ds:[ecx]
        public_6d0b360 : nop
        mov eax, dword ptr ss : [esp+esi*4+0x84]
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x188]
        mov ecx, dword ptr ds : [ecx+0x1C]
        add esp, 4
        test ecx, ecx
        je public_6d0b38a
        test eax, eax
        je public_6d0b38a
        push eax
        push ecx
        call ebx
        add esp, 8
        test eax, eax
        je public_6d0b3b2
        public_6d0b38a : nop
        mov edx, dword ptr ss : [esp+esi*4+0x84]
        push edx
        call dword ptr ds : [public_6d64018]
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6d0f460
        public_6d0b3b2 : nop
        inc esi
        cmp esi, edi
        jl public_6d0b360
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x184]
        xor esi, esi
        public_6d0b3c4 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6d0b3eb
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6d0b5de
        public_6d0b3eb : nop
        lea edx, ss:[esp+0x3F]
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6d0f1f0
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ss : [esp+0x2C]
        mov ecx, eax
        mov byte ptr ss : [esp+0x17C], 1
        mov dword ptr ss : [esp+0x34], ecx
        je public_6d0b5cb
        mov edx, dword ptr ss : [esp+0x4C]
        lea esp, ss:[esp]
        public_6d0b420 : nop
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6d0b5b4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6d0b5b4
        test eax, eax
        je public_6d0b448
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0b44a
        public_6d0b448 : nop
        xor eax, eax
        public_6d0b44a : nop
        mov ecx, dword ptr ds : [eax+0xB0]
        cmp ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x20], ecx
        je public_6d0b5b4
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, edx
        je public_6d0b479
        public_6d0b464 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6d0b471
        add eax, 4
        cmp eax, edx
        jne public_6d0b464
        jmp public_6d0b479
        public_6d0b471 : nop
        cmp eax, edx
        jne public_6d0b5b4
        public_6d0b479 : nop
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6d0f210
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        jne public_6d0b4bb
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_6d0f460
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6d0f210
        mov dword ptr ss : [esp+0x70], eax
        mov byte ptr ss : [esp+0x74], 1
        jmp public_6d0b4d3
        public_6d0b4bb : nop
        lea edx, ss:[esp+0x12]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x1A], 0
        call public_6d0f600
        public_6d0b4d3 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        call public_6d0c840
        mov esi, eax
        test esi, esi
        je public_6d0b5b0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d0b5b0
        mov al, byte ptr ds : [public_6d88a80]
        test al, al
        jne public_6d0b52b
        test ebp, ebp
        je public_6d0b52b
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_6d0b52b
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_6d0b5b0
        public_6d0b52b : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x58]
        call dword ptr ds : [public_6d64224]
        mov byte ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x6C], 0
        test ebp, ebp
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [ebx+4]
        mov byte ptr ss : [esp+0x17C], 2
        mov dword ptr ss : [esp+0x68], eax
        je public_6d0b57f
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6d0b573
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0b575
        public_6d0b573 : nop
        xor eax, eax
        public_6d0b575 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov dword ptr ss : [esp+0x6C], eax
        public_6d0b57f : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x54]
        push eax
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x184]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x188]
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x17C], 1
        call dword ptr ds : [public_6d64220]
        public_6d0b5b0 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        public_6d0b5b4 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x2C]
        add ecx, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x34], ecx
        jne public_6d0b420
        public_6d0b5cb : nop
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x17C], 0
        call public_6d0b7e0
        xor esi, esi
        public_6d0b5de : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6d0b7b8
        mov dl, byte ptr ss : [esp+0x13]
        xor eax, eax
        xor ecx, ecx
        mov byte ptr ss : [esp+0x54], dl
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x60], esi
        mov ebp, dword ptr ss : [esp+0x28]
        cmp ebp, dword ptr ss : [esp+0x2C]
        mov byte ptr ss : [esp+0x17C], 3
        je public_6d0b7af
        public_6d0b623 : nop
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        je public_6d0b7a0
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_6d0b7a0
        mov edx, dword ptr ds : [esi+0xB4]
        test edx, edx
        jne public_6d0b7a0
        cmp eax, ecx
        lea edi, ds:[esi+0xB0]
        je public_6d0b662
        mov edx, dword ptr ds : [edi]
        public_6d0b657 : nop
        cmp dword ptr ds : [eax], edx
        je public_6d0b664
        add eax, 4
        cmp eax, ecx
        jne public_6d0b657
        public_6d0b662 : nop
        mov eax, ecx
        public_6d0b664 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        jne public_6d0b696
        push edi
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_6d0f460
        push edi
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x16], 1
        call public_6d0f210
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        jmp public_6d0b6a5
        public_6d0b696 : nop
        lea edx, ss:[esp+0x12]
        push edx
        lea eax, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x16], 0
        push eax
        public_6d0b6a5 : nop
        lea ecx, ss:[esp+0x78]
        call public_6d0f600
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x78]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x68]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+0x14]
        lea edi, ds:[ebx+0xC]
        sub esp, 0xC
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6d0b737
        fsqrt 
        fdivr dword ptr ds : [public_6d65520]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        jmp public_6d0b75b
        public_6d0b737 : nop
        lea ecx, ss:[esp+0x44]
        fstp st(0)
        push ecx
        call dword ptr ds : [public_6d642e8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+8]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], edx
        public_6d0b75b : nop
        mov eax, dword ptr ds : [ebx+0x18]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        je public_6d0b798
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call dword ptr ds : [public_6d644b4]
        add esp, 0xC
        public_6d0b798 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x5C]
        public_6d0b7a0 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        add ebp, 4
        cmp ebp, edx
        jne public_6d0b623
        public_6d0b7af : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d0b7b8 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x178]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x170
        ret 4
        UNREACHABLE_TRAP(0x6d0b260)
    }
}

#undef public_6d0b2ea
#undef public_6d0b34f
#undef public_6d0b360
#undef public_6d0b38a
#undef public_6d0b3b2
#undef public_6d0b3c4
#undef public_6d0b3eb
#undef public_6d0b420
#undef public_6d0b448
#undef public_6d0b44a
#undef public_6d0b464
#undef public_6d0b471
#undef public_6d0b479
#undef public_6d0b4bb
#undef public_6d0b4d3
#undef public_6d0b52b
#undef public_6d0b573
#undef public_6d0b575
#undef public_6d0b57f
#undef public_6d0b5b0
#undef public_6d0b5b4
#undef public_6d0b5cb
#undef public_6d0b5de
#undef public_6d0b623
#undef public_6d0b657
#undef public_6d0b662
#undef public_6d0b664
#undef public_6d0b696
#undef public_6d0b6a5
#undef public_6d0b737
#undef public_6d0b75b
#undef public_6d0b798
#undef public_6d0b7a0
#undef public_6d0b7af
#undef public_6d0b7b8
