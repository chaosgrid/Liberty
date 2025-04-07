#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204670);
CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_PROC_SYMBOL(public_6207c40);
CLANG_FORWARD_PROC_SYMBOL(public_62084f0);
CLANG_FORWARD_PROC_SYMBOL(public_6208620);
CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6209240);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);
CLANG_FORWARD_PROC_SYMBOL(public_620a010);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247359);

#define public_6204704 _public_6204704
#define public_6204726 _public_6204726
#define public_6204728 _public_6204728
#define public_620477a _public_620477a
#define public_620479c _public_620479c
#define public_620479e _public_620479e
#define public_6204809 _public_6204809
#define public_620480b _public_620480b
#define public_620487b _public_620487b
#define public_620487d _public_620487d
#define public_62048ea _public_62048ea
#define public_62048ec _public_62048ec
#define public_620495c _public_620495c
#define public_620495e _public_620495e
#define public_62049c7 _public_62049c7
#define public_62049c9 _public_62049c9
#define public_6204a26 _public_6204a26
#define public_6204a28 _public_6204a28

PROC_DECLARE(0x6204670, internal_6204670, public_6204670);
extern "C" NAKED register_t __cdecl internal_6204670()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247359 @0x6204672*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247359
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
        mov dword ptr ds : [esi], offset public_624b658
        mov dword ptr ds : [esi+0x64], 5
        mov dword ptr ds : [esi+0x68], 2
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 8
        mov dword ptr ss : [esp+0x1C], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x20], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x24], 0x3F4CCCCD
        je public_6204704
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], edi
        public_6204704 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 9
        je public_6204726
        mov ecx, eax
        call public_6207c40
        mov ebp, eax
        jmp public_6204728
        public_6204726 : nop
        xor ebp, ebp
        public_6204728 : nop
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
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x70], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_620a010
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, edi
        je public_620477a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], edi
        public_620477a : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xB
        je public_620479c
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_620479e
        public_620479c : nop
        xor ebp, ebp
        public_620479e : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xC
        call public_6209ff0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3F800000
        call public_6208bc0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
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
        je public_6204809
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_620480b
        public_6204809 : nop
        xor ebp, ebp
        public_620480b : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xE
        call public_6209ff0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3F800000
        call public_6208bc0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_6209ff0
        lea ebx, ds:[esi+0x84]
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xF
        je public_620487b
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_620487d
        public_620487b : nop
        xor ebp, ebp
        public_620487d : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x10
        call public_6209ff0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3F800000
        call public_6208bc0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
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
        mov byte ptr ss : [esp+0x30], 0x11
        je public_62048ea
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_62048ec
        public_62048ea : nop
        xor ebp, ebp
        public_62048ec : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x12
        call public_6209ff0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3F800000
        call public_6208bc0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
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
        je public_620495c
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_620495e
        public_620495c : nop
        xor ebp, ebp
        public_620495e : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x14
        call public_6209ff0
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        call public_6208bc0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x30], 8
        call public_6209ff0
        lea ebp, ds:[esi+0x7C]
        mov ecx, ebp
        call public_620a030
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0x15
        je public_62049c7
        mov ecx, eax
        call public_6206ce0
        mov ebx, eax
        jmp public_62049c9
        public_62049c7 : nop
        xor ebx, ebx
        public_62049c9 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x16
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx]
        add esp, 8
        push ecx
        push edi
        push ebx
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [ebp], ebx
        mov byte ptr ss : [esp+0x30], 8
        call public_6209fd0
        push 0x34
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0x17
        je public_6204a26
        mov ecx, eax
        call public_6208620
        jmp public_6204a28
        public_6204a26 : nop
        xor eax, eax
        public_6204a28 : nop
        lea edi, ds:[esi+0x88]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 8
        call public_62084f0
        mov eax, dword ptr ds : [edi]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x5C], 2
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6204670)
    }
}

#undef public_6204704
#undef public_6204726
#undef public_6204728
#undef public_620477a
#undef public_620479c
#undef public_620479e
#undef public_6204809
#undef public_620480b
#undef public_620487b
#undef public_620487d
#undef public_62048ea
#undef public_62048ec
#undef public_620495c
#undef public_620495e
#undef public_62049c7
#undef public_62049c9
#undef public_6204a26
#undef public_6204a28
