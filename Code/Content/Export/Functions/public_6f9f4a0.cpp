#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa03c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1de3);

#define public_6f9f57b _public_6f9f57b
#define public_6f9f57d _public_6f9f57d

PROC_DECLARE(0x6f9f4a0, internal_6f9f4a0, public_6f9f4a0);
extern "C" NAKED register_t __cdecl internal_6f9f4a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1de3 @0x6f9f4a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1de3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x24], ebp
        lea edi, ds:[esi+0x40]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_6fbd554
        mov eax, dword ptr ds : [edi+0xC4]
        mov ecx, dword ptr ds : [edi+0xC0]
        lea ebx, ds:[edi+0xBC]
        push eax
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x2C], 9
        call public_6fa0cb0
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi+0xAC]
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [ebx+0xC], ebp
        mov byte ptr ss : [esp+0x24], 8
        call public_6eec8d0
        lea ecx, ds:[edi+0x9C]
        mov byte ptr ss : [esp+0x24], 7
        call public_6eec8d0
        lea ebx, ds:[edi+0x60]
        mov dword ptr ds : [edi+0x90], offset public_6fbd3f0
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [ebx], offset public_6fbc700
        lea ecx, ds:[ebx+0x20]
        mov byte ptr ss : [esp+0x24], 0xA
        call public_6eec8d0
        lea ecx, ds:[ebx+4]
        mov byte ptr ss : [esp+0x24], 5
        call dword ptr ds : [public_6fb3034]
        lea ecx, ds:[edi+0x30]
        mov byte ptr ss : [esp+0x24], 4
        call public_6f85550
        lea eax, ds:[edi+0x18]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x24], 3
        je public_6f9f57b
        lea ecx, ds:[eax+4]
        jmp public_6f9f57d
        public_6f9f57b : nop
        xor ecx, ecx
        public_6f9f57d : nop
        call public_6f9f9e0
        lea ecx, ds:[edi+8]
        mov byte ptr ss : [esp+0x24], 2
        call public_6f9fbd0
        mov dword ptr ds : [esi+0x30], offset public_6fbd50c
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x34]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 1
        call public_6fa03c0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov ecx, dword ptr ds : [esi+0x20]
        push ecx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x28], ebp
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f9f4a0)
    }
}

#undef public_6f9f57b
#undef public_6f9f57d
