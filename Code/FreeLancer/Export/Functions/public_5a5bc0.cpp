#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bcbf0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c5a80);
CLANG_FORWARD_PROC_SYMBOL(public_58f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a5e40);
CLANG_FORWARD_PROC_SYMBOL(public_5a6830);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5a6920);
CLANG_FORWARD_PROC_SYMBOL(public_5a6950);
CLANG_FORWARD_PROC_SYMBOL(public_5a6a10);
CLANG_FORWARD_PROC_SYMBOL(public_5a6b90);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5185);

#define public_5a5c07 _public_5a5c07
#define public_5a5c23 _public_5a5c23
#define public_5a5ce3 _public_5a5ce3
#define public_5a5cfb _public_5a5cfb
#define public_5a5d0b _public_5a5d0b
#define public_5a5d30 _public_5a5d30
#define public_5a5d54 _public_5a5d54
#define public_5a5d8d _public_5a5d8d
#define public_5a5d98 _public_5a5d98
#define public_5a5df9 _public_5a5df9
#define public_5a5e1a _public_5a5e1a
#define public_5a5e1f _public_5a5e1f

PROC_DECLARE(0x5a5bc0, internal_5a5bc0, public_5a5bc0);
extern "C" NAKED register_t __cdecl internal_5a5bc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c5185 @0x5a5bc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5185
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_672950]
        mov dword ptr fs : [0], esp
        mov ecx, dword ptr ds : [eax]
        sub esp, 0xC0
        push edi
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_67294c
        call public_4c5a80
        mov edi, dword ptr ss : [esp+0xD8]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_5a5c07
        cmp eax, 1
        jne public_5a5c23
        public_5a5c07 : nop
        call public_4c4690
        test eax, eax
        jle public_5a5c23
        mov al, byte ptr ds : [edi+0x3C]
        cmp al, 7
        je public_5a5e1f
        cmp al, 8
        je public_5a5e1f
        public_5a5c23 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_5a5e1a
        push ebx
        push ebp
        push esi
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_5a6900
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xD8], 0
        call public_5a5e40
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0xD8], 1
        call public_5a5e40
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x44]
        mov ebx, 2
        push eax
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0x8C], edx
        call public_5a6a10
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, offset public_67294c
        mov byte ptr ss : [esp+0xE0], 3
        call public_5a6950
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0xD8], bl
        call public_5a6830
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xD8], 0xFFFFFFFF
        call public_5a6830
        mov eax, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [edi+8]
        add esi, 0x10
        test eax, eax
        jne public_5a5ce3
        xor edx, edx
        jmp public_5a5cfb
        public_5a5ce3 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_5a5cfb : nop
        cmp edx, ebp
        jae public_5a5d8d
        test ebp, ebp
        mov eax, ebp
        jge public_5a5d0b
        xor eax, eax
        public_5a5d0b : nop
        imul eax, 0x1C
        push eax
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp ebx, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_5a5d54
        lea ecx, ds:[ecx]
        public_5a5d30 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push ecx
        call public_5a7c80
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        add edx, 0x1C
        add ebx, 0x1C
        add esp, 8
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], edx
        jne public_5a5d30
        public_5a5d54 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_5a6920
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        imul ebp, 0x1C
        mov ebx, dword ptr ss : [esp+0x1C]
        add ebp, ebx
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], ebp
        call public_58f9e0
        imul eax, 0x1C
        add eax, ebx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], ebx
        public_5a5d8d : nop
        mov eax, dword ptr ds : [edi+8]
        xor ebp, ebp
        test eax, eax
        jbe public_5a5df9
        xor ebx, ebx
        public_5a5d98 : nop
        lea ecx, ss:[esp+0x20]
        call public_5a5e40
        mov ecx, dword ptr ds : [edi+4]
        add ecx, ebx
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xDC], 4
        call dword ptr ds : [public_5c628c]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+ebx+0x18]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [esi+8]
        push 1
        push eax
        mov ecx, esi
        call public_5a6b90
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xD8], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        mov eax, dword ptr ds : [edi+8]
        inc ebp
        add ebx, 0x1C
        cmp ebp, eax
        jb public_5a5d98
        public_5a5df9 : nop
        mov ebx, dword ptr ds : [public_5c628c]
        lea edx, ds:[edi+0xC]
        push edx
        lea ecx, ds:[esi+0x10]
        call ebx
        mov al, byte ptr ds : [edi+0x3C]
        add edi, 0x24
        push edi
        lea ecx, ds:[esi+0x28]
        mov byte ptr ds : [esi+0x40], al
        call ebx
        pop esi
        pop ebp
        pop ebx
        public_5a5e1a : nop
        call public_4bcbf0
        public_5a5e1f : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0xCC
        ret 8
        UNREACHABLE_TRAP(0x5a5bc0)
    }
}

#undef public_5a5c07
#undef public_5a5c23
#undef public_5a5ce3
#undef public_5a5cfb
#undef public_5a5d0b
#undef public_5a5d30
#undef public_5a5d54
#undef public_5a5d8d
#undef public_5a5d98
#undef public_5a5df9
#undef public_5a5e1a
#undef public_5a5e1f
