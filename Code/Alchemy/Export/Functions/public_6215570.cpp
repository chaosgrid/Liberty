#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_PROC_SYMBOL(public_6207c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6209240);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);
CLANG_FORWARD_PROC_SYMBOL(public_620a010);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6215570);
CLANG_FORWARD_PROC_SYMBOL(public_6217c20);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624822d);

#define public_62155fe _public_62155fe
#define public_6215620 _public_6215620
#define public_6215622 _public_6215622
#define public_6215669 _public_6215669
#define public_6215679 _public_6215679
#define public_621569b _public_621569b
#define public_621569d _public_621569d
#define public_62156ef _public_62156ef
#define public_6215711 _public_6215711
#define public_6215713 _public_6215713
#define public_621577e _public_621577e
#define public_6215780 _public_6215780
#define public_62157e9 _public_62157e9
#define public_62157eb _public_62157eb
#define public_6215857 _public_6215857
#define public_6215859 _public_6215859

PROC_DECLARE(0x6215570, internal_6215570, public_6215570);
extern "C" NAKED register_t __cdecl internal_6215570()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624822d @0x6215572*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624822d
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
        mov dword ptr ds : [esi+0x74], edi
        lea ebx, ds:[esi+0x78]
        mov dword ptr ds : [ebx], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov dword ptr ds : [esi+0x84], edi
        mov dword ptr ds : [esi], offset public_624cac8
        mov dword ptr ds : [esi+0x64], 5
        mov dword ptr ds : [esi+0x68], 2
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 7
        mov dword ptr ss : [esp+0x1C], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x20], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x24], 0x3F4CCCCD
        je public_62155fe
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], edi
        public_62155fe : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 8
        je public_6215620
        mov ecx, eax
        call public_6207c40
        mov ebp, eax
        jmp public_6215622
        public_6215620 : nop
        xor ebp, ebp
        public_6215622 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 9
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
        mov byte ptr ss : [esp+0x30], 7
        je public_6215669
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6215669 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, edi
        je public_6215679
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], edi
        public_6215679 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xA
        je public_621569b
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_621569d
        public_621569b : nop
        xor ebp, ebp
        public_621569d : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xB
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
        mov byte ptr ss : [esp+0x30], 7
        call public_6209ff0
        mov eax, dword ptr ds : [esi+0x74]
        cmp eax, edi
        je public_62156ef
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], edi
        public_62156ef : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xC
        je public_6215711
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_6215713
        public_6215711 : nop
        xor ebp, ebp
        public_6215713 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xD
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
        mov dword ptr ds : [esi+0x74], ebp
        mov byte ptr ss : [esp+0x30], 7
        call public_6209ff0
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xE
        je public_621577e
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_6215780
        public_621577e : nop
        xor ebp, ebp
        public_6215780 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xF
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
        mov byte ptr ss : [esp+0x30], 7
        call public_6209ff0
        lea ebx, ds:[esi+0x7C]
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0x10
        je public_62157e9
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_62157eb
        public_62157e9 : nop
        xor ebp, ebp
        public_62157eb : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x11
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
        mov byte ptr ss : [esp+0x30], 7
        call public_6209ff0
        lea ebx, ds:[esi+0x80]
        mov ecx, ebx
        call public_620a030
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0x12
        je public_6215857
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        jmp public_6215859
        public_6215857 : nop
        xor ebp, ebp
        public_6215859 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x13
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], ebp
        mov byte ptr ss : [esp+0x30], 7
        call public_6209fd0
        lea ebx, ds:[esi+0x84]
        mov ecx, ebx
        call public_620a0d0
        push ebx
        push 0x3F800000
        call public_6217c20
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        mov dword ptr ds : [esi+0x5C], edi
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6215570)
    }
}

#undef public_62155fe
#undef public_6215620
#undef public_6215622
#undef public_6215669
#undef public_6215679
#undef public_621569b
#undef public_621569d
#undef public_62156ef
#undef public_6215711
#undef public_6215713
#undef public_621577e
#undef public_6215780
#undef public_62157e9
#undef public_62157eb
#undef public_6215857
#undef public_6215859
