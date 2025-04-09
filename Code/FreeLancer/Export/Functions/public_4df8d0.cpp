#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4df8d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5be671);

#define public_4df925 _public_4df925
#define public_4df933 _public_4df933
#define public_4df946 _public_4df946
#define public_4df97d _public_4df97d
#define public_4df98a _public_4df98a
#define public_4df99e _public_4df99e
#define public_4df9ba _public_4df9ba
#define public_4df9ce _public_4df9ce
#define public_4df9ec _public_4df9ec
#define public_4dfa0d _public_4dfa0d
#define public_4dfa16 _public_4dfa16

PROC_DECLARE(0x4df8d0, internal_4df8d0, public_4df8d0);
extern "C" NAKED register_t __cdecl internal_4df8d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be671 @0x4df8d2*/
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
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_4dfa16
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        jae public_4df925
        mov ebx, esi
        public_4df925 : nop
        cmp ebp, edi
        jne public_4df98a
        cmp ebx, ecx
        jbe public_4df933
        call dword ptr ds : [public_5c7064]
        public_4df933 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_4df946
        mov esi, eax
        public_4df946 : nop
        test esi, esi
        jbe public_4df97d
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
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4df97d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_4df97d : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        jmp public_4dfa0d
        public_4df98a : nop
        cmp ebx, ecx
        jbe public_4df9ce
        cmp ebx, eax
        jne public_4df9ce
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_4df99e
        mov eax, dword ptr ds : [public_5c7078]
        public_4df99e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4df9ce
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_4df9ba
        mov eax, dword ptr ds : [public_5c7078]
        public_4df9ba : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_4dfa0d
        public_4df9ce : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4dfa0d
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_5c7078]
        je public_4df9ec
        mov esi, edi
        public_4df9ec : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_4dfa0d : nop
        mov edx, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_4dfa16 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4df8d0)
    }
}

#undef public_4df925
#undef public_4df933
#undef public_4df946
#undef public_4df97d
#undef public_4df98a
#undef public_4df99e
#undef public_4df9ba
#undef public_4df9ce
#undef public_4df9ec
#undef public_4dfa0d
#undef public_4dfa16
