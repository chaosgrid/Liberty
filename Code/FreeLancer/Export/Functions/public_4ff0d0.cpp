#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_426de0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_4ff0d0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf70c);

#define public_4ff110 _public_4ff110
#define public_4ff126 _public_4ff126
#define public_4ff131 _public_4ff131
#define public_4ff149 _public_4ff149
#define public_4ff15a _public_4ff15a

PROC_DECLARE(0x4ff0d0, internal_4ff0d0, public_4ff0d0);
extern "C" NAKED register_t __cdecl internal_4ff0d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf70c @0x4ff0d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf70c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5da71c
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], 9
        jle public_4ff131
        lea edi, ds:[esi+0xC]
        mov edi, edi
        public_4ff110 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        je public_4ff126
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [edi], ebx
        public_4ff126 : nop
        mov eax, dword ptr ds : [esi+8]
        inc ebp
        add edi, 0x34
        cmp ebp, eax
        jl public_4ff110
        public_4ff131 : nop
        mov ecx, dword ptr ds : [esi+0x2A8]
        cmp ecx, ebx
        je public_4ff15a
        test byte ptr ds : [ecx+0xB4], 8
        je public_4ff149
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_4ff149 : nop
        mov ecx, dword ptr ds : [esi+0x2A8]
        call public_537ad0
        mov dword ptr ds : [esi+0x2A8], ebx
        public_4ff15a : nop
        lea edi, ds:[esi+0x208]
        mov dword ptr ss : [esp+0x14], edi
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x20], 0xA
        call public_4de730
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 8
        call public_4de730
        lea edi, ds:[esi+0x1E0]
        mov dword ptr ss : [esp+0x14], edi
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x20], 0xB
        call public_4de730
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 7
        call public_4de730
        lea edi, ds:[esi+0x1B8]
        mov dword ptr ss : [esp+0x14], edi
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x20], 0xC
        call public_4de730
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 6
        call public_4de730
        lea edi, ds:[esi+0x190]
        mov dword ptr ss : [esp+0x14], edi
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x20], 0xD
        call public_4de730
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 5
        call public_4de730
        lea ebp, ds:[esi+0x168]
        mov dword ptr ss : [esp+0x14], ebp
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        lea edi, ss:[ebp+0x10]
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xE
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x20], 4
        call public_4de730
        lea ebp, ds:[esi+0x140]
        mov dword ptr ss : [esp+0x14], ebp
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edi, ss:[ebp+0x10]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xF
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x20], 3
        call public_4de730
        lea ebp, ds:[esi+0x118]
        mov dword ptr ss : [esp+0x14], ebp
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x14]
        lea edi, ss:[ebp+0x10]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x10
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x20], 2
        call public_4de730
        lea ebp, ds:[esi+0xF0]
        mov dword ptr ss : [esp+0x14], ebp
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        lea edi, ss:[ebp+0x10]
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x11
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x20], 1
        call public_4de730
        lea ebp, ds:[esi+0xC8]
        mov dword ptr ss : [esp+0x14], ebp
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edi, ss:[ebp+0x10]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x12
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x20], bl
        call public_4de730
/*FIXUP push offset _public_426de0 @0x4ff32f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_426de0
        push 2
        push 0x34
        add esi, 0xC
        push esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_5b7ec6
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4ff0d0)
    }
}

#undef public_4ff110
#undef public_4ff126
#undef public_4ff131
#undef public_4ff149
#undef public_4ff15a
