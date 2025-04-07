#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5951a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4ac1);

#define public_5951f5 _public_5951f5
#define public_595203 _public_595203
#define public_595216 _public_595216
#define public_59524d _public_59524d
#define public_59525a _public_59525a
#define public_59526e _public_59526e
#define public_59528a _public_59528a
#define public_59529e _public_59529e
#define public_5952bc _public_5952bc
#define public_5952dd _public_5952dd
#define public_5952e6 _public_5952e6

PROC_DECLARE(0x5951a0, internal_5951a0, public_5951a0);
extern "C" NAKED register_t __cdecl internal_5951a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4ac1 @0x5951a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4ac1
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
        je public_5952e6
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
        jae public_5951f5
        mov ebx, esi
        public_5951f5 : nop
        cmp ebp, edi
        jne public_59525a
        cmp ebx, ecx
        jbe public_595203
        call dword ptr ds : [public_5c7064]
        public_595203 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_595216
        mov esi, eax
        public_595216 : nop
        test esi, esi
        jbe public_59524d
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
        je public_59524d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_59524d : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        jmp public_5952dd
        public_59525a : nop
        cmp ebx, ecx
        jbe public_59529e
        cmp ebx, eax
        jne public_59529e
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_59526e
        mov eax, dword ptr ds : [public_5c7078]
        public_59526e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_59529e
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_59528a
        mov eax, dword ptr ds : [public_5c7078]
        public_59528a : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_5952dd
        public_59529e : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5952dd
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_5c7078]
        je public_5952bc
        mov esi, edi
        public_5952bc : nop
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
        public_5952dd : nop
        mov edx, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_5952e6 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5951a0)
    }
}

#undef public_5951f5
#undef public_595203
#undef public_595216
#undef public_59524d
#undef public_59525a
#undef public_59526e
#undef public_59528a
#undef public_59529e
#undef public_5952bc
#undef public_5952dd
#undef public_5952e6
