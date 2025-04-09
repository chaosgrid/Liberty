#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_489620);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc25d);

#define public_4896a9 _public_4896a9
#define public_4896d4 _public_4896d4
#define public_4896e8 _public_4896e8
#define public_489703 _public_489703
#define public_48972d _public_48972d
#define public_489749 _public_489749
#define public_489760 _public_489760

PROC_DECLARE(0x489620, internal_489620, public_489620);
extern "C" NAKED register_t __cdecl internal_489620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc25d @0x489622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc25d
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
        je public_489760
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov dl, byte ptr ds : [edi+4]
        lea eax, ds:[edi+4]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+0xC], ebp
        mov edx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebp
        push eax
        call dword ptr ds : [public_5c7060]
        mov al, byte ptr ds : [edi+0x14]
        add edi, 0x14
        add esi, 0x14
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
        jae public_4896a9
        mov ebx, eax
        public_4896a9 : nop
        cmp esi, edi
        jne public_4896d4
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
        public_4896d4 : nop
        cmp ebx, ebp
        jbe public_48972d
        cmp ebx, ecx
        jne public_48972d
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_4896e8
        mov eax, dword ptr ds : [public_5c700c]
        public_4896e8 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_48972d
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_489703
        mov eax, dword ptr ds : [public_5c700c]
        public_489703 : nop
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
        public_48972d : nop
        push 1
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_489760
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_489749
        mov edi, dword ptr ds : [public_5c700c]
        public_489749 : nop
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_489760 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x489620)
    }
}

#undef public_4896a9
#undef public_4896d4
#undef public_4896e8
#undef public_489703
#undef public_48972d
#undef public_489749
#undef public_489760
