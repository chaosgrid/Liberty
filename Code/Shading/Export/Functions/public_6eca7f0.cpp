#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec55d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb200);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb800);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb830);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecec60);

#define public_6eca810 _public_6eca810
#define public_6eca823 _public_6eca823
#define public_6eca826 _public_6eca826
#define public_6eca82a _public_6eca82a
#define public_6eca889 _public_6eca889
#define public_6eca8a1 _public_6eca8a1
#define public_6eca8ab _public_6eca8ab
#define public_6eca8af _public_6eca8af
#define public_6eca8c0 _public_6eca8c0
#define public_6eca8fb _public_6eca8fb
#define public_6eca90a _public_6eca90a
#define public_6eca92b _public_6eca92b
#define public_6eca94c _public_6eca94c
#define public_6eca95a _public_6eca95a
#define public_6eca979 _public_6eca979
#define public_6eca985 _public_6eca985
#define public_6eca9a1 _public_6eca9a1
#define public_6eca9bc _public_6eca9bc
#define public_6eca9c3 _public_6eca9c3
#define public_6eca9e6 _public_6eca9e6

PROC_DECLARE(0x6eca7f0, internal_6eca7f0, public_6eca7f0);
extern "C" NAKED register_t __cdecl internal_6eca7f0()
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
        je public_6eca82a
        lea esp, ss:[esp]
        public_6eca810 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6eca823
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eca826
        public_6eca823 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eca826 : nop
        cmp ebp, edx
        jne public_6eca810
        public_6eca82a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eca9a1
        push 0
        push esi
        mov ecx, edi
        call public_6ecb800
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ecbbd0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eca889
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eca889
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6eca889
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eca8af
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eca8af
        public_6eca889 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eca8a1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eca8ab
        public_6eca8a1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eca8ab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eca8ab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eca8af : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eca985
        lea ecx, ds:[ecx]
        public_6eca8c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6eca985
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eca92b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6eca8fb
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eca979
        public_6eca8fb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eca90a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ecec60
        public_6eca90a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6ec55d0
        jmp public_6eca979
        public_6eca92b : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6eca94c
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eca979
        public_6eca94c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eca95a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ec55d0
        public_6eca95a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6ecec60
        public_6eca979 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eca8c0
        public_6eca985 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eca9a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eca9bc
        cmp esi, dword ptr ds : [ecx]
        je public_6eca9c3
        lea ecx, ss:[esp+0x10]
        call public_6ecb830
        mov edx, dword ptr ss : [esp+0x10]
        public_6eca9bc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eca9e6
        public_6eca9c3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ecb200
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
        public_6eca9e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eca7f0)
    }
}

#undef public_6eca810
#undef public_6eca823
#undef public_6eca826
#undef public_6eca82a
#undef public_6eca889
#undef public_6eca8a1
#undef public_6eca8ab
#undef public_6eca8af
#undef public_6eca8c0
#undef public_6eca8fb
#undef public_6eca90a
#undef public_6eca92b
#undef public_6eca94c
#undef public_6eca95a
#undef public_6eca979
#undef public_6eca985
#undef public_6eca9a1
#undef public_6eca9bc
#undef public_6eca9c3
#undef public_6eca9e6
