#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f0c3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad1f4);

#define public_6f0aaaf _public_6f0aaaf
#define public_6f0ab01 _public_6f0ab01
#define public_6f0ab03 _public_6f0ab03
#define public_6f0abb2 _public_6f0abb2
#define public_6f0abb4 _public_6f0abb4

PROC_DECLARE(0x6f0aa40, internal_6f0aa40, public_6f0aa40);
extern "C" NAKED register_t __cdecl internal_6f0aa40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad1f4 @0x6f0aa42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad1f4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_6fb43f8
        mov esi, 1
        mov dword ptr ds : [edi+4], esi
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+8], eax
        mov ecx, dword ptr ss : [ebp+8]
        xor ebx, ebx
        mov dword ptr ds : [edi+0xC], ecx
        mov byte ptr ds : [edi+0x10], bl
        mov dword ptr ds : [edi], offset public_6fb81d8
        mov edx, dword ptr ss : [ebp+0x54]
        lea eax, ds:[edi+0x1C]
        cmp eax, ebx
        mov dword ptr ds : [edi+0x14], edx
        mov edx, dword ptr ss : [ebp+0x58]
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ds:[edi+0x20]
        mov dword ptr ds : [edi+0x18], edx
        je public_6f0aaaf
        cmp ecx, ebx
        mov edx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [eax], edx
        je public_6f0aaaf
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ecx], eax
        public_6f0aaaf : nop
        push 0x1C
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [edi+0x24], 1
        mov byte ptr ds : [edi+0x25], 1
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi], offset public_6fb84d0
        call public_6fa912a
        add esp, 4
        cmp eax, ebx
        je public_6f0ab01
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], offset public_6fb839c
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], esi
        mov dword ptr ds : [eax], offset public_6fb854c
        jmp public_6f0ab03
        public_6f0ab01 : nop
        xor eax, eax
        public_6f0ab03 : nop
        push 0x64
        mov dword ptr ds : [edi+0x2C], eax
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x20], 1
        je public_6f0abb2
        mov ebp, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov al, byte ptr ss : [esp+0x28]
        lea ebp, ds:[esi+8]
        push ebx
        mov dword ptr ds : [esi], offset public_6fb839c
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [ebp], al
        call public_6f93790
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov cl, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x14], ebx
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x30], cl
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x40], dl
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 4
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x5C], 0xBF800000
        mov byte ptr ds : [esi+0x60], 1
        mov byte ptr ds : [esi+0x61], 1
        mov dword ptr ds : [esi], offset public_6fb8520
        call public_6f0c3f0
        jmp public_6f0abb4
        public_6f0abb2 : nop
        xor esi, esi
        public_6f0abb4 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov byte ptr ss : [esp+0x24], bl
        mov dword ptr ds : [edi+0x30], esi
        call public_6f60d60
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6f0aa40)
    }
}

#undef public_6f0aaaf
#undef public_6f0ab01
#undef public_6f0ab03
#undef public_6f0abb2
#undef public_6f0abb4
