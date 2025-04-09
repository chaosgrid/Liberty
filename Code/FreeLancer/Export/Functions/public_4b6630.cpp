#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4963a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4f10);
CLANG_FORWARD_PROC_SYMBOL(public_4b5140);
CLANG_FORWARD_PROC_SYMBOL(public_4b6790);
CLANG_FORWARD_PROC_SYMBOL(public_4b6800);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd23d);

#define public_4b6730 _public_4b6730
#define public_4b6732 _public_4b6732
#define public_4b6773 _public_4b6773

PROC_DECLARE(0x4b6630, internal_4b6630, public_4b6630);
extern "C" NAKED register_t __cdecl internal_4b6630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd23d @0x4b6632*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd23d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push 0x18C
        mov ebp, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_4b6730
        push edi
        mov ecx, esi
        call public_4b6790
        lea ecx, ds:[esi+0x7C]
        mov byte ptr ss : [esp+0x24], 1
        call public_4144b0
        lea ecx, ds:[esi+0xD0]
        mov byte ptr ds : [esi+0xCF], bl
        mov byte ptr ds : [esi+0xCE], bl
        mov byte ptr ds : [esi+0xCD], bl
        mov byte ptr ds : [esi+0xCC], bl
        call public_4b5140
        lea ecx, ds:[esi+0xD4]
        call public_4b5140
        lea ecx, ds:[esi+0xD8]
        call public_4b5140
        lea ecx, ds:[esi+0xDC]
        call public_4b5140
        mov dword ptr ds : [esi], offset public_5d54cc
        lea edi, ds:[esi+0xEC]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x24], 3
        call public_4144b0
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        call public_4963a0
        lea eax, ss:[esp+0x12]
        push eax
        push ebx
        lea edx, ss:[esp+0x1B]
        lea ecx, ds:[esi+0x150]
        push edx
        mov byte ptr ss : [esp+0x30], 5
        call public_4b6800
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 6
        mov dword ptr ds : [esi], offset public_5d5454
        call public_4b4f10
        and byte ptr ds : [esi+0x6C], 0xFD
        mov dword ptr ds : [public_672288], esi
        pop edi
        jmp public_4b6732
        public_4b6730 : nop
        xor esi, esi
        public_4b6732 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        push ecx
        add ebp, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebp
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_4b6773
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        public_4b6773 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4b6630)
    }
}

#undef public_4b6730
#undef public_4b6732
#undef public_4b6773
