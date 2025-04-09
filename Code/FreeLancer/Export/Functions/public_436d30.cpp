#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436d30);
CLANG_FORWARD_JUMP_SYMBOL(public_5b91a1);

#define public_436d85 _public_436d85
#define public_436d95 _public_436d95
#define public_436da8 _public_436da8
#define public_436dde _public_436dde
#define public_436df9 _public_436df9
#define public_436e0d _public_436e0d
#define public_436e29 _public_436e29
#define public_436e53 _public_436e53
#define public_436e6f _public_436e6f
#define public_436e8c _public_436e8c

PROC_DECLARE(0x436d30, internal_436d30, public_436d30);
extern "C" NAKED register_t __cdecl internal_436d30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b91a1 @0x436d32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b91a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_436e8c
        mov esi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov ecx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        jae public_436d85
        mov ebx, eax
        public_436d85 : nop
        cmp ebp, esi
        jne public_436df9
        cmp ebx, edi
        mov esi, eax
        jbe public_436d95
        call dword ptr ds : [public_5c7064]
        public_436d95 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_436da8
        mov esi, eax
        public_436da8 : nop
        cmp esi, edi
        jbe public_436dde
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
        push edi
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_436dde
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_436dde : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_436df9 : nop
        cmp ebx, edi
        jbe public_436e53
        cmp ebx, ecx
        jne public_436e53
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_436e0d
        mov eax, dword ptr ds : [public_5c7078]
        public_436e0d : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_436e53
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_436e29
        mov eax, dword ptr ds : [public_5c7078]
        public_436e29 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_436e53 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_436e8c
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_436e6f
        mov esi, dword ptr ds : [public_5c7078]
        public_436e6f : nop
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
        public_436e8c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x436d30)
    }
}

#undef public_436d85
#undef public_436d95
#undef public_436da8
#undef public_436dde
#undef public_436df9
#undef public_436e0d
#undef public_436e29
#undef public_436e53
#undef public_436e6f
#undef public_436e8c
