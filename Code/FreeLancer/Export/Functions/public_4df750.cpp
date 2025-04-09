#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4df750);
CLANG_FORWARD_JUMP_SYMBOL(public_5be671);

#define public_4df7c3 _public_4df7c3
#define public_4df7d3 _public_4df7d3
#define public_4df7e6 _public_4df7e6
#define public_4df81d _public_4df81d
#define public_4df82a _public_4df82a
#define public_4df83e _public_4df83e
#define public_4df85a _public_4df85a
#define public_4df86e _public_4df86e
#define public_4df88a _public_4df88a
#define public_4df8a6 _public_4df8a6
#define public_4df8aa _public_4df8aa
#define public_4df8b7 _public_4df8b7

PROC_DECLARE(0x4df750, internal_4df750, public_4df750);
extern "C" NAKED register_t __cdecl internal_4df750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be671 @0x4df752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be671
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        xor edx, edx
        cmp edi, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_4df8b7
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ax, word ptr ds : [esi]
        mov word ptr ds : [edi], ax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov cl, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+0xC], cl
        mov al, byte ptr ds : [esi+0x10]
        add esi, 0x10
        lea ebx, ds:[edi+0x10]
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edx
        mov ecx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, ecx
        cmp eax, ebp
        jae public_4df7c3
        mov ebp, eax
        public_4df7c3 : nop
        cmp ebx, esi
        jne public_4df82a
        cmp ebp, edx
        mov esi, eax
        jbe public_4df7d3
        call dword ptr ds : [public_5c7064]
        public_4df7d3 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_4df7e6
        mov esi, eax
        public_4df7e6 : nop
        test esi, esi
        jbe public_4df81d
        mov edx, dword ptr ds : [ebx+4]
        sub eax, esi
        add ebp, edx
        push eax
        lea eax, ds:[esi+ebp]
        push eax
        push ebp
        call dword ptr ds : [public_5c709c]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4df81d
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_4df81d : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        jmp public_4df8aa
        public_4df82a : nop
        cmp ebp, edx
        jbe public_4df86e
        cmp ebp, ecx
        jne public_4df86e
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_4df83e
        mov eax, dword ptr ds : [public_5c7078]
        public_4df83e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4df86e
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4df85a
        mov eax, dword ptr ds : [public_5c7078]
        public_4df85a : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_4df8aa
        public_4df86e : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4df8a6
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_4df88a
        mov esi, dword ptr ds : [public_5c7078]
        public_4df88a : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_4df8a6 : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_4df8aa : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx+0x20]
        pop esi
        pop ebp
        mov dword ptr ds : [edi+0x20], edx
        pop ebx
        public_4df8b7 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4df750)
    }
}

#undef public_4df7c3
#undef public_4df7d3
#undef public_4df7e6
#undef public_4df81d
#undef public_4df82a
#undef public_4df83e
#undef public_4df85a
#undef public_4df86e
#undef public_4df88a
#undef public_4df8a6
#undef public_4df8aa
#undef public_4df8b7
