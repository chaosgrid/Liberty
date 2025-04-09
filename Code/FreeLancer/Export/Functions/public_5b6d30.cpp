#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6d30);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5a89);

#define public_5b6db8 _public_5b6db8
#define public_5b6dd2 _public_5b6dd2
#define public_5b6de7 _public_5b6de7
#define public_5b6e02 _public_5b6e02
#define public_5b6e16 _public_5b6e16
#define public_5b6e33 _public_5b6e33
#define public_5b6e4e _public_5b6e4e

PROC_DECLARE(0x5b6d30, internal_5b6d30, public_5b6d30);
extern "C" NAKED register_t __cdecl internal_5b6d30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5a89 @0x5b6d32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5a89
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        mov dword ptr ds : [ecx], edx
        mov al, byte ptr ds : [ebx]
        push esi
        push edi
        lea edi, ds:[ecx+4]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [edi], al
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edi
        call dword ptr ds : [public_5c7060]
        mov al, byte ptr ds : [ebx+0x10]
        add ebx, 0x10
        lea esi, ds:[edi+0x10]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ecx]
        mov eax, edx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x28], eax
        jae public_5b6db8
        mov eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        public_5b6db8 : nop
        cmp esi, ebx
        jne public_5b6dd2
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        push ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        jmp public_5b6e4e
        public_5b6dd2 : nop
        cmp eax, ebp
        jbe public_5b6e16
        cmp eax, edx
        jne public_5b6e16
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, ebp
        jne public_5b6de7
        mov ecx, dword ptr ds : [public_5c700c]
        public_5b6de7 : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_5b6e16
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_5b6e02
        mov eax, dword ptr ds : [public_5c700c]
        public_5b6e02 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_5b6e4e
        public_5b6e16 : nop
        push 1
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5b6e4e
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov eax, dword ptr ds : [public_5c700c]
        je public_5b6e33
        mov eax, ebx
        public_5b6e33 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push eax
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_5b6e4e : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x5b6d30)
    }
}

#undef public_5b6db8
#undef public_5b6dd2
#undef public_5b6de7
#undef public_5b6e02
#undef public_5b6e16
#undef public_5b6e33
#undef public_5b6e4e
