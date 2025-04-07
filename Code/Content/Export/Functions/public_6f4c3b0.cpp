#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ca50);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f480e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d710);
CLANG_FORWARD_PROC_SYMBOL(public_6f4daa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf0e1);

#define public_6f4c47d _public_6f4c47d
#define public_6f4c481 _public_6f4c481
#define public_6f4c4e0 _public_6f4c4e0
#define public_6f4c501 _public_6f4c501
#define public_6f4c504 _public_6f4c504
#define public_6f4c520 _public_6f4c520
#define public_6f4c526 _public_6f4c526
#define public_6f4c530 _public_6f4c530
#define public_6f4c553 _public_6f4c553
#define public_6f4c559 _public_6f4c559
#define public_6f4c55f _public_6f4c55f
#define public_6f4c562 _public_6f4c562
#define public_6f4c59b _public_6f4c59b
#define public_6f4c5aa _public_6f4c5aa
#define public_6f4c5b3 _public_6f4c5b3
#define public_6f4c5df _public_6f4c5df
#define public_6f4c5ea _public_6f4c5ea
#define public_6f4c5f0 _public_6f4c5f0

PROC_DECLARE(0x6f4c3b0, internal_6f4c3b0, public_6f4c3b0);
extern "C" NAKED register_t __cdecl internal_6f4c3b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf0e1 @0x6f4c3b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf0e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+0x210]
        lea esi, ds:[ebx+0x20C]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ebx
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f4d710
        mov ecx, dword ptr ds : [ebx+0x200]
        mov eax, dword ptr ds : [ebx+0x204]
        lea ebp, ds:[ebx+0x1FC]
        push ecx
        push eax
        push eax
        call public_6f6a640
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        push eax
        push esi
        mov ecx, ebp
        call public_6ea1490
        mov dword ptr ss : [ebp+8], esi
        mov esi, dword ptr ss : [esp+0x6C]
        push esi
        mov ecx, ebx
        call public_6f1ca50
        xor eax, eax
        cmp esi, eax
        je public_6f4c5ea
        mov cl, byte ptr ss : [esp+0x6C]
        mov byte ptr ss : [esp+0x3C], cl
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], eax
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x68], eax
        call public_6f481c0
        mov edi, dword ptr ss : [esp+0x40]
        cmp edi, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x14], edi
        je public_6f4c5df
        lea esi, ds:[ebx+0x224]
        jmp public_6f4c481
        public_6f4c47d : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6f4c481 : nop
        push edi
        call public_6f49b00
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x28], eax
        push edx
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        lea ecx, ds:[ebx+0x20C]
        call public_6f003e0
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x4C]
        push edx
        call public_6f480e0
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        mov byte ptr ss : [esp+0x64], 1
        je public_6f4c501
        lea ebx, ds:[ebx]
        public_6f4c4e0 : nop
        lea eax, ss:[esp+0x4C]
        push eax
        push edi
        call dword ptr ds : [public_6fb32c4]
        add esp, 8
        test al, al
        jne public_6f4c553
        mov eax, dword ptr ds : [esi+8]
        add edi, 0x10
        cmp edi, eax
        jne public_6f4c4e0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f4c501 : nop
        mov edi, dword ptr ds : [esi+8]
        public_6f4c504 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        jne public_6f4c5b3
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f4c520
        sub eax, ecx
        sar eax, 4
        cmp eax, 8
        jae public_6f4c526
        public_6f4c520 : nop
        inc dword ptr ds : [ebx+0x220]
        public_6f4c526 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4c55f
        mov edi, edi
        public_6f4c530 : nop
        lea ecx, ss:[esp+0x4C]
        push ecx
        push edi
        call dword ptr ds : [public_6fb32c4]
        add esp, 8
        test al, al
        jne public_6f4c559
        mov eax, dword ptr ds : [esi+8]
        add edi, 0x10
        cmp edi, eax
        jne public_6f4c530
        mov ebx, dword ptr ss : [esp+0x10]
        jmp public_6f4c55f
        public_6f4c553 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        jmp public_6f4c504
        public_6f4c559 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        jmp public_6f4c562
        public_6f4c55f : nop
        mov edi, dword ptr ds : [esi+8]
        public_6f4c562 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], edi
        jne public_6f4c59b
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        mov ecx, esi
        call public_6f4e220
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x70], 1
        call public_6f4daa0
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        push edx
        jmp public_6f4c5aa
        public_6f4c59b : nop
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x70], 0
        push ecx
        public_6f4c5aa : nop
        lea ecx, ss:[esp+0x34]
        call public_6fa6e80
        public_6f4c5b3 : nop
        push 1
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x68], 0
        call dword ptr ds : [public_6fb32c8]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x44]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f4c47d
        mov edi, dword ptr ss : [esp+0x40]
        public_6f4c5df : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        jmp public_6f4c5f0
        public_6f4c5ea : nop
        mov dword ptr ds : [ebx+0xC], eax
        mov dword ptr ds : [ebx+8], eax
        public_6f4c5f0 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x6f4c3b0)
    }
}

#undef public_6f4c47d
#undef public_6f4c481
#undef public_6f4c4e0
#undef public_6f4c501
#undef public_6f4c504
#undef public_6f4c520
#undef public_6f4c526
#undef public_6f4c530
#undef public_6f4c553
#undef public_6f4c559
#undef public_6f4c55f
#undef public_6f4c562
#undef public_6f4c59b
#undef public_6f4c5aa
#undef public_6f4c5b3
#undef public_6f4c5df
#undef public_6f4c5ea
#undef public_6f4c5f0
