#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5adfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c56a6);

#define public_5ab63d _public_5ab63d
#define public_5ab64a _public_5ab64a
#define public_5ab65a _public_5ab65a
#define public_5ab7bd _public_5ab7bd
#define public_5ab808 _public_5ab808
#define public_5ab85c _public_5ab85c
#define public_5ab869 _public_5ab869
#define public_5ab8f0 _public_5ab8f0
#define public_5ab929 _public_5ab929
#define public_5aba65 _public_5aba65
#define public_5abaa8 _public_5abaa8
#define public_5abab0 _public_5abab0
#define public_5abad1 _public_5abad1
#define public_5abae1 _public_5abae1
#define public_5abb03 _public_5abb03
#define public_5abb0a _public_5abb0a
#define public_5abb30 _public_5abb30
#define public_5abb55 _public_5abb55
#define public_5abb65 _public_5abb65
#define public_5abb67 _public_5abb67
#define public_5abb89 _public_5abb89
#define public_5abc1c _public_5abc1c

PROC_DECLARE(0x5ab590, internal_5ab590, public_5ab590);
extern "C" NAKED register_t __cdecl internal_5ab590()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c56a6 @0x5ab598*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c56a6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax+8]
        sub esp, 0x540
        mov ecx, edx
        and ecx, 0xF00
        cmp ecx, 0x200
        push ebx
        push esi
        jne public_5abc1c
        mov ecx, edx
        and ecx, 0xFF000
        cmp ecx, 0x7000
        jne public_5abc1c
        cmp edx, 0x7204
        jne public_5abc1c
        mov cl, byte ptr ds : [eax+4]
        xor ebx, ebx
        xor esi, esi
        cmp cl, bl
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_5ab63d
        mov esi, dword ptr ds : [eax+0x24]
        cmp esi, ebx
        mov edx, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], esi
        jbe public_5ab63d
        mov eax, dword ptr ss : [esp+0x558]
        mov ecx, dword ptr ds : [eax+0x23C]
        push ebx
        push ebx
        lea edx, ds:[ecx+1]
        push ebx
        mov dword ptr ds : [eax+0x23C], edx
        mov eax, dword ptr ds : [eax+0x234]
        mov eax, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x65
        push eax
        call dword ptr ds : [edx+0x14]
        jmp public_5ab64a
        public_5ab63d : nop
        mov eax, dword ptr ss : [esp+0x558]
        mov dword ptr ds : [eax+0x23C], ebx
        public_5ab64a : nop
        xor eax, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], eax
        jbe public_5abc1c
        push ebp
        push edi
        public_5ab65a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [ecx+eax*4]
        mov dl, byte ptr ss : [esp+0x14]
        push ebx
        lea ecx, ss:[esp+0x38]
        mov edi, 0xFFFFFFFE
        mov byte ptr ss : [esp+0x38], dl
        call dword ptr ds : [public_5c6fb8]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x55C], ebx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        call public_5a6900
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x55C], 1
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], edi
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        mov byte ptr ss : [esp+0x74], bl
        mov byte ptr ss : [esp+0x75], bl
        mov byte ptr ss : [esp+0x76], bl
        mov dword ptr ss : [esp+0x78], ebx
        call dword ptr ds : [public_5c6fc0]
        lea edx, ss:[esp+0x1F]
        push edx
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x55C], 2
        call dword ptr ds : [public_5c6fc0]
        lea eax, ss:[esp+0x15]
        push eax
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0x55C], 3
        call dword ptr ds : [public_5c6f98]
        lea ecx, ss:[esp+0x16]
        push ecx
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0x55C], 4
        call dword ptr ds : [public_5c6f98]
        mov dword ptr ss : [esp+0xC4], ebx
        mov byte ptr ss : [esp+0xC8], bl
        mov byte ptr ss : [esp+0xC9], 1
        mov byte ptr ss : [esp+0xCA], 1
        mov ebp, 1
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0xB8], ebx
        mov dword ptr ss : [esp+0xBC], ebp
        mov dword ptr ss : [esp+0xCC], 2
        mov dword ptr ss : [esp+0xC0], ebx
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ss : [esp+0x55C], 5
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov edi, eax
        push ebp
        push edi
        lea ecx, ss:[esp+0x80]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5ab7bd
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x7C]
        push edi
        push edx
        push eax
        call public_41d8a0
        add esp, 0xC
        push edi
        lea ecx, ss:[esp+0x7C]
        call dword ptr ds : [public_5c7054]
        public_5ab7bd : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov edi, eax
        push 1
        push edi
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5ab808
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x8C]
        push edi
        push ecx
        push edx
        call public_41d8a0
        add esp, 0xC
        push edi
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c7054]
        public_5ab808 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [public_5c70b0]
        mov dword ptr ss : [esp+0xC4], eax
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c71c8]
        add esp, 8
        mov edi, eax
        push 1
        push edi
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5ab85c
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x38]
        push edi
        push eax
        push ecx
        call public_41d8a0
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x48], edi
        add esp, 0xC
        mov word ptr ds : [edx+edi*2], bx
        public_5ab85c : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        jne public_5ab869
        mov eax, dword ptr ds : [public_5c700c]
        public_5ab869 : nop
        push eax
        lea eax, ss:[esp+0xD4]
