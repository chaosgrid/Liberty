#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3efa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3eff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f050);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f070);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fbd0);

#define public_6f3d1d0 _public_6f3d1d0
#define public_6f3d1e3 _public_6f3d1e3
#define public_6f3d1e6 _public_6f3d1e6
#define public_6f3d1ea _public_6f3d1ea
#define public_6f3d249 _public_6f3d249
#define public_6f3d261 _public_6f3d261
#define public_6f3d26b _public_6f3d26b
#define public_6f3d26f _public_6f3d26f
#define public_6f3d280 _public_6f3d280
#define public_6f3d2bb _public_6f3d2bb
#define public_6f3d2ca _public_6f3d2ca
#define public_6f3d2eb _public_6f3d2eb
#define public_6f3d30c _public_6f3d30c
#define public_6f3d31a _public_6f3d31a
#define public_6f3d339 _public_6f3d339
#define public_6f3d345 _public_6f3d345
#define public_6f3d361 _public_6f3d361
#define public_6f3d37c _public_6f3d37c
#define public_6f3d383 _public_6f3d383
#define public_6f3d3a6 _public_6f3d3a6

PROC_DECLARE(0x6f3d1b0, internal_6f3d1b0, public_6f3d1b0);
extern "C" NAKED register_t __cdecl internal_6f3d1b0()
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
        je public_6f3d1ea
        lea esp, ss:[esp]
        public_6f3d1d0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6f3d1e3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3d1e6
        public_6f3d1e3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3d1e6 : nop
        cmp ebp, edx
        jne public_6f3d1d0
        public_6f3d1ea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3d361
        push 0
        push esi
        mov ecx, edi
        call public_6f3f050
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f3fbd0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3d249
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3d249
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6f3d249
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3d26f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3d26f
        public_6f3d249 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3d261
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3d26b
        public_6f3d261 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3d26b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3d26b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3d26f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3d345
        lea ecx, ds:[ecx]
        public_6f3d280 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6f3d345
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3d2eb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f3d2bb
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3d339
        public_6f3d2bb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3d2ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3efa0
        public_6f3d2ca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f3eff0
        jmp public_6f3d339
        public_6f3d2eb : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f3d30c
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3d339
        public_6f3d30c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3d31a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3eff0
        public_6f3d31a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f3efa0
        public_6f3d339 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3d280
        public_6f3d345 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3d361 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3d37c
        cmp esi, dword ptr ds : [ecx]
        je public_6f3d383
        lea ecx, ss:[esp+0x10]
        call public_6f3f070
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3d37c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6f3d3a6
        public_6f3d383 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f3e3d0
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
        public_6f3d3a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3d1b0)
    }
}

#undef public_6f3d1d0
#undef public_6f3d1e3
#undef public_6f3d1e6
#undef public_6f3d1ea
#undef public_6f3d249
#undef public_6f3d261
#undef public_6f3d26b
#undef public_6f3d26f
#undef public_6f3d280
#undef public_6f3d2bb
#undef public_6f3d2ca
#undef public_6f3d2eb
#undef public_6f3d30c
#undef public_6f3d31a
#undef public_6f3d339
#undef public_6f3d345
#undef public_6f3d361
#undef public_6f3d37c
#undef public_6f3d383
#undef public_6f3d3a6
