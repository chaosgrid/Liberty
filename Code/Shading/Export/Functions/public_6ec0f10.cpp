#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0e50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0f10);
CLANG_FORWARD_PROC_SYMBOL(public_6ec10b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec10d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec0f5d _public_6ec0f5d
#define public_6ec0f5f _public_6ec0f5f
#define public_6ec0f99 _public_6ec0f99
#define public_6ec0fb8 _public_6ec0fb8
#define public_6ec0fdf _public_6ec0fdf
#define public_6ec0ffe _public_6ec0ffe
#define public_6ec1027 _public_6ec1027
#define public_6ec103f _public_6ec103f
#define public_6ec1060 _public_6ec1060
#define public_6ec107e _public_6ec107e
#define public_6ec10a1 _public_6ec10a1

PROC_DECLARE(0x6ec0f10, internal_6ec0f10, public_6ec0f10);
extern "C" NAKED register_t __cdecl internal_6ec0f10()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov dword ptr ss : [esp+0x18], ecx
        call public_6ed0c5c
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        je public_6ec0f5d
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ds:[esi+0x10]
        call public_6ec38a0
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ds:[esi+0x20]
        call public_6ec38a0
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        call public_6ec10d0
        jmp public_6ec0f5f
        public_6ec0f5d : nop
        xor esi, esi
        public_6ec0f5f : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], esi
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        mov ebp, 0x3F800000
        je public_6ec0f99
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ec0fb8
        public_6ec0f99 : nop
        push ebp
        push ebp
        push ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], ebx
        call public_6ec10b0
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        mov ecx, edi
        call public_6ec38e0
        public_6ec0fb8 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_6ec0fdf
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ec0ffe
        public_6ec0fdf : nop
        push ebp
        push ebp
        push ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], ebx
        call public_6ec10b0
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        mov ecx, edi
        call public_6ec38e0
        public_6ec0ffe : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebp
        mov dword ptr ds : [eax+0x10], ebp
        lea edi, ds:[esi+0x20]
        mov dword ptr ds : [esi+0xC], ebx
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_6ec1027
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6ec107e
        public_6ec1027 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6ec103f
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6ec1060
        public_6ec103f : nop
        mov ebp, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, edi
        call public_6ecde00
        mov ecx, 1
        sub ecx, eax
        push ecx
        push ebp
        mov ecx, edi
        call public_6ece6e0
        jmp public_6ec107e
        public_6ec1060 : nop
        mov ecx, edi
        call public_6ecde00
        cmp eax, 1
        jbe public_6ec107e
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        push edx
        add eax, 4
        push eax
        mov ecx, edi
        call public_6ec3fe0
        public_6ec107e : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call public_6ec0e50
        cmp byte ptr ss : [esp+0x3C], bl
        je public_6ec10a1
        mov ecx, esi
        call public_6ebe560
        public_6ec10a1 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x6ec0f10)
    }
}

#undef public_6ec0f5d
#undef public_6ec0f5f
#undef public_6ec0f99
#undef public_6ec0fb8
#undef public_6ec0fdf
#undef public_6ec0ffe
#undef public_6ec1027
#undef public_6ec103f
#undef public_6ec1060
#undef public_6ec107e
#undef public_6ec10a1
