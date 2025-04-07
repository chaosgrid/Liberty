#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f460);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d0f49f _public_6d0f49f
#define public_6d0f4a4 _public_6d0f4a4
#define public_6d0f4ac _public_6d0f4ac
#define public_6d0f4b1 _public_6d0f4b1
#define public_6d0f4bd _public_6d0f4bd
#define public_6d0f4e0 _public_6d0f4e0
#define public_6d0f4f4 _public_6d0f4f4
#define public_6d0f55f _public_6d0f55f
#define public_6d0f5a0 _public_6d0f5a0
#define public_6d0f5ad _public_6d0f5ad
#define public_6d0f5c4 _public_6d0f5c4
#define public_6d0f5d3 _public_6d0f5d3
#define public_6d0f5e0 _public_6d0f5e0
#define public_6d0f5eb _public_6d0f5eb

PROC_DECLARE(0x6d0f460, internal_6d0f460, public_6d0f460);
extern "C" NAKED register_t __cdecl internal_6d0f460()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6d0f55f
        test edx, edx
        je public_6d0f49f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6d0f4a4
        public_6d0f49f : nop
        mov ecx, 1
        public_6d0f4a4 : nop
        test edx, edx
        jne public_6d0f4ac
        xor eax, eax
        jmp public_6d0f4b1
        public_6d0f4ac : nop
        sub eax, edx
        sar eax, 2
        public_6d0f4b1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6d0f4bd
        xor eax, eax
        public_6d0f4bd : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6d60012
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6d0f4f4
        lea ebx, ds:[ebx]
        public_6d0f4e0 : nop
        push ebx
        push ebp
        call public_6d06720
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_6d0f4e0
        public_6d0f4f4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6d06720
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6d23e40
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6d28880
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6d31890
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6d0f55f : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_6d0f5ad
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 2
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6d3f0f0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6d0f5eb
        public_6d0f5a0 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d0f5a0
        jmp public_6d0f5eb
        public_6d0f5ad : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6d0f5d3
        public_6d0f5c4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d0f5c4
        public_6d0f5d3 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6d0f5eb
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6d0f5e0 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6d0f5e0
        public_6d0f5eb : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d0f460)
    }
}

#undef public_6d0f49f
#undef public_6d0f4a4
#undef public_6d0f4ac
#undef public_6d0f4b1
#undef public_6d0f4bd
#undef public_6d0f4e0
#undef public_6d0f4f4
#undef public_6d0f55f
#undef public_6d0f5a0
#undef public_6d0f5ad
#undef public_6d0f5c4
#undef public_6d0f5d3
#undef public_6d0f5e0
#undef public_6d0f5eb
