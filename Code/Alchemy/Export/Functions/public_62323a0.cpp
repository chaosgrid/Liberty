#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6209240);
CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);
CLANG_FORWARD_PROC_SYMBOL(public_620a010);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_6210860);
CLANG_FORWARD_PROC_SYMBOL(public_62108b0);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_62323a0);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249b0b);

#define public_6232408 _public_6232408
#define public_6232450 _public_6232450
#define public_6232452 _public_6232452
#define public_62324a3 _public_62324a3
#define public_62324d3 _public_62324d3
#define public_62324d5 _public_62324d5
#define public_6232526 _public_6232526
#define public_6232556 _public_6232556
#define public_6232558 _public_6232558
#define public_62325a9 _public_62325a9
#define public_62325cb _public_62325cb
#define public_62325cd _public_62325cd

PROC_DECLARE(0x62323a0, internal_62323a0, public_62323a0);
extern "C" NAKED register_t __cdecl internal_62323a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249b0b @0x62323a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249b0b
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
        mov dword ptr ds : [esi], offset public_624e858
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], 2
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x30], bl
        cmp eax, edi
        je public_6232408
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], edi
        public_6232408 : nop
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
        je public_6232450
        mov ecx, ebp
        call public_62108b0
        mov dword ptr ss : [ebp], offset public_624bb68
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6232452
        public_6232450 : nop
        xor ebp, ebp
        public_6232452 : nop
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
        je public_62324a3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], edi
        public_62324a3 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x30], 8
        je public_62324d3
        mov ecx, ebp
        call public_6210860
        mov dword ptr ss : [ebp], offset public_624bb18
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_62324d5
        public_62324d3 : nop
        xor ebp, ebp
        public_62324d5 : nop
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
        je public_6232526
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], edi
        public_6232526 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x30], 0xA
        je public_6232556
        mov ecx, ebp
        call public_6210860
        mov dword ptr ss : [ebp], offset public_624bb18
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6232558
        public_6232556 : nop
        xor ebp, ebp
        public_6232558 : nop
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
        je public_62325a9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], edi
        public_62325a9 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xC
        je public_62325cb
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_62325cd
        public_62325cb : nop
        xor ebp, ebp
        public_62325cd : nop
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
        UNREACHABLE_TRAP(0x62323a0)
    }
}

#undef public_6232408
#undef public_6232450
#undef public_6232452
#undef public_62324a3
#undef public_62324d3
#undef public_62324d5
#undef public_6232526
#undef public_6232556
#undef public_6232558
#undef public_62325a9
#undef public_62325cb
#undef public_62325cd
