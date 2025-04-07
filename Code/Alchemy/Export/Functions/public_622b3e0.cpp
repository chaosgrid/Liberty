#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_PROC_SYMBOL(public_6207c40);
CLANG_FORWARD_PROC_SYMBOL(public_62084f0);
CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6209240);
CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);
CLANG_FORWARD_PROC_SYMBOL(public_620a010);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_622b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_62434c0);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249476);

#define public_622b45c _public_622b45c
#define public_622b496 _public_622b496
#define public_622b498 _public_622b498
#define public_622b4df _public_622b4df
#define public_622b4ef _public_622b4ef
#define public_622b511 _public_622b511
#define public_622b513 _public_622b513
#define public_622b57e _public_622b57e
#define public_622b580 _public_622b580
#define public_622b5ed _public_622b5ed
#define public_622b5ef _public_622b5ef
#define public_622b65c _public_622b65c
#define public_622b65e _public_622b65e
#define public_622b6ce _public_622b6ce
#define public_622b6d0 _public_622b6d0
#define public_622b751 _public_622b751
#define public_622b753 _public_622b753

PROC_DECLARE(0x622b3e0, internal_622b3e0, public_622b3e0);
extern "C" NAKED register_t __cdecl internal_622b3e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249476 @0x622b3e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249476
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_6243ff0
        xor edi, edi
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        lea ebx, ds:[esi+0x74]
        mov dword ptr ds : [ebx], edi
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov dword ptr ds : [esi+0x84], edi
        mov dword ptr ds : [esi+0x88], edi
        mov dword ptr ds : [esi], offset public_624e160
        mov dword ptr ds : [esi+0x64], 5
        mov dword ptr ds : [esi+0x68], 2
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 8
        je public_622b45c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], edi
        public_622b45c : nop
        push 0x20
        mov dword ptr ss : [esp+0x20], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x24], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x28], 0x3F4CCCCD
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 9
        je public_622b496
        mov ecx, eax
        call public_6207c40
        mov ebp, eax
        jmp public_622b498
        public_622b496 : nop
        xor ebp, ebp
        public_622b498 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xA
        call public_620a010
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x1C]
        push edx
        push eax
        call public_6209240
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x70], ebp
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 8
        je public_622b4df
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_622b4df : nop
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, edi
        je public_622b4ef
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], edi
        public_622b4ef : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xB
        je public_622b511
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_622b513
        public_622b511 : nop
        xor ebp, ebp
        public_622b513 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xC
        call public_6209ff0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x3F800000
        call public_6208bc0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x6C], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_6209ff0
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xD
        je public_622b57e
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_622b580
        public_622b57e : nop
        xor ebp, ebp
        public_622b580 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xE
        call public_6209ff0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x3F800000
        call public_6208bc0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_6209ff0
        lea ebx, ds:[esi+0x78]
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xF
        je public_622b5ed
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_622b5ef
        public_622b5ed : nop
        xor ebp, ebp
        public_622b5ef : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x10
        call public_6209ff0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x3F800000
        call public_6208bc0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_6209ff0
        lea ebx, ds:[esi+0x7C]
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0x11
        je public_622b65c
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_622b65e
        public_622b65c : nop
        xor ebp, ebp
        public_622b65e : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x12
        call public_6209ff0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x3F800000
        call public_6208bc0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_6209ff0
        lea ebx, ds:[esi+0x80]
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0x13
        je public_622b6ce
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_622b6d0
        public_622b6ce : nop
        xor ebp, ebp
        public_622b6d0 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x14
        call public_6209ff0
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call public_6208bc0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        push edx
        push edi
        push ebp
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_6209ff0
        lea ebx, ds:[esi+0x84]
        mov ecx, ebx
        call public_620a030
        push ebx
        push edi
        call public_6210900
        push 0x34
        call public_624612c
        mov ebp, eax
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x30], 0x15
        je public_622b751
        mov ecx, ebp
        call public_62434c0
        mov dword ptr ss : [ebp], offset public_624bbb8
        mov dword ptr ss : [ebp+0x30], 1
        jmp public_622b753
        public_622b751 : nop
        xor ebp, ebp
        public_622b753 : nop
        push ebp
        lea ecx, ds:[esi+0x88]
        mov byte ptr ss : [esp+0x34], 8
        call public_62084f0
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x5C], edi
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x622b3e0)
    }
}

#undef public_622b45c
#undef public_622b496
#undef public_622b498
#undef public_622b4df
#undef public_622b4ef
#undef public_622b511
#undef public_622b513
#undef public_622b57e
#undef public_622b580
#undef public_622b5ed
#undef public_622b5ef
#undef public_622b65c
#undef public_622b65e
#undef public_622b6ce
#undef public_622b6d0
#undef public_622b751
#undef public_622b753
