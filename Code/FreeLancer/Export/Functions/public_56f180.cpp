#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_56f180);
CLANG_FORWARD_PROC_SYMBOL(public_58cd00);
CLANG_FORWARD_PROC_SYMBOL(public_58cdb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c250a);

#define public_56f251 _public_56f251
#define public_56f2ab _public_56f2ab
#define public_56f2f9 _public_56f2f9
#define public_56f353 _public_56f353
#define public_56f379 _public_56f379
#define public_56f39d _public_56f39d
#define public_56f3ca _public_56f3ca
#define public_56f423 _public_56f423
#define public_56f45f _public_56f45f
#define public_56f471 _public_56f471
#define public_56f497 _public_56f497
#define public_56f4ae _public_56f4ae
#define public_56f548 _public_56f548
#define public_56f551 _public_56f551
#define public_56f596 _public_56f596
#define public_56f5d4 _public_56f5d4
#define public_56f5d8 _public_56f5d8
#define public_56f5e6 _public_56f5e6
#define public_56f5fc _public_56f5fc

PROC_DECLARE(0x56f180, internal_56f180, public_56f180);
extern "C" NAKED register_t __cdecl internal_56f180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c250a @0x56f182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c250a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xC4]
        push ebx
        push esi
        mov dword ptr ss : [esp+0x20], edi
        call public_58cd00
        test al, al
        je public_56f5fc
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        xor ebp, ebp
        cmp esi, ebp
        mov byte ptr ss : [esp+0x13], 0
        lea ecx, ss:[esp+0x20]
        jne public_56f2f9
        cmp ebx, dword ptr ds : [edi+0x298]
        jne public_56f251
        push 0xD190
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebp
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 1
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], 0
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov byte ptr ss : [esp+0x13], 1
        jmp public_56f2ab
        public_56f251 : nop
        push 0xD824
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 2
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 3
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        public_56f2ab : nop
        push 1
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 4
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 5
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], bl
        call public_45eeb0
        jmp public_56f471
        public_56f2f9 : nop
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        je public_56f379
        mov al, byte ptr ss : [esp+0x50]
        test al, al
        je public_56f353
        push 0x3343
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 6
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 7
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], bl
        call public_45eeb0
        jmp public_56f3ca
        public_56f353 : nop
        push 0x69F5
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 8
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov byte ptr ss : [esp+0x38], 9
        jmp public_56f39d
        public_56f379 : nop
        push 0xBB80
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xA
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov byte ptr ss : [esp+0x38], 0xB
        public_56f39d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x38], bl
        je public_56f3ca
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], ebp
        public_56f3ca : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        cmp dword ptr ss : [esp+0x44], ebp
        lea ecx, ss:[esp+0x20]
        jne public_56f423
        push ebp
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], 0xC
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        mov byte ptr ss : [esp+0x44], 0xD
        call public_46c800
        mov byte ptr ss : [esp+0x38], 0xC
        jmp public_56f45f
        public_56f423 : nop
        push 1
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xE
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        mov byte ptr ss : [esp+0x44], 0xF
        call public_46c800
        mov byte ptr ss : [esp+0x38], bl
        public_56f45f : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebp
        je public_56f471
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], ebp
        public_56f471 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [ebx+4]
        je public_56f4ae
        public_56f497 : nop
        lea ecx, ds:[esi+8]
        push ecx
        push ebp
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, ebx
        call public_46c800
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_56f497
        public_56f4ae : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov ebx, dword ptr ss : [esp+0x18]
        je public_56f5e6
        mov eax, dword ptr ss : [esp+0x44]
        mov cl, byte ptr ds : [eax+ebx+0x29C]
        test cl, cl
        je public_56f551
        mov ecx, dword ptr ds : [ebx+0x270]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [esp+0x40], 0x11
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x38], 0x10
        je public_56f548
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], 0
        public_56f548 : nop
        lea ecx, ss:[esp+0x20]
        jmp public_56f5d8
        public_56f551 : nop
        mov eax, dword ptr ds : [ebx+0x26C]
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        mov byte ptr ss : [esp+0x3C], 0x13
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_56f596
        mov ebp, eax
        public_56f596 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x50]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        test ecx, ecx
        mov byte ptr ss : [esp+0x38], 0x12
        je public_56f5d4
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x50], 0
        public_56f5d4 : nop
        lea ecx, ss:[esp+0x28]
        public_56f5d8 : nop
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ec]
        public_56f5e6 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        mov ecx, dword ptr ds : [ebx+0xC4]
        call public_58cdb0
        pop ebp
        public_56f5fc : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0x14
        UNREACHABLE_TRAP(0x56f180)
    }
}

#undef public_56f251
#undef public_56f2ab
#undef public_56f2f9
#undef public_56f353
#undef public_56f379
#undef public_56f39d
#undef public_56f3ca
#undef public_56f423
#undef public_56f45f
#undef public_56f471
#undef public_56f497
#undef public_56f4ae
#undef public_56f548
#undef public_56f551
#undef public_56f596
#undef public_56f5d4
#undef public_56f5d8
#undef public_56f5e6
#undef public_56f5fc
