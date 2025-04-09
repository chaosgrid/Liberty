#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431a80);

#define public_43144b _public_43144b
#define public_431477 _public_431477
#define public_43148c _public_43148c
#define public_431498 _public_431498
#define public_4314a2 _public_4314a2
#define public_4314ab _public_4314ab
#define public_4314cc _public_4314cc

PROC_DECLARE(0x431410, internal_431410, public_431410);
extern "C" NAKED register_t __cdecl internal_431410()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x34]
        push ebx
        push ebp
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        jne public_4314cc
        lea eax, ss:[esp+0x14]
        push eax
        add ecx, 0x3C
        call public_431a80
        mov edi, dword ptr ss : [esp+0x18]
        or ecx, 0xFFFFFFFF
        mov ebp, eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_43144b
        call dword ptr ds : [public_5c7070]
        public_43144b : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_431477
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_431477
        cmp cl, 0xFF
        je public_431477
        cmp ebx, esi
        jne public_4314a2
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop edi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_431477 : nop
        cmp ebx, esi
        jne public_43148c
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_43148c : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_431498
        cmp eax, ebx
        jae public_4314ab
        public_431498 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        public_4314a2 : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_5c7074]
        public_4314ab : nop
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_4314cc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x431410)
    }
}

#undef public_43144b
#undef public_431477
#undef public_43148c
#undef public_431498
#undef public_4314a2
#undef public_4314ab
#undef public_4314cc
