#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_6217c20);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_62455b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624ab97);

#define public_6245612 _public_6245612
#define public_6245642 _public_6245642
#define public_6245644 _public_6245644
#define public_6245696 _public_6245696
#define public_62456b8 _public_62456b8
#define public_62456ba _public_62456ba
#define public_6245701 _public_6245701
#define public_6245711 _public_6245711
#define public_6245733 _public_6245733
#define public_6245735 _public_6245735
#define public_62457a0 _public_62457a0
#define public_62457a2 _public_62457a2
#define public_624580f _public_624580f
#define public_6245811 _public_6245811
#define public_624587a _public_624587a
#define public_624587c _public_624587c

PROC_DECLARE(0x62455b0, internal_62455b0, public_62455b0);
extern "C" NAKED register_t __cdecl internal_62455b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624ab97 @0x62455b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624ab97
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_623f7b0
        xor edi, edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        lea ebx, ds:[esi+0x58]
        mov dword ptr ds : [ebx], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x68], edi
        mov dword ptr ds : [esi], offset public_624fe18
        mov dword ptr ds : [esi+0x64], edi
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x24], 7
        cmp eax, edi
        je public_6245612
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], edi
        public_6245612 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x24], 8
        je public_6245642
        mov ecx, ebp
        call public_6212db0
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6245644
        public_6245642 : nop
        xor ebp, ebp
        public_6245644 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 9
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x42C80000
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x4C], ebp
        mov byte ptr ss : [esp+0x24], 7
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, edi
        je public_6245696
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x50], edi
        public_6245696 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x24], 0xA
        je public_62456b8
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        jmp public_62456ba
        public_62456b8 : nop
        xor ebp, ebp
        public_62456ba : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0xB
        call public_6209fd0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x461C4000
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x50], ebp
        cmp eax, edi
        mov byte ptr ss : [esp+0x24], 7
        je public_6245701
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6245701 : nop
        mov eax, dword ptr ds : [esi+0x54]
        cmp eax, edi
        je public_6245711
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x54], edi
        public_6245711 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x24], 0xC
        je public_6245733
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        jmp public_6245735
        public_6245733 : nop
        xor ebp, ebp
        public_6245735 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0xD
        call public_6209fd0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x40000000
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x54], ebp
        mov byte ptr ss : [esp+0x24], 7
        call public_6209fd0
        mov ecx, ebx
        call public_620a030
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x24], 0xE
        je public_62457a0
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        jmp public_62457a2
        public_62457a0 : nop
        xor ebp, ebp
        public_62457a2 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0xF
        call public_6209fd0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x41200000
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x24], 7
        call public_6209fd0
        lea ebx, ds:[esi+0x5C]
        mov ecx, ebx
        call public_620a030
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x24], 0x10
        je public_624580f
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        jmp public_6245811
        public_624580f : nop
        xor ebp, ebp
        public_6245811 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0x11
        call public_6209fd0
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x24], 7
        call public_6209fd0
        lea ebx, ds:[esi+0x60]
        mov ecx, ebx
        call public_620a030
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x24], 0x12
        je public_624587a
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        jmp public_624587c
        public_624587a : nop
        xor ebp, ebp
        public_624587c : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0x13
        call public_6209fd0
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x24], 7
        call public_6209fd0
        lea edi, ds:[esi+0x68]
        mov ecx, edi
        call public_620a0d0
        push edi
        push 0x3F800000
        call public_6217c20
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62455b0)
    }
}

#undef public_6245612
#undef public_6245642
#undef public_6245644
#undef public_6245696
#undef public_62456b8
#undef public_62456ba
#undef public_6245701
#undef public_6245711
#undef public_6245733
#undef public_6245735
#undef public_62457a0
#undef public_62457a2
#undef public_624580f
#undef public_6245811
#undef public_624587a
#undef public_624587c
