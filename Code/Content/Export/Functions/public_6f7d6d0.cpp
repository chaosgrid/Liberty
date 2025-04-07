#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e590);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb05d2);

#define public_6f7d756 _public_6f7d756
#define public_6f7d76d _public_6f7d76d
#define public_6f7d7a6 _public_6f7d7a6
#define public_6f7d7c4 _public_6f7d7c4
#define public_6f7d7cc _public_6f7d7cc

PROC_DECLARE(0x6f7d6d0, internal_6f7d6d0, public_6f7d6d0);
extern "C" NAKED register_t __cdecl internal_6f7d6d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb05d2 @0x6f7d6d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb05d2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_6f7d7cc
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], edx
        mov al, byte ptr ds : [edi+0x18]
        push 0x1C
        mov byte ptr ds : [esi+0x18], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], ebx
        mov edx, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [edx]
        mov ebp, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x34], ecx
        je public_6f7d7c4
        public_6f7d756 : nop
        mov ebx, dword ptr ss : [ebp+4]
        push 0
        push 0x1C
        call public_6f7d7f0
        add esp, 8
        test ebx, ebx
        mov dword ptr ds : [eax], ebp
        jne public_6f7d76d
        mov ebx, eax
        public_6f7d76d : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push eax
        push 0x14
        mov dword ptr ss : [esp+0x20], eax
        call public_6f7d7e0
        add esp, 8
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov byte ptr ss : [esp+0x28], 1
        je public_6f7d7a6
        mov ecx, dword ptr ss : [esp+0x34]
        add ecx, 8
        push ecx
        mov ecx, eax
        call public_6f7e590
        public_6f7d7a6 : nop
        mov edx, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        inc edx
        mov dword ptr ds : [esi+0x20], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x34], eax
        jne public_6f7d756
        public_6f7d7c4 : nop
        mov eax, dword ptr ds : [edi+0x24]
        pop edi
        mov dword ptr ds : [esi+0x24], eax
        pop ebp
        public_6f7d7cc : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f7d6d0)
    }
}

#undef public_6f7d756
#undef public_6f7d76d
#undef public_6f7d7a6
#undef public_6f7d7c4
#undef public_6f7d7cc
