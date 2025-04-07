#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da6469 _public_6da6469
#define public_6da6480 _public_6da6480
#define public_6da6493 _public_6da6493
#define public_6da64b8 _public_6da64b8
#define public_6da64cb _public_6da64cb
#define public_6da6509 _public_6da6509
#define public_6da651c _public_6da651c
#define public_6da653f _public_6da653f
#define public_6da6552 _public_6da6552
#define public_6da657e _public_6da657e
#define public_6da65b1 _public_6da65b1

PROC_DECLARE(0x6da6420, internal_6da6420, public_6da6420);
extern "C" NAKED register_t __cdecl internal_6da6420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6da6469
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da6469 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6da6480
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da6480 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da6493
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da6493 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6da64b8
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da64b8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da64cb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da64cb : nop
        mov edx, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x2C]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add edx, ecx
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ds : [ecx], edx
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6da6509
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da6509 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da651c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da651c : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6da653f
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da653f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da6552
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da6552 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        push ecx
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6da657e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da657e : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [ebx]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        mov esi, ebp
        jbe public_6da65b1
        mov dword ptr ds : [ecx+0x10], ebx
        public_6da65b1 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da6420)
    }
}

#undef public_6da6469
#undef public_6da6480
#undef public_6da6493
#undef public_6da64b8
#undef public_6da64cb
#undef public_6da6509
#undef public_6da651c
#undef public_6da653f
#undef public_6da6552
#undef public_6da657e
#undef public_6da65b1
