#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eedfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31040);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f56f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a320);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ec90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0608);

#define public_6f7ecd0 _public_6f7ecd0
#define public_6f7ece0 _public_6f7ece0
#define public_6f7ecf8 _public_6f7ecf8
#define public_6f7ed14 _public_6f7ed14
#define public_6f7ed1f _public_6f7ed1f
#define public_6f7ed35 _public_6f7ed35
#define public_6f7ed45 _public_6f7ed45
#define public_6f7ed66 _public_6f7ed66
#define public_6f7ed7e _public_6f7ed7e
#define public_6f7edbf _public_6f7edbf
#define public_6f7edc7 _public_6f7edc7
#define public_6f7ee22 _public_6f7ee22

PROC_DECLARE(0x6f7ec90, internal_6f7ec90, public_6f7ec90);
extern "C" NAKED register_t __cdecl internal_6f7ec90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0608 @0x6f7ec98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0608
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push edi
        push ecx
        push eax
        push eax
        call public_6f7d0f0
        mov ebp, dword ptr ds : [esi+8]
        mov ebx, eax
        add esp, 0xC
        cmp ebx, ebp
        mov edi, ebx
        je public_6f7ece0
        lea ebx, ds:[ebx]
        public_6f7ecd0 : nop
        push 0
        mov ecx, edi
        call public_6f56f30
        add edi, 0x18
        cmp edi, ebp
        jne public_6f7ecd0
        public_6f7ece0 : nop
        mov dword ptr ds : [esi+8], ebx
        mov ebx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ebx+4]
        xor ebp, ebp
        cmp eax, ebp
        jne public_6f7ecf8
        xor edi, edi
        mov dword ptr ss : [esp+0x10], edi
        jmp public_6f7ed14
        public_6f7ecf8 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov edi, edx
        public_6f7ed14 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        jne public_6f7ed1f
        xor edx, edx
        jmp public_6f7ed35
        public_6f7ed1f : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7ed35 : nop
        cmp edx, edi
        jae public_6f7edbf
        cmp edi, ebp
        mov eax, edi
        jge public_6f7ed45
        xor eax, eax
        public_6f7ed45 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        mov edi, dword ptr ds : [esi+4]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebp, ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f7ed7e
        public_6f7ed66 : nop
        push edi
        push ebp
        call public_6f31040
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 0x18
        add esp, 8
        add ebp, 0x18
        cmp edi, eax
        jne public_6f7ed66
        public_6f7ed7e : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6f7a320
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[ebx+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eedfe0
        lea ecx, ds:[eax+eax*2]
        lea edx, ds:[ebx+ecx*8]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [esi+8], edx
        xor ebp, ebp
        public_6f7edbf : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_6f7ee22
        public_6f7edc7 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[edi+4]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f55880
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], ebp
        call public_6f7b1d0
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add edi, 0x18
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        jne public_6f7edc7
        public_6f7ee22 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x6f7ec90)
    }
}

#undef public_6f7ecd0
#undef public_6f7ece0
#undef public_6f7ecf8
#undef public_6f7ed14
#undef public_6f7ed1f
#undef public_6f7ed35
#undef public_6f7ed45
#undef public_6f7ed66
#undef public_6f7ed7e
#undef public_6f7edbf
#undef public_6f7edc7
#undef public_6f7ee22
