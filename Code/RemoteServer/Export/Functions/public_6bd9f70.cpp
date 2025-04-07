#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9f70);
CLANG_FORWARD_PROC_SYMBOL(public_6bda0c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a40a);

#define public_6bd9ff0 _public_6bd9ff0
#define public_6bda01b _public_6bda01b
#define public_6bda02f _public_6bda02f
#define public_6bda04a _public_6bda04a
#define public_6bda074 _public_6bda074
#define public_6bda090 _public_6bda090
#define public_6bda0a7 _public_6bda0a7

PROC_DECLARE(0x6bd9f70, internal_6bd9f70, public_6bd9f70);
extern "C" NAKED register_t __cdecl internal_6bd9f70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a40a @0x6bd9f72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a40a
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
        je public_6bda0a7
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_6c0b1b8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6c0b1bc]
        mov al, byte ptr ds : [edi+0x10]
        add edi, 0x10
        add esi, 0x10
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_6c0b1b8]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, ecx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], 1
        jae public_6bd9ff0
        mov ebx, eax
        public_6bd9ff0 : nop
        cmp esi, edi
        jne public_6bda01b
        push eax
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6c0b15c]
        push ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6c0b15c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6bda01b : nop
        cmp ebx, ebp
        jbe public_6bda074
        cmp ebx, ecx
        jne public_6bda074
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_6bda02f
        mov eax, dword ptr ds : [public_6c0b17c]
        public_6bda02f : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6bda074
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        jne public_6bda04a
        mov eax, dword ptr ds : [public_6c0b17c]
        public_6bda04a : nop
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
        public_6bda074 : nop
        push 1
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6c0b178]
        test al, al
        je public_6bda0a7
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_6bda090
        mov edi, dword ptr ds : [public_6c0b17c]
        public_6bda090 : nop
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push edx
        call public_6bda0c0
        add esp, 0xC
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6c0b1a8]
        public_6bda0a7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6bd9f70)
    }
}

#undef public_6bd9ff0
#undef public_6bda01b
#undef public_6bda02f
#undef public_6bda04a
#undef public_6bda074
#undef public_6bda090
#undef public_6bda0a7
