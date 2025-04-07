#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da961f _public_6da961f
#define public_6da9637 _public_6da9637
#define public_6da964a _public_6da964a
#define public_6da9674 _public_6da9674
#define public_6da9687 _public_6da9687
#define public_6da96a4 _public_6da96a4
#define public_6da96b7 _public_6da96b7
#define public_6da96d6 _public_6da96d6
#define public_6da96e9 _public_6da96e9
#define public_6da970a _public_6da970a
#define public_6da971d _public_6da971d
#define public_6da976a _public_6da976a
#define public_6da9780 _public_6da9780
#define public_6da97c8 _public_6da97c8
#define public_6da97de _public_6da97de
#define public_6da981d _public_6da981d
#define public_6da9833 _public_6da9833
#define public_6da985b _public_6da985b
#define public_6da987e _public_6da987e
#define public_6da98b1 _public_6da98b1

PROC_DECLARE(0x6da95d0, internal_6da95d0, public_6da95d0);
extern "C" NAKED register_t __cdecl internal_6da95d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da961f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da961f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6da9637
        mov dword ptr ds : [esi+0xC], ebp
        public_6da9637 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da964a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da964a : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x24]
        add eax, 4
        push edx
        mov dword ptr ds : [ebx], eax
        call dword ptr ds : [public_6db3108]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6da9674
        mov dword ptr ds : [esi+0xC], ebp
        public_6da9674 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6da9687
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9687 : nop
        mov ecx, dword ptr ds : [ebx]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da96a4
        mov dword ptr ds : [esi+0xC], ebp
        public_6da96a4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da96b7
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da96b7 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da96d6
        mov dword ptr ds : [esi+0xC], ebp
        public_6da96d6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da96e9
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da96e9 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da970a
        mov dword ptr ds : [esi+0xC], ebp
        public_6da970a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da971d
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da971d : nop
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [edi+0x44]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6da985b
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da976a
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da976a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da9780
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9780 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x30]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6d8f4f0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da97c8
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da97c8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da97de
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da97de : nop
        mov edx, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [edi+0x54]
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi+0x50]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da981d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da981d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da9833
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9833 : nop
        mov eax, dword ptr ds : [edi+0x58]
        mov ecx, dword ptr ds : [edi+0x5C]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x60]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        public_6da985b : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da987e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da987e : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6da98b1
        mov dword ptr ds : [ecx+0x10], esi
        public_6da98b1 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6da95d0)
    }
}

#undef public_6da961f
#undef public_6da9637
#undef public_6da964a
#undef public_6da9674
#undef public_6da9687
#undef public_6da96a4
#undef public_6da96b7
#undef public_6da96d6
#undef public_6da96e9
#undef public_6da970a
#undef public_6da971d
#undef public_6da976a
#undef public_6da9780
#undef public_6da97c8
#undef public_6da97de
#undef public_6da981d
#undef public_6da9833
#undef public_6da985b
#undef public_6da987e
#undef public_6da98b1
