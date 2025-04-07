#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3df0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3e10);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d4460);
CLANG_FORWARD_PROC_SYMBOL(public_65d4cd0);
CLANG_FORWARD_PROC_SYMBOL(public_65d4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);
CLANG_FORWARD_PROC_SYMBOL(public_65d6e7a);
CLANG_FORWARD_PROC_SYMBOL(public_65d73a0);

#define public_65d4ce8 _public_65d4ce8
#define public_65d4cf9 _public_65d4cf9
#define public_65d4d12 _public_65d4d12
#define public_65d4d29 _public_65d4d29
#define public_65d4d5b _public_65d4d5b
#define public_65d4d5f _public_65d4d5f
#define public_65d4d71 _public_65d4d71
#define public_65d4db4 _public_65d4db4
#define public_65d4dca _public_65d4dca
#define public_65d4dea _public_65d4dea
#define public_65d4df5 _public_65d4df5
#define public_65d4e0a _public_65d4e0a
#define public_65d4e2a _public_65d4e2a
#define public_65d4e3a _public_65d4e3a
#define public_65d4e67 _public_65d4e67
#define public_65d4e7d _public_65d4e7d
#define public_65d4e89 _public_65d4e89
#define public_65d4e92 _public_65d4e92
#define public_65d4e9a _public_65d4e9a
#define public_65d4ea6 _public_65d4ea6
#define public_65d4ec5 _public_65d4ec5

PROC_DECLARE(0x65d4cd0, internal_65d4cd0, public_65d4cd0);
extern "C" NAKED register_t __cdecl internal_65d4cd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        cmp dword ptr ds : [edi+8], esi
        jae public_65d4ce8
        call public_65d6e7a
        public_65d4ce8 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebx, eax
        sub ebx, esi
        cmp ecx, ebx
        jae public_65d4cf9
        mov ebx, ecx
        public_65d4cf9 : nop
        cmp ebp, edi
        jne public_65d4db4
        mov eax, dword ptr ss : [ebp+8]
        add ebx, esi
        or edi, 0xFFFFFFFF
        cmp eax, ebx
        jae public_65d4d12
        call public_65d6e7a
        public_65d4d12 : nop
        mov ecx, ebp
        call public_65d4460
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, 0xFFFFFFFF
        jae public_65d4d29
        mov edi, eax
        test edi, edi
        jbe public_65d4d5f
        public_65d4d29 : nop
        mov ecx, dword ptr ss : [ebp+4]
        sub eax, edi
        add ecx, ebx
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call public_65d73a0
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        sub esi, edi
        mov ecx, ebp
        push 0
        push esi
        call public_65d3e10
        test al, al
        je public_65d4d5b
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ds : [esi+eax], 0
        public_65d4d5b : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_65d4d5f : nop
        mov ecx, ebp
        mov edi, esi
        call public_65d4460
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        jae public_65d4d71
        mov edi, eax
        public_65d4d71 : nop
        test edi, edi
        jbe public_65d4ec5
        mov ecx, dword ptr ss : [ebp+4]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call public_65d73a0
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        sub esi, edi
        mov ecx, ebp
        push 0
        push esi
        call public_65d3e10
        test al, al
        je public_65d4ec5
        push esi
        mov ecx, ebp
        call public_65d3df0
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d4db4 : nop
        xor edx, edx
        cmp ebx, edx
        jbe public_65d4e2a
        cmp ebx, eax
        jne public_65d4e2a
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_65d4dca
        mov eax, offset public_65e13a4
        public_65d4dca : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_65d4e2a
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        je public_65d4df5
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_65d4dea
        cmp cl, 0xFF
        je public_65d4dea
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d4df5
        public_65d4dea : nop
        push eax
        call public_65d6cb8
        add esp, 4
        xor edx, edx
        public_65d4df5 : nop
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_65d4e0a
        mov eax, offset public_65e13a4
        public_65d4e0a : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d4e2a : nop
        mov ecx, ebp
        call public_65d4ff0
        cmp eax, ebx
        jae public_65d4e3a
        call public_65d6cc3
        public_65d4e3a : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_65d4e67
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d4e67
        cmp cl, 0xFF
        je public_65d4e67
        test ebx, ebx
        jne public_65d4e92
        dec cl
        push ebx
        mov byte ptr ds : [eax-1], cl
        mov ecx, ebp
        call public_65d3b40
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d4e67 : nop
        test ebx, ebx
        jne public_65d4e7d
        push 1
        mov ecx, ebp
        call public_65d3b40
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d4e7d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_65d4e89
        cmp eax, ebx
        jae public_65d4e9a
        public_65d4e89 : nop
        push 1
        mov ecx, ebp
        call public_65d3b40
        public_65d4e92 : nop
        mov ecx, ebp
        push ebx
        call public_65d4350
        public_65d4e9a : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_65d4ea6
        mov eax, offset public_65e13a4
        public_65d4ea6 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        add esi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_65d4ec5 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65d4cd0)
    }
}

#undef public_65d4ce8
#undef public_65d4cf9
#undef public_65d4d12
#undef public_65d4d29
#undef public_65d4d5b
#undef public_65d4d5f
#undef public_65d4d71
#undef public_65d4db4
#undef public_65d4dca
#undef public_65d4dea
#undef public_65d4df5
#undef public_65d4e0a
#undef public_65d4e2a
#undef public_65d4e3a
#undef public_65d4e67
#undef public_65d4e7d
#undef public_65d4e89
#undef public_65d4e92
#undef public_65d4e9a
#undef public_65d4ea6
#undef public_65d4ec5
