#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_587c8c _public_587c8c
#define public_587c9d _public_587c9d
#define public_587cb0 _public_587cb0
#define public_587ce7 _public_587ce7
#define public_587cf4 _public_587cf4
#define public_587d0a _public_587d0a
#define public_587d2a _public_587d2a
#define public_587d35 _public_587d35
#define public_587d4a _public_587d4a
#define public_587d5e _public_587d5e
#define public_587d7a _public_587d7a
#define public_587d97 _public_587d97
#define public_587d9b _public_587d9b

PROC_DECLARE(0x587c60, internal_587c60, public_587c60);
extern "C" NAKED register_t __cdecl internal_587c60()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0xC]
        add esi, 4
        mov ebx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], edi
        lea ebp, ds:[edi+4]
        jae public_587c8c
        mov ebx, eax
        public_587c8c : nop
        cmp ebp, esi
        jne public_587cf4
        mov esi, eax
        cmp dword ptr ss : [ebp+8], ebx
        jae public_587c9d
        call dword ptr ds : [public_5c7064]
        public_587c9d : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_587cb0
        mov esi, eax
        public_587cb0 : nop
        test esi, esi
        jbe public_587ce7
        mov edx, dword ptr ss : [ebp+4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587ce7
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_587ce7 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        jmp public_587d9b
        public_587cf4 : nop
        xor edx, edx
        cmp ebx, edx
        jbe public_587d5e
        cmp ebx, ecx
        jne public_587d5e
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_587d0a
        mov eax, dword ptr ds : [public_5c7078]
        public_587d0a : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_587d5e
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        je public_587d35
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_587d2a
        cmp cl, 0xFF
        je public_587d2a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_587d35
        public_587d2a : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor edx, edx
        public_587d35 : nop
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_587d4a
        mov eax, dword ptr ds : [public_5c7078]
        public_587d4a : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_587d9b
        public_587d5e : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587d97
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_587d7a
        mov esi, dword ptr ds : [public_5c7078]
        public_587d7a : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_587d97 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_587d9b : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x587c60)
    }
}

#undef public_587c8c
#undef public_587c9d
#undef public_587cb0
#undef public_587ce7
#undef public_587cf4
#undef public_587d0a
#undef public_587d2a
#undef public_587d35
#undef public_587d4a
#undef public_587d5e
#undef public_587d7a
#undef public_587d97
#undef public_587d9b
