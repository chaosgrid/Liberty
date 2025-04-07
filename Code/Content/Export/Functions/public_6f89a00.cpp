#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1ca70);
CLANG_FORWARD_PROC_SYMBOL(public_6f718b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f89a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1045);

#define public_6f89ae6 _public_6f89ae6
#define public_6f89b5b _public_6f89b5b
#define public_6f89b5d _public_6f89b5d
#define public_6f89be5 _public_6f89be5
#define public_6f89be7 _public_6f89be7
#define public_6f89c6f _public_6f89c6f
#define public_6f89c71 _public_6f89c71

PROC_DECLARE(0x6f89a00, internal_6f89a00, public_6f89a00);
extern "C" NAKED register_t __cdecl internal_6f89a00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1045 @0x6f89a02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1045
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ds : [public_6fcf254]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call public_6f718b0
        xor ebx, ebx
        lea ecx, ds:[esi+0x64]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0x54], offset public_6fbca28
        call public_6f1ca70
        mov cl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+0x74], bl
        mov byte ptr ds : [esi+0x78], cl
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x88], edx
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x8C], eax
        mov eax, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x1C], 2
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], ebx
        mov dword ptr ds : [esi+0x98], ebx
        mov ecx, dword ptr ds : [public_6fbc2c8]
        lea ebp, ds:[esi+0x10]
        mov byte ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [esi+0x9C], ecx
        mov byte ptr ds : [esi+0xA0], bl
        mov byte ptr ds : [esi+0xA1], bl
        mov byte ptr ds : [esi+0xA2], bl
        mov byte ptr ds : [esi+0xA3], bl
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi], offset public_6fbc9b8
        mov dword ptr ss : [ebp], offset public_6fbc9a0
        mov dword ptr ds : [esi+0x54], offset public_6fbc99c
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f89ae6
        mov edx, dword ptr ds : [public_6fbc2dc]
        mov dword ptr ds : [public_6fce778], edx
        public_6f89ae6 : nop
        push 0x30
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x1C], 4
        je public_6f89b5b
        mov ecx, ebp
        call dword ptr ds : [public_6fb3130]
        mov ebp, eax
        mov eax, dword ptr ds : [public_6fcf254]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6fb3278]
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi], offset public_6fbc7a4
        mov dword ptr ds : [edi+0x10], offset public_6fbc7b4
        mov cl, byte ptr ss : [esp+0x24]
        lea ebp, ds:[edi+0x24]
        push ebx
        mov byte ptr ss : [ebp], cl
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 5
        call public_6f93790
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [edi+0x20], offset public_6fbc7cc
        mov dword ptr ds : [edi], offset public_6fbc7dc
        mov dword ptr ds : [edi+0x10], offset public_6fbc7ec
        jmp public_6f89b5d
        public_6f89b5b : nop
        xor edi, edi
        public_6f89b5d : nop
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [esi+0x58], edi
        call dword ptr ds : [public_6fb30ec]
        push 0x30
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x1C], 6
        je public_6f89be5
        lea ecx, ds:[esi+0x10]
        call dword ptr ds : [public_6fb3130]
        mov edx, dword ptr ds : [public_6fcf254]
        push edx
        mov ecx, edi
        mov ebp, eax
        call dword ptr ds : [public_6fb3278]
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi], offset public_6fbc7a4
        mov dword ptr ds : [edi+0x10], offset public_6fbc7b4
        mov al, byte ptr ss : [esp+0x24]
        lea ebp, ds:[edi+0x24]
        push ebx
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 7
        mov byte ptr ss : [ebp], al
        call public_6f93790
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [edi+0x20], offset public_6fbc7cc
        mov dword ptr ds : [edi], offset public_6fbc854
        mov dword ptr ds : [edi+0x10], offset public_6fbc864
        jmp public_6f89be7
        public_6f89be5 : nop
        xor edi, edi
        public_6f89be7 : nop
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [esi+0x5C], edi
        call dword ptr ds : [public_6fb30ec]
        push 0x30
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x1C], 8
        je public_6f89c6f
        lea ecx, ds:[esi+0x10]
        call dword ptr ds : [public_6fb3130]
        mov ecx, dword ptr ds : [public_6fcf254]
        push ecx
        mov ecx, edi
        mov ebp, eax
        call dword ptr ds : [public_6fb3278]
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi], offset public_6fbc7a4
        mov dword ptr ds : [edi+0x10], offset public_6fbc7b4
        mov dl, byte ptr ss : [esp+0x24]
        lea ebp, ds:[edi+0x24]
        push ebx
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 9
        mov byte ptr ss : [ebp], dl
        call public_6f93790
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [edi+0x20], offset public_6fbc7cc
        mov dword ptr ds : [edi], offset public_6fbc82c
        mov dword ptr ds : [edi+0x10], offset public_6fbc83c
        jmp public_6f89c71
        public_6f89c6f : nop
        xor edi, edi
        public_6f89c71 : nop
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [esi+0x60], edi
        call dword ptr ds : [public_6fb30ec]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f89a00)
    }
}

#undef public_6f89ae6
#undef public_6f89b5b
#undef public_6f89b5d
#undef public_6f89be5
#undef public_6f89be7
#undef public_6f89c6f
#undef public_6f89c71
