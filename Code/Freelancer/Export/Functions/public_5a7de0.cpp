#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_4899c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7de0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5301);

#define public_5a7e3f _public_5a7e3f
#define public_5a7e4f _public_5a7e4f
#define public_5a7e62 _public_5a7e62
#define public_5a7e9b _public_5a7e9b
#define public_5a7eb6 _public_5a7eb6
#define public_5a7eca _public_5a7eca
#define public_5a7ee6 _public_5a7ee6
#define public_5a7f10 _public_5a7f10
#define public_5a7f2c _public_5a7f2c
#define public_5a7f46 _public_5a7f46

PROC_DECLARE(0x5a7de0, internal_5a7de0, public_5a7de0);
extern "C" NAKED register_t __cdecl internal_5a7de0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5301 @0x5a7de2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5301
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
        je public_5a7f46
        mov ebx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ds : [ebx+4]
        add ebx, 4
        add esi, 4
        mov byte ptr ds : [esi], cl
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov edx, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx]
        mov edi, ecx
        cmp eax, edi
        jae public_5a7e3f
        mov edi, eax
        public_5a7e3f : nop
        cmp esi, ebx
        jne public_5a7eb6
        cmp edi, ebp
        mov ebx, eax
        jbe public_5a7e4f
        call dword ptr ds : [public_5c7064]
        public_5a7e4f : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_5a7e62
        mov ebx, eax
        public_5a7e62 : nop
        cmp ebx, ebp
        jbe public_5a7e9b
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea eax, ds:[ebx+edi]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+edi*2]
        push eax
        call public_4899c0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push ebp
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5a7e9b
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_5a7e9b : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_5a7eb6 : nop
        cmp edi, ebp
        jbe public_5a7f10
        cmp edi, ecx
        jne public_5a7f10
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_5a7eca
        mov eax, dword ptr ds : [public_5c700c]
        public_5a7eca : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_5a7f10
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_5a7ee6
        mov eax, dword ptr ds : [public_5c700c]
        public_5a7ee6 : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        pop edi
        mov dword ptr ds : [esi+0xC], edx
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
        public_5a7f10 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5a7f46
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_5a7f2c
        mov ebx, dword ptr ds : [public_5c700c]
        public_5a7f2c : nop
        mov eax, dword ptr ds : [esi+4]
        push edi
        push ebx
        push eax
        call public_41d8a0
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        add esp, 0xC
        mov word ptr ds : [ecx+edi*2], 0
        public_5a7f46 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5a7de0)
    }
}

#undef public_5a7e3f
#undef public_5a7e4f
#undef public_5a7e62
#undef public_5a7e9b
#undef public_5a7eb6
#undef public_5a7eca
#undef public_5a7ee6
#undef public_5a7f10
#undef public_5a7f2c
#undef public_5a7f46