/*FIXUP push offset public_5e65f4 @0x5ab871*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e65f4
        push eax
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        lea ecx, ss:[esp+0xD0]
        push ecx
        call dword ptr ds : [public_5c72f4]
        push eax
        call dword ptr ds : [public_5c72f8]
        mov dword ptr ss : [esp+0x44], eax
        mov esi, dword ptr ds : [esi+0x14]
        push 0x400
        lea edx, ss:[esp+0x154]
        push esi
        push edx
        call dword ptr ds : [public_5c7140]
        mov edi, dword ptr ds : [public_5c7168]
        lea eax, ss:[esp+0x15C]
        push 0x3A
        push eax
        call edi
        mov esi, eax
        add esp, 0x14
        cmp esi, ebx
        je public_5abb89
        lea ecx, ss:[esp+0x150]
        push 0x2C
        push ecx
        mov byte ptr ds : [esi], bl
        call dword ptr ds : [public_5c70e4]
        mov ebp, dword ptr ds : [public_5c70c4]
        add esp, 8
        cmp eax, ebx
        je public_5ab929
        mov edi, edi
        public_5ab8f0 : nop
        mov byte ptr ds : [eax], bl
        inc eax
        push eax
        call ebp
        add esp, 4
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x58]
        push 1
        push eax
        lea ecx, ss:[esp+0x58]
        call public_537260
        lea ecx, ss:[esp+0x150]
        push 0x2C
        push ecx
        call dword ptr ds : [public_5c70e4]
        add esp, 8
        cmp eax, ebx
        jne public_5ab8f0
        public_5ab929 : nop
        lea edx, ss:[esp+0x150]
        push edx
        call ebp
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        lea eax, ss:[esp+0x30]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x58]
        call public_537260
        inc esi
        push 0x3A
        push esi
        mov dword ptr ss : [esp+0x18], esi
        call edi
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_5abb89
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov byte ptr ds : [esi], bl
        call ebp
        mov dword ptr ss : [esp+0xC0], eax
        lea eax, ds:[esi+1]
        push 0x3A
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call edi
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        je public_5abb89
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov byte ptr ds : [esi], bl
        call ebp
        test eax, eax
        lea eax, ds:[esi+1]
        setne cl
        push 0x3A
        push eax
        mov byte ptr ss : [esp+0xD4], cl
        mov dword ptr ss : [esp+0x1C], eax
        call edi
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        je public_5abb89
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov byte ptr ds : [esi], bl
        call ebp
        test eax, eax
        setne al
        mov byte ptr ss : [esp+0xCE], al
        lea eax, ds:[esi+1]
        push 0x3A
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call edi
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        je public_5abb89
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov byte ptr ds : [esi], bl
        call ebp
        test eax, eax
        setne dl
        inc esi
        push 0x3A
        push esi
        mov byte ptr ss : [esp+0xD5], dl
        call edi
        add esp, 0xC
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_5abb89
        or ecx, 0xFFFFFFFF
        mov byte ptr ds : [eax], bl
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        mov dword ptr ss : [esp+0x14], ecx
        push ecx
        lea ecx, ss:[esp+0xA0]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5aba65
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x9C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0xA0], eax
        mov byte ptr ds : [ecx+eax], bl
        public_5aba65 : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+1]
        push eax
        call ebp
        add esp, 4
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC4], eax
        je public_5abb89
        cmp dword ptr ss : [esp+0x5C], ebx
        je public_5abb03
        cmp dword ptr ss : [esp+0xCC], ebx
        je public_5abb03
        mov edi, dword ptr ss : [esp+0x560]
        mov esi, dword ptr ds : [edi+0x144]
        cmp esi, dword ptr ds : [edi+0x148]
        je public_5abae1
        jmp public_5abab0
        public_5abaa8 : nop
        mov eax, dword ptr ss : [esp+0xC4]
        nop 
        public_5abab0 : nop
        cmp dword ptr ds : [esi+0x90], eax
        jne public_5abad1
        lea eax, ss:[esp+0x98]
        push eax
        lea ecx, ds:[esi+0x64]
        push ecx
        call dword ptr ds : [public_5c704c]
        add esp, 8
        test al, al
        jne public_5abb0a
        public_5abad1 : nop
        mov eax, dword ptr ds : [edi+0x148]
        add esi, 0x9C
        cmp esi, eax
        jne public_5abaa8
        public_5abae1 : nop
        mov eax, dword ptr ds : [edi+0x148]
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ds:[edi+0x140]
        push 1
        push eax
        call public_5adfc0
        mov byte ptr ds : [edi+0x238], 1
        jmp public_5abb0a
        public_5abb03 : nop
        mov edi, dword ptr ss : [esp+0x560]
        public_5abb0a : nop
        cmp dword ptr ss : [esp+0xA0], ebx
        je public_5abb65
        mov eax, dword ptr ss : [esp+0xC4]
        mov esi, dword ptr ds : [edi+0x144]
        mov dword ptr ss : [esp+0x18], eax
        cmp esi, dword ptr ds : [edi+0x148]
        je public_5abb65
        lea esp, ss:[esp]
        public_5abb30 : nop
        lea ecx, ss:[esp+0x98]
        push ecx
        lea edx, ds:[esi+0x64]
        push edx
        call dword ptr ds : [public_5c704c]
        add esp, 8
        test al, al
        je public_5abb55
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [esi+0x90], eax
        je public_5abb67
        public_5abb55 : nop
        mov eax, dword ptr ds : [edi+0x148]
        add esi, 0x9C
        cmp esi, eax
        jne public_5abb30
        public_5abb65 : nop
        xor esi, esi
        public_5abb67 : nop
        cmp esi, ebx
        je public_5abb89
        cmp byte ptr ds : [esi+0x3E], bl
        jne public_5abb89
        mov eax, dword ptr ds : [edi+0x168]
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ds:[edi+0x160]
        push 1
        push eax
        call public_5adfc0
        public_5abb89 : nop
        push 1
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0x55C], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x9C]
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x7C]
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        lea ecx, ss:[esp+0x54]
        call public_53aaa0
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        call public_5b7e1d
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jb public_5ab65a
        pop edi
        pop ebp
        public_5abc1c : nop
        mov ecx, dword ptr ss : [esp+0x548]
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54C
        ret 8
        UNREACHABLE_TRAP(0x5ab590)
    }
}

#undef public_5ab63d
#undef public_5ab64a
#undef public_5ab65a
#undef public_5ab7bd
#undef public_5ab808
#undef public_5ab85c
#undef public_5ab869
#undef public_5ab8f0
#undef public_5ab929
#undef public_5aba65
#undef public_5abaa8
#undef public_5abab0
#undef public_5abad1
#undef public_5abae1
#undef public_5abb03
#undef public_5abb0a
#undef public_5abb30
#undef public_5abb55
#undef public_5abb65
#undef public_5abb67
#undef public_5abb89
#undef public_5abc1c
