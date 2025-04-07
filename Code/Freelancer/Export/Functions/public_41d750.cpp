#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d750);
CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8a6a);

#define public_41d7d0 _public_41d7d0
#define public_41d7fb _public_41d7fb
#define public_41d80f _public_41d80f
#define public_41d82a _public_41d82a
#define public_41d854 _public_41d854
#define public_41d870 _public_41d870
#define public_41d887 _public_41d887

PROC_DECLARE(0x41d750, internal_41d750, public_41d750);
extern "C" NAKED register_t __cdecl internal_41d750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8a6a @0x41d752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8a6a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_41d887
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7060]
        mov al, byte ptr ds : [edi+0x10]
        add edi, 0x10
        add esi, 0x10
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, ecx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], 1
        jae public_41d7d0
        mov ebx, eax
        public_41d7d0 : nop
        cmp esi, edi
        jne public_41d7fb
        push eax
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        push ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_41d7fb : nop
        cmp ebx, ebp
        jbe public_41d854
        cmp ebx, ecx
        jne public_41d854
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_41d80f
        mov eax, dword ptr ds : [public_5c700c]
        public_41d80f : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_41d854
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_41d82a
        mov eax, dword ptr ds : [public_5c700c]
        public_41d82a : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_41d854 : nop
        push 1
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_41d887
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_41d870
        mov edi, dword ptr ds : [public_5c700c]
        public_41d870 : nop
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_41d887 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x41d750)
    }
}

#undef public_41d7d0
#undef public_41d7fb
#undef public_41d80f
#undef public_41d82a
#undef public_41d854
#undef public_41d870
#undef public_41d887
