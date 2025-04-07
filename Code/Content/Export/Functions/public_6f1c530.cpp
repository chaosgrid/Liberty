#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f159f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c530);
CLANG_FORWARD_PROC_SYMBOL(public_6f29c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f2a190);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f1c5f8 _public_6f1c5f8
#define public_6f1c619 _public_6f1c619
#define public_6f1c62f _public_6f1c62f
#define public_6f1c64b _public_6f1c64b
#define public_6f1c675 _public_6f1c675
#define public_6f1c681 _public_6f1c681
#define public_6f1c69e _public_6f1c69e
#define public_6f1c6c8 _public_6f1c6c8
#define public_6f1c6d2 _public_6f1c6d2
#define public_6f1c6da _public_6f1c6da
#define public_6f1c6e3 _public_6f1c6e3
#define public_6f1c70b _public_6f1c70b
#define public_6f1c78c _public_6f1c78c
#define public_6f1c7b0 _public_6f1c7b0

PROC_DECLARE(0x6f1c530, internal_6f1c530, public_6f1c530);
extern "C" NAKED register_t __cdecl internal_6f1c530()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        add eax, 0xC
        push edi
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1c7b0
        mov ecx, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478c0
        mov edi, eax
        test edi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6f1c7b0
        mov ebx, dword ptr ds : [esi+0x80]
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [edi+0x48]
        xor ebp, ebp
        test eax, eax
        mov eax, dword ptr ds : [esi+0x70]
        je public_6f1c681
        cmp ecx, eax
        jne public_6f1c64b
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_6f1c62f
        mov eax, dword ptr ds : [esi+0x20]
        test eax, 0x3FFFFFFF
        lea ebp, ds:[esi+0x20]
        jne public_6f1c619
        lea eax, ds:[ebx+0xC]
        push eax
        xor edi, edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1c5f8
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f1c5f8
        lea ebp, ds:[esi+0x28]
        push ebp
        mov ecx, ebx
        call public_6f15940
        mov edi, eax
        test edi, 0x3FFFFFFF
        jne public_6f1c5f8
        push ebp
        mov ecx, ebx
        call public_6f15b10
        mov edi, eax
        test edi, 0x3FFFFFFF
        jne public_6f1c5f8
        push ebp
        mov ecx, ebx
        call public_6f159f0
        mov edi, eax
        public_6f1c5f8 : nop
        test edi, 0x3FFFFFFF
        lea ebp, ds:[esi+0x20]
        mov dword ptr ss : [ebp], edi
        je public_6f1c619
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ds:[esi+0x24]
        push eax
        push ebp
        call dword ptr ds : [public_6fb3630]
        add esp, 0xC
        public_6f1c619 : nop
        mov ebp, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ds:[esi+0x14]
        push edx
        push ebp
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        public_6f1c62f : nop
        lea eax, ds:[esi+0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f1c6da
        public_6f1c64b : nop
        push 1
        push eax
        push ecx
        call public_6f29c10
        mov ebp, eax
        add esp, 0xC
        test ebp, 0x3FFFFFFF
        jne public_6f1c675
        mov ecx, dword ptr ds : [esi+0x70]
        mov eax, dword ptr ds : [edi+0x48]
        push 0
        push ecx
        push eax
        call public_6f29c10
        add esp, 0xC
        mov ebp, eax
        public_6f1c675 : nop
        mov eax, dword ptr ds : [edi+0x48]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebp
        push eax
        jmp public_6f1c6d2
        public_6f1c681 : nop
        cmp ecx, eax
        jne public_6f1c69e
        lea ecx, ds:[esi+0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        jmp public_6f1c6da
        public_6f1c69e : nop
        push 1
        push eax
        push ecx
        call public_6f29c10
        mov ebp, eax
        add esp, 0xC
        test ebp, 0x3FFFFFFF
        jne public_6f1c6c8
        mov edx, dword ptr ds : [esi+0x70]
        mov eax, dword ptr ds : [edi+0x48]
        push 0
        push edx
        push eax
        call public_6f29c10
        add esp, 0xC
        mov ebp, eax
        public_6f1c6c8 : nop
        mov ecx, dword ptr ds : [edi+0x48]
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        push ecx
        public_6f1c6d2 : nop
        call public_6f2a190
        add esp, 0xC
        public_6f1c6da : nop
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f1c70b
        public_6f1c6e3 : nop
        mov edx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], edx
        call public_6f1a610
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [esi+8]
        jne public_6f1c6e3
        public_6f1c70b : nop
        mov eax, dword ptr ds : [esi+0x60]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x5C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6fa8370
        fld dword ptr ds : [esi+0x24]
        fadd dword ptr ds : [public_6fb8578]
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [esi+0x80]
        fstp dword ptr ss : [esp+0x18]
        push 0x19
        push edi
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [edx+8]
        call public_6f47af0
        mov ebx, dword ptr ss : [esp+0x28]
        push eax
        push ebx
        call public_6f5ea40
        mov ecx, dword ptr ds : [esi+0x64]
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 0x1C
        cmp ecx, 1
        ja public_6f1c78c
        mov ecx, dword ptr ds : [ebx+0x48]
        cmp ecx, dword ptr ds : [esi+0x70]
        jne public_6f1c78c
        mov cl, byte ptr ds : [esi+0x84]
        test cl, cl
        mov eax, dword ptr ds : [esi+0x6C]
        jne public_6f1c78c
        mov byte ptr ds : [esi+0x84], 1
        mov dword ptr ds : [esi+0x78], 5
        public_6f1c78c : nop
        push ecx
        mov ecx, esp
        push 8
        push 9
        push 8
        push ebp
        push eax
        push eax
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [esi+0x80]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        push edi
        push ebx
        call dword ptr ds : [edx+0x2C]
        public_6f1c7b0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6f1c530)
    }
}

#undef public_6f1c5f8
#undef public_6f1c619
#undef public_6f1c62f
#undef public_6f1c64b
#undef public_6f1c675
#undef public_6f1c681
#undef public_6f1c69e
#undef public_6f1c6c8
#undef public_6f1c6d2
#undef public_6f1c6da
#undef public_6f1c6e3
#undef public_6f1c70b
#undef public_6f1c78c
#undef public_6f1c7b0
