#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f37ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38b20);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f37efa _public_6f37efa
#define public_6f37f02 _public_6f37f02
#define public_6f37f14 _public_6f37f14
#define public_6f37f1c _public_6f37f1c
#define public_6f37f2c _public_6f37f2c
#define public_6f37f50 _public_6f37f50
#define public_6f37f68 _public_6f37f68
#define public_6f37fa6 _public_6f37fa6
#define public_6f37fb0 _public_6f37fb0
#define public_6f37fd7 _public_6f37fd7
#define public_6f37fe2 _public_6f37fe2

PROC_DECLARE(0x6f37ea0, internal_6f37ea0, public_6f37ea0);
extern "C" NAKED register_t __cdecl internal_6f37ea0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push eax
        push eax
        call public_6f38b20
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_6ea1490
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[ebx+0x24]
        mov dword ptr ds : [esi+8], edi
        call public_6f7b0f0
        mov edi, dword ptr ss : [esp+0x24]
        cmp edi, dword ptr ds : [ebx+0x28]
        je public_6f37fe2
        mov ebx, dword ptr ds : [edi+0x14]
        mov ecx, ebx
        test ecx, ecx
        jne public_6f37efa
        xor eax, eax
        jmp public_6f37f02
        public_6f37efa : nop
        mov eax, dword ptr ds : [edi+0x18]
        sub eax, ecx
        sar eax, 2
        public_6f37f02 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        lea edx, ds:[eax+eax]
        mov dword ptr ss : [esp+0x14], edx
        jne public_6f37f14
        xor eax, eax
        jmp public_6f37f1c
        public_6f37f14 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6f37f1c : nop
        cmp eax, edx
        jae public_6f37fa6
        test edx, edx
        mov eax, edx
        jge public_6f37f2c
        xor eax, eax
        public_6f37f2c : nop
        shl eax, 3
        push ebp
        push eax
        call public_6fa912a
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x18], eax
        mov ebp, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6f37f68
        lea ecx, ds:[ecx]
        public_6f37f50 : nop
        push edi
        push ebp
        call public_6f305b0
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 8
        add esp, 8
        add ebp, 8
        cmp edi, eax
        jne public_6f37f50
        public_6f37f68 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        lea edx, ds:[edi+ecx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6eae300
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+8], eax
        pop ebp
        public_6f37fa6 : nop
        cmp ebx, dword ptr ds : [edi+0x18]
        je public_6f37fd7
        nop 
        lea esp, ss:[esp]
        public_6f37fb0 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        push 1
        inc eax
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6f96770
        mov eax, dword ptr ds : [edi+0x18]
        add ebx, 4
        cmp ebx, eax
        jne public_6f37fb0
        public_6f37fd7 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6f37fe2 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f37ea0)
    }
}

#undef public_6f37efa
#undef public_6f37f02
#undef public_6f37f14
#undef public_6f37f1c
#undef public_6f37f2c
#undef public_6f37f50
#undef public_6f37f68
#undef public_6f37fa6
#undef public_6f37fb0
#undef public_6f37fd7
#undef public_6f37fe2
