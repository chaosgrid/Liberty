#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdf50);
CLANG_FORWARD_PROC_SYMBOL(public_6d065f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06740);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61151);

#define public_6d0683f _public_6d0683f
#define public_6d0685c _public_6d0685c
#define public_6d06883 _public_6d06883
#define public_6d0688e _public_6d0688e
#define public_6d068a0 _public_6d068a0
#define public_6d068ac _public_6d068ac
#define public_6d068c1 _public_6d068c1
#define public_6d068c9 _public_6d068c9

PROC_DECLARE(0x6d06740, internal_6d06740, public_6d06740);
extern "C" NAKED register_t __cdecl internal_6d06740()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61151 @0x6d06742*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61151
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0xC], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6d068c9
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        mov dl, byte ptr ds : [edi+0x14]
        lea esi, ds:[eax+0x14]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ds : [edi+0x15]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ds : [edi+0x20]
        push 0x18
        mov byte ptr ds : [esi+0xC], cl
        call public_6d60012
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x15], 0
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebp
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x18
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ds : [edi+0x18]
        mov ebp, dword ptr ds : [ecx+4]
        mov cl, byte ptr ss : [ebp+0x15]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x28], edx
        jne public_6d0685c
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_6cfdf50
        mov ebx, eax
        lea edx, ss:[ebp+0xC]
        push edx
        lea eax, ds:[ebx+0xC]
        push eax
        call public_6d5c880
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ecx
        jne public_6d0683f
        mov dword ptr ss : [esp+0x28], ebx
        public_6d0683f : nop
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push ecx
        mov ecx, esi
        call public_6d065f0
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push edx
        mov ecx, esi
        call public_6d065f0
        mov dword ptr ds : [ebx+8], eax
        public_6d0685c : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        je public_6d068c1
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6d0688e
        public_6d06883 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d06883
        public_6d0688e : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6d068ac
        public_6d068a0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6d068a0
        public_6d068ac : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6d068c1 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6d068c9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d06740)
    }
}

#undef public_6d0683f
#undef public_6d0685c
#undef public_6d06883
#undef public_6d0688e
#undef public_6d068a0
#undef public_6d068ac
#undef public_6d068c1
#undef public_6d068c9
