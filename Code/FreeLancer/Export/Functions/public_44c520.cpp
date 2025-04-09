#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_44c520);
CLANG_FORWARD_PROC_SYMBOL(public_44cb40);
CLANG_FORWARD_PROC_SYMBOL(public_44cde0);
CLANG_FORWARD_PROC_SYMBOL(public_44ce00);
CLANG_FORWARD_PROC_SYMBOL(public_44ce60);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_44c542 _public_44c542
#define public_44c557 _public_44c557
#define public_44c55a _public_44c55a
#define public_44c55e _public_44c55e
#define public_44c5bd _public_44c5bd
#define public_44c5d5 _public_44c5d5
#define public_44c5df _public_44c5df
#define public_44c5e3 _public_44c5e3
#define public_44c5f1 _public_44c5f1
#define public_44c62f _public_44c62f
#define public_44c63e _public_44c63e
#define public_44c65f _public_44c65f
#define public_44c680 _public_44c680
#define public_44c68e _public_44c68e
#define public_44c6ad _public_44c6ad
#define public_44c6b9 _public_44c6b9
#define public_44c6d5 _public_44c6d5
#define public_44c6f0 _public_44c6f0
#define public_44c6f7 _public_44c6f7
#define public_44c71a _public_44c71a

PROC_DECLARE(0x44c520, internal_44c520, public_44c520);
extern "C" NAKED register_t __cdecl internal_44c520()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_44c55e
        mov al, byte ptr ds : [ebx]
        mov byte ptr ss : [esp+0x1C], al
        public_44c542 : nop
        mov al, byte ptr ss : [esp+0x1C]
        cmp al, byte ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_44c557
        mov ebp, dword ptr ss : [ebp]
        jmp public_44c55a
        public_44c557 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_44c55a : nop
        cmp ebp, edx
        jne public_44c542
        public_44c55e : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_44c6d5
        push 0
        push esi
        mov ecx, edi
        call public_44cde0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_44ce60
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_44c5bd
        cmp ebp, dword ptr ds : [edi+8]
        jne public_44c5bd
        mov al, byte ptr ds : [ebx]
        cmp al, byte ptr ds : [esi+0xC]
        jl public_44c5bd
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_44c5e3
        mov dword ptr ds : [eax+8], ebx
        jmp public_44c5e3
        public_44c5bd : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_44c5d5
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_44c5df
        public_44c5d5 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_44c5df
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_44c5df : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_44c5e3 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_44c6b9
        public_44c5f1 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0xD]
        test cl, cl
        jne public_44c6b9
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_44c65f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xD]
        test dl, dl
        jne public_44c62f
        mov byte ptr ds : [eax+0xD], 1
        mov byte ptr ds : [ecx+0xD], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xD], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_44c6ad
        public_44c62f : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_44c63e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_44c63e : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0xD], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xD], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_44c6ad
        public_44c65f : nop
        mov dl, byte ptr ds : [ecx+0xD]
        test dl, dl
        jne public_44c680
        mov byte ptr ds : [eax+0xD], 1
        mov byte ptr ds : [ecx+0xD], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0xD], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_44c6ad
        public_44c680 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_44c68e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_44c68e : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0xD], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xD], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_44c6ad : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_44c5f1
        public_44c6b9 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xD], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_44c6d5 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_44c6f0
        cmp esi, dword ptr ds : [ecx]
        je public_44c6f7
        lea ecx, ss:[esp+0x10]
        call public_44ce00
        mov edx, dword ptr ss : [esp+0x10]
        public_44c6f0 : nop
        mov al, byte ptr ds : [edx+0xC]
        cmp al, byte ptr ds : [ebx]
        jge public_44c71a
        public_44c6f7 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_44cb40
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_44c71a : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x44c520)
    }
}

#undef public_44c542
#undef public_44c557
#undef public_44c55a
#undef public_44c55e
#undef public_44c5bd
#undef public_44c5d5
#undef public_44c5df
#undef public_44c5e3
#undef public_44c5f1
#undef public_44c62f
#undef public_44c63e
#undef public_44c65f
#undef public_44c680
#undef public_44c68e
#undef public_44c6ad
#undef public_44c6b9
#undef public_44c6d5
#undef public_44c6f0
#undef public_44c6f7
#undef public_44c71a
