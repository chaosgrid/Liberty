#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5140);
CLANG_FORWARD_PROC_SYMBOL(public_4b6790);
CLANG_FORWARD_PROC_SYMBOL(public_4bd770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd53f);

#define public_4be52e _public_4be52e
#define public_4be530 _public_4be530
#define public_4be574 _public_4be574

PROC_DECLARE(0x4be420, internal_4be420, public_4be420);
extern "C" NAKED register_t __cdecl internal_4be420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd53f @0x4be422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd53f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push 0x170
        mov dword ptr ss : [esp+0xC], ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_4be52e
        push ebp
        push edi
        mov ecx, esi
        call public_4b6790
        lea ecx, ds:[esi+0x7C]
        mov byte ptr ss : [esp+0x24], 1
        call public_4144b0
        mov byte ptr ds : [esi+0xCF], bl
        mov byte ptr ds : [esi+0xCE], bl
        mov byte ptr ds : [esi+0xCD], bl
        mov byte ptr ds : [esi+0xCC], bl
        lea ecx, ds:[esi+0xD4]
        mov byte ptr ds : [esi+0xD3], bl
        mov byte ptr ds : [esi+0xD2], bl
        mov byte ptr ds : [esi+0xD1], bl
        mov byte ptr ds : [esi+0xD0], bl
        call public_4b5140
        lea ecx, ds:[esi+0xD8]
        call public_4b5140
        lea ecx, ds:[esi+0xDC]
        call public_4b5140
        mov dword ptr ds : [esi], offset public_5d54cc
        lea edi, ds:[esi+0xF4]
        lea ebp, ds:[edi+8]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [ebp], ebx
        mov dword ptr ss : [ebp+4], ebx
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x24], 3
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x44], ebx
        call public_413df0
        mov byte ptr ds : [edi+0x60], bl
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 5
        mov dword ptr ds : [esi], offset public_5d5f7c
        call public_4bd770
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x6C], al
        mov dword ptr ds : [public_67244c], esi
        pop ebp
        jmp public_4be530
        public_4be52e : nop
        xor esi, esi
        public_4be530 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        add eax, 0xC
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_4be574
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        public_4be574 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4be420)
    }
}

#undef public_4be52e
#undef public_4be530
#undef public_4be574
