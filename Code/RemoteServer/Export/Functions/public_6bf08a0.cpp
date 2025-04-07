#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf08ef _public_6bf08ef
#define public_6bf0907 _public_6bf0907
#define public_6bf091a _public_6bf091a
#define public_6bf0939 _public_6bf0939
#define public_6bf094c _public_6bf094c
#define public_6bf096b _public_6bf096b
#define public_6bf097e _public_6bf097e
#define public_6bf09bd _public_6bf09bd
#define public_6bf09d3 _public_6bf09d3
#define public_6bf0a27 _public_6bf0a27
#define public_6bf0a58 _public_6bf0a58

PROC_DECLARE(0x6bf08a0, internal_6bf08a0, public_6bf08a0);
extern "C" NAKED register_t __cdecl internal_6bf08a0()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf08ef
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf08ef : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x16
        jbe public_6bf0907
        mov dword ptr ds : [esi+0xC], ecx
        public_6bf0907 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf091a
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf091a : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf0939
        mov dword ptr ds : [esi+0xC], ecx
        public_6bf0939 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf094c
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf094c : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf096b
        mov dword ptr ds : [esi+0xC], ecx
        public_6bf096b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf097e
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf097e : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf09bd
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf09bd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf09d3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf09d3 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x34]
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
        call public_6bda220
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add ebp, 0x10
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf0a27
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf0a27 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6bf0a58
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf0a58 : nop
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
        UNREACHABLE_TRAP(0x6bf08a0)
    }
}

#undef public_6bf08ef
#undef public_6bf0907
#undef public_6bf091a
#undef public_6bf0939
#undef public_6bf094c
#undef public_6bf096b
#undef public_6bf097e
#undef public_6bf09bd
#undef public_6bf09d3
#undef public_6bf0a27
#undef public_6bf0a58
