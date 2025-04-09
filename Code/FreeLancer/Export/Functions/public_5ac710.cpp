#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5ac710);
CLANG_FORWARD_PROC_SYMBOL(public_5adfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c56f6);

#define public_5ac745 _public_5ac745
#define public_5ac75c _public_5ac75c
#define public_5ac8e4 _public_5ac8e4
#define public_5ac99c _public_5ac99c
#define public_5ac9a9 _public_5ac9a9

PROC_DECLARE(0x5ac710, internal_5ac710, public_5ac710);
extern "C" NAKED register_t __cdecl internal_5ac710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c56f6 @0x5ac712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c56f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x8AC
        mov eax, dword ptr ss : [esp+0x8BC]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_5ac745
        xor al, al
        jmp public_5ac9a9
        public_5ac745 : nop
        push eax
        call dword ptr ds : [public_5c7208]
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        jne public_5ac75c
        xor al, al
        jmp public_5ac9a9
        public_5ac75c : nop
        push esi
        push 0x3A
        push edi
        call dword ptr ds : [public_5c70e4]
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_5ac99c
        push 0x400
        lea eax, ss:[esp+0xBC]
        push edi
        mov byte ptr ds : [esi], bl
        push eax
        inc esi
        call dword ptr ds : [public_5c70f8]
        mov cl, byte ptr ss : [esp+0x1A]
        add esp, 0xC
        mov byte ptr ss : [esp+0x1C], cl
        push ebx
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6fb8]
        mov dl, byte ptr ss : [esp+0xE]
        mov dword ptr ss : [esp+0x8C0], ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], dl
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        lea eax, ss:[esp+0xE]
        push eax
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x8C4], 1
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFE
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov byte ptr ss : [esp+0x5C], bl
        mov byte ptr ss : [esp+0x5D], bl
        mov byte ptr ss : [esp+0x5E], bl
        mov dword ptr ss : [esp+0x60], ebx
        call dword ptr ds : [public_5c6fc0]
        lea ecx, ss:[esp+0x16]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x8C4], 2
        call dword ptr ds : [public_5c6fc0]
        lea edx, ss:[esp+0x17]
        push edx
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x8C4], 3
        call dword ptr ds : [public_5c6f98]
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0x8C4], 4
        call dword ptr ds : [public_5c6f98]
        mov dword ptr ss : [esp+0xA0], ebx
        mov dword ptr ss : [esp+0xA4], ebx
        mov dword ptr ss : [esp+0xA8], ebx
        mov dword ptr ss : [esp+0xAC], ebx
        mov byte ptr ss : [esp+0xB0], bl
        mov byte ptr ss : [esp+0xB1], 1
        mov byte ptr ss : [esp+0xB2], 1
        mov dword ptr ss : [esp+0xB4], ebx
        lea ecx, ss:[esp+0xB8]
        push ecx
        mov dword ptr ss : [esp+0x8C4], 5
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push 1
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5ac8e4
        mov eax, dword ptr ss : [esp+0x20]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push ebp
        lea edx, ss:[esp+0xC0]
        push edx
        push eax
        call public_41d8a0
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], ebp
        add esp, 0xC
        mov word ptr ds : [ecx+ebp*2], bx
        pop ebp
        public_5ac8e4 : nop
        push edi
        call dword ptr ds : [public_5c72f4]
        push eax
        call dword ptr ds : [public_5c72f8]
        push esi
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_5c70c4]
        add esp, 4
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x40]
        push 1
        push eax
        lea ecx, ss:[esp+0x40]
        call public_537260
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0x158]
        lea edx, ss:[esp+0x1C]
        push edx
        add ecx, 0x150
        push 1
        push eax
        call public_5adfc0
        push 1
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0x8C4], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x84]
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x64]
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_5b7e1d
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [public_5c6fb8]
        public_5ac99c : nop
        push edi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov al, 1
        pop esi
        public_5ac9a9 : nop
        mov ecx, dword ptr ss : [esp+0x8B4]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8B8
        ret 4
        UNREACHABLE_TRAP(0x5ac710)
    }
}

#undef public_5ac745
#undef public_5ac75c
#undef public_5ac8e4
#undef public_5ac99c
#undef public_5ac9a9
