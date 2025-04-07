#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_456bd0);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba0a1);

#define public_456c31 _public_456c31
#define public_456c41 _public_456c41
#define public_456c54 _public_456c54
#define public_456c8a _public_456c8a
#define public_456ca5 _public_456ca5
#define public_456cb9 _public_456cb9
#define public_456cd5 _public_456cd5
#define public_456cff _public_456cff
#define public_456d1b _public_456d1b
#define public_456d38 _public_456d38

PROC_DECLARE(0x456bd0, internal_456bd0, public_456bd0);
extern "C" NAKED register_t __cdecl internal_456bd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba0a1 @0x456bd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba0a1
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
        je public_456d38
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp], eax
        mov cl, byte ptr ds : [esi+4]
        add esi, 4
        add ebp, 4
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov edx, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        mov ebx, ecx
        cmp eax, ebx
        jae public_456c31
        mov ebx, eax
        public_456c31 : nop
        cmp ebp, esi
        jne public_456ca5
        cmp ebx, edi
        mov esi, eax
        jbe public_456c41
        call dword ptr ds : [public_5c7064]
        public_456c41 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_456c54
        mov esi, eax
        public_456c54 : nop
        cmp esi, edi
        jbe public_456c8a
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
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
        je public_456c8a
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_456c8a : nop
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
        public_456ca5 : nop
        cmp ebx, edi
        jbe public_456cff
        cmp ebx, ecx
        jne public_456cff
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_456cb9
        mov eax, dword ptr ds : [public_5c7078]
        public_456cb9 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_456cff
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_456cd5
        mov eax, dword ptr ds : [public_5c7078]
        public_456cd5 : nop
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
        public_456cff : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_456d38
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_456d1b
        mov esi, dword ptr ds : [public_5c7078]
        public_456d1b : nop
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
        public_456d38 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x456bd0)
    }
}

#undef public_456c31
#undef public_456c41
#undef public_456c54
#undef public_456c8a
#undef public_456ca5
#undef public_456cb9
#undef public_456cd5
#undef public_456cff
#undef public_456d1b
#undef public_456d38
