#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42f0f0);
CLANG_FORWARD_PROC_SYMBOL(public_42fe20);
CLANG_FORWARD_PROC_SYMBOL(public_430070);
CLANG_FORWARD_PROC_SYMBOL(public_430340);
CLANG_FORWARD_PROC_SYMBOL(public_430500);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_42f110 _public_42f110
#define public_42f123 _public_42f123
#define public_42f126 _public_42f126
#define public_42f12a _public_42f12a
#define public_42f189 _public_42f189
#define public_42f1a1 _public_42f1a1
#define public_42f1ab _public_42f1ab
#define public_42f1af _public_42f1af
#define public_42f1c0 _public_42f1c0
#define public_42f1fb _public_42f1fb
#define public_42f20a _public_42f20a
#define public_42f22b _public_42f22b
#define public_42f24c _public_42f24c
#define public_42f25a _public_42f25a
#define public_42f279 _public_42f279
#define public_42f285 _public_42f285
#define public_42f2a1 _public_42f2a1
#define public_42f2bc _public_42f2bc
#define public_42f2c3 _public_42f2c3
#define public_42f2e6 _public_42f2e6

PROC_DECLARE(0x42f0f0, internal_42f0f0, public_42f0f0);
extern "C" NAKED register_t __cdecl internal_42f0f0()
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
        je public_42f12a
        lea esp, ss:[esp]
        public_42f110 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_42f123
        mov ebp, dword ptr ss : [ebp]
        jmp public_42f126
        public_42f123 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_42f126 : nop
        cmp ebp, edx
        jne public_42f110
        public_42f12a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_42f2a1
        push 0
        push esi
        mov ecx, edi
        call public_430070
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_430500
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_42f189
        cmp ebp, dword ptr ds : [edi+8]
        jne public_42f189
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_42f189
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_42f1af
        mov dword ptr ds : [eax+8], ebx
        jmp public_42f1af
        public_42f189 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_42f1a1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_42f1ab
        public_42f1a1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_42f1ab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_42f1ab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_42f1af : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_42f285
        lea ecx, ds:[ecx]
        public_42f1c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x48]
        test cl, cl
        jne public_42f285
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_42f22b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_42f1fb
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_42f279
        public_42f1fb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_42f20a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_42f20a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x48], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_42f279
        public_42f22b : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_42f24c
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x48], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_42f279
        public_42f24c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_42f25a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_42f25a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_42f279 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_42f1c0
        public_42f285 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_42f2a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_42f2bc
        cmp esi, dword ptr ds : [ecx]
        je public_42f2c3
        lea ecx, ss:[esp+0x10]
        call public_430340
        mov edx, dword ptr ss : [esp+0x10]
        public_42f2bc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_42f2e6
        public_42f2c3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_42fe20
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
        public_42f2e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x42f0f0)
    }
}

#undef public_42f110
#undef public_42f123
#undef public_42f126
#undef public_42f12a
#undef public_42f189
#undef public_42f1a1
#undef public_42f1ab
#undef public_42f1af
#undef public_42f1c0
#undef public_42f1fb
#undef public_42f20a
#undef public_42f22b
#undef public_42f24c
#undef public_42f25a
#undef public_42f279
#undef public_42f285
#undef public_42f2a1
#undef public_42f2bc
#undef public_42f2c3
#undef public_42f2e6
