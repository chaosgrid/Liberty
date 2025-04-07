#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6209240);
CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);
CLANG_FORWARD_PROC_SYMBOL(public_620a010);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_620ef80);
CLANG_FORWARD_PROC_SYMBOL(public_6210860);
CLANG_FORWARD_PROC_SYMBOL(public_62108b0);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247bbb);

#define public_620efe8 _public_620efe8
#define public_620f030 _public_620f030
#define public_620f032 _public_620f032
#define public_620f083 _public_620f083
#define public_620f0b3 _public_620f0b3
#define public_620f0b5 _public_620f0b5
#define public_620f106 _public_620f106
#define public_620f136 _public_620f136
#define public_620f138 _public_620f138
#define public_620f189 _public_620f189
#define public_620f1ab _public_620f1ab
#define public_620f1ad _public_620f1ad

PROC_DECLARE(0x620ef80, internal_620ef80, public_620ef80);
extern "C" NAKED register_t __cdecl internal_620ef80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247bbb @0x620ef82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247bbb
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
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov ebx, 5
        mov dword ptr ds : [esi], offset public_624c040
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], 2
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x30], bl
        cmp eax, edi
        je public_620efe8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], edi
        public_620efe8 : nop
        push 0x20
        mov dword ptr ss : [esp+0x20], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x24], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x28], 0x3F4CCCCD
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x30], 6
        je public_620f030
        mov ecx, ebp
        call public_62108b0
        mov dword ptr ss : [ebp], offset public_624bb68
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_620f032
        public_620f030 : nop
        xor ebp, ebp
        public_620f032 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 7
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
        mov byte ptr ss : [esp+0x30], bl
        call public_620a010
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, edi
        je public_620f083
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], edi
        public_620f083 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x30], 8
        je public_620f0b3
        mov ecx, ebp
        call public_6210860
        mov dword ptr ss : [ebp], offset public_624bb18
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_620f0b5
        public_620f0b3 : nop
        xor ebp, ebp
        public_620f0b5 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 9
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
        mov byte ptr ss : [esp+0x30], bl
        call public_6209ff0
        mov eax, dword ptr ds : [esi+0x74]
        cmp eax, edi
        je public_620f106
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], edi
        public_620f106 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x30], 0xA
        je public_620f136
        mov ecx, ebp
        call public_6210860
        mov dword ptr ss : [ebp], offset public_624bb18
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_620f138
        public_620f136 : nop
        xor ebp, ebp
        public_620f138 : nop
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
        mov dword ptr ds : [esi+0x74], ebp
        mov byte ptr ss : [esp+0x30], bl
        call public_6209ff0
        mov eax, dword ptr ds : [esi+0x78]
        cmp eax, edi
        je public_620f189
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], edi
        public_620f189 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xC
        je public_620f1ab
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_620f1ad
        public_620f1ab : nop
        xor ebp, ebp
        public_620f1ad : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xD
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
        mov dword ptr ds : [esi+0x78], ebp
        mov byte ptr ss : [esp+0x30], bl
        call public_6209ff0
        lea ebx, ds:[esi+0x7C]
        mov ecx, ebx
        call public_620a030
        push ebx
        push edi
        call public_6210900
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
        UNREACHABLE_TRAP(0x620ef80)
    }
}

#undef public_620efe8
#undef public_620f030
#undef public_620f032
#undef public_620f083
#undef public_620f0b3
#undef public_620f0b5
#undef public_620f106
#undef public_620f136
#undef public_620f138
#undef public_620f189
#undef public_620f1ab
#undef public_620f1ad
