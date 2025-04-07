#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_621b490);
CLANG_FORWARD_PROC_SYMBOL(public_62455b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248750);

#define public_621b4e4 _public_621b4e4
#define public_621b514 _public_621b514
#define public_621b516 _public_621b516
#define public_621b558 _public_621b558
#define public_621b568 _public_621b568
#define public_621b593 _public_621b593
#define public_621b595 _public_621b595
#define public_621b5e6 _public_621b5e6
#define public_621b611 _public_621b611
#define public_621b613 _public_621b613
#define public_621b660 _public_621b660
#define public_621b68b _public_621b68b
#define public_621b68d _public_621b68d

PROC_DECLARE(0x621b490, internal_621b490, public_621b490);
extern "C" NAKED register_t __cdecl internal_621b490()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248750 @0x621b492*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248750
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
        call public_62455b0
        xor ebp, ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ds : [esi+0x6C], ebp
        mov dword ptr ds : [esi+0x70], ebp
        mov dword ptr ds : [esi+0x74], ebp
        mov dword ptr ds : [esi+0x78], ebp
        mov dword ptr ds : [esi], offset public_624d1b8
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x24], 4
        je public_621b4e4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebp
        public_621b4e4 : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 5
        mov ebx, 1
        je public_621b514
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], ebx
        jmp public_621b516
        public_621b514 : nop
        xor edi, edi
        public_621b516 : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 6
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push ebp
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x6C], edi
        cmp eax, ebp
        mov byte ptr ss : [esp+0x24], 4
        je public_621b558
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_621b558 : nop
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, ebp
        je public_621b568
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebp
        public_621b568 : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 7
        je public_621b593
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], ebx
        jmp public_621b595
        public_621b593 : nop
        xor edi, edi
        public_621b595 : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 8
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3F800000
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x70], edi
        mov byte ptr ss : [esp+0x24], 4
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x74]
        cmp eax, ebp
        je public_621b5e6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], ebp
        public_621b5e6 : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 9
        je public_621b611
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], ebx
        jmp public_621b613
        public_621b611 : nop
        xor edi, edi
        public_621b613 : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0xA
        call public_6209fd0
        lea eax, ss:[esp+0x10]
        push eax
        push ebp
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi]
        add esp, 8
        push edx
        push ebp
        push edi
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x74], edi
        mov byte ptr ss : [esp+0x24], 4
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x78]
        cmp eax, ebp
        je public_621b660
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], ebp
        public_621b660 : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 0xB
        je public_621b68b
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], ebx
        jmp public_621b68d
        public_621b68b : nop
        xor edi, edi
        public_621b68d : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 0xC
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push ebp
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x78], edi
        mov byte ptr ss : [esp+0x24], 4
        call public_6209fd0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x621b490)
    }
}

#undef public_621b4e4
#undef public_621b514
#undef public_621b516
#undef public_621b558
#undef public_621b568
#undef public_621b593
#undef public_621b595
#undef public_621b5e6
#undef public_621b611
#undef public_621b613
#undef public_621b660
#undef public_621b68b
#undef public_621b68d
