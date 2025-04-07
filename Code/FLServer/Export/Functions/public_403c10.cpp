#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403c10);
CLANG_FORWARD_PROC_SYMBOL(public_403e30);
CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_404490);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_4055a0);
CLANG_FORWARD_PROC_SYMBOL(public_4055b0);
CLANG_FORWARD_PROC_SYMBOL(public_4056d0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_403c29 _public_403c29
#define public_403c3a _public_403c3a
#define public_403c54 _public_403c54
#define public_403c6b _public_403c6b
#define public_403ca3 _public_403ca3
#define public_403cb5 _public_403cb5
#define public_403cf8 _public_403cf8
#define public_403d0e _public_403d0e
#define public_403d2e _public_403d2e
#define public_403d3c _public_403d3c
#define public_403d51 _public_403d51
#define public_403d71 _public_403d71
#define public_403d82 _public_403d82
#define public_403daf _public_403daf
#define public_403dc5 _public_403dc5
#define public_403dd1 _public_403dd1
#define public_403dda _public_403dda
#define public_403de2 _public_403de2
#define public_403dee _public_403dee
#define public_403e00 _public_403e00
#define public_403e0f _public_403e0f
#define public_403e1b _public_403e1b

PROC_DECLARE(0x403c10, internal_403c10, public_403c10);
extern "C" NAKED register_t __cdecl internal_403c10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [ebp+8], ebx
        push esi
        push edi
        mov esi, ecx
        jae public_403c29
        call dword ptr ds : [public_41b8d0]
        public_403c29 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        sub edi, ebx
        cmp ecx, edi
        jae public_403c3a
        mov edi, ecx
        public_403c3a : nop
        cmp esi, ebp
        jne public_403cf8
        mov eax, dword ptr ds : [esi+8]
        add edi, ebx
        or ebp, 0xFFFFFFFF
        cmp eax, edi
        jae public_403c54
        call dword ptr ds : [public_41b8d0]
        public_403c54 : nop
        mov ecx, esi
        call public_4056d0
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_403c6b
        mov ebp, eax
        test ebp, ebp
        jbe public_403ca3
        public_403c6b : nop
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea eax, ds:[edi+ebp]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+edi*2]
        push eax
        call public_403e30
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_403ca3
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [ecx+edi*2], 0
        public_403ca3 : nop
        mov ecx, esi
        mov ebp, ebx
        call public_4056d0
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        jae public_403cb5
        mov ebp, eax
        public_403cb5 : nop
        test ebp, ebp
        jbe public_403e1b
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp*2]
        push edx
        push ecx
        call public_403e30
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_403e1b
        push edi
        mov ecx, esi
        call public_404490
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_403cf8 : nop
        xor edx, edx
        cmp edi, edx
        jbe public_403d71
        cmp edi, eax
        jne public_403d71
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        jne public_403d0e
        mov eax, offset public_41c3f4
        public_403d0e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_403d71
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        je public_403d3c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_403d2e
        cmp cl, 0xFF
        je public_403d2e
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_403d3c
        public_403d2e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        xor edx, edx
        public_403d3c : nop
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        jne public_403d51
        mov eax, offset public_41c3f4
        public_403d51 : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_403d71 : nop
        mov ecx, esi
        call public_4055a0
        cmp eax, edi
        jae public_403d82
        call dword ptr ds : [public_41b8a0]
        public_403d82 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_403daf
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_403daf
        cmp cl, 0xFF
        je public_403daf
        test edi, edi
        jne public_403dda
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, esi
        call public_403e90
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_403daf : nop
        test edi, edi
        jne public_403dc5
        push 1
        mov ecx, esi
        call public_403e90
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_403dc5 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_403dd1
        cmp eax, edi
        jae public_403de2
        public_403dd1 : nop
        push 1
        mov ecx, esi
        call public_403e90
        public_403dda : nop
        mov ecx, esi
        push edi
        call public_4055b0
        public_403de2 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_403dee
        mov eax, offset public_41c3f4
        public_403dee : nop
        test edi, edi
        lea ecx, ds:[eax+ebx*2]
        mov eax, dword ptr ds : [esi+4]
        jbe public_403e0f
        mov edx, edi
        lea ebx, ds:[ebx]
        public_403e00 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_403e00
        public_403e0f : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        public_403e1b : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x403c10)
    }
}

#undef public_403c29
#undef public_403c3a
#undef public_403c54
#undef public_403c6b
#undef public_403ca3
#undef public_403cb5
#undef public_403cf8
#undef public_403d0e
#undef public_403d2e
#undef public_403d3c
#undef public_403d51
#undef public_403d71
#undef public_403d82
#undef public_403daf
#undef public_403dc5
#undef public_403dd1
#undef public_403dda
#undef public_403de2
#undef public_403dee
#undef public_403e00
#undef public_403e0f
#undef public_403e1b
