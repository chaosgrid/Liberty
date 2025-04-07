#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_PROC_SYMBOL(public_6207c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6209240);
CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);
CLANG_FORWARD_PROC_SYMBOL(public_620a010);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_6237840);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249ffd);

#define public_62378b6 _public_62378b6
#define public_62378f0 _public_62378f0
#define public_62378f2 _public_62378f2
#define public_6237939 _public_6237939
#define public_6237949 _public_6237949
#define public_623796b _public_623796b
#define public_623796d _public_623796d
#define public_62379bf _public_62379bf
#define public_62379e1 _public_62379e1
#define public_62379e3 _public_62379e3
#define public_6237a4e _public_6237a4e
#define public_6237a50 _public_6237a50
#define public_6237abd _public_6237abd
#define public_6237abf _public_6237abf
#define public_6237b2f _public_6237b2f
#define public_6237b31 _public_6237b31

PROC_DECLARE(0x6237840, internal_6237840, public_6237840);
extern "C" NAKED register_t __cdecl internal_6237840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249ffd @0x6237842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249ffd
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
        mov dword ptr ds : [esi], offset public_624ee90
        mov dword ptr ds : [esi+0x64], 5
        mov dword ptr ds : [esi+0x68], 2
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 7
        je public_62378b6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], edi
        public_62378b6 : nop
        push 0x20
        mov dword ptr ss : [esp+0x20], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x24], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x28], 0x3F4CCCCD
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 8
        je public_62378f0
        mov ecx, eax
        call public_6207c40
        mov ebp, eax
        jmp public_62378f2
        public_62378f0 : nop
        xor ebp, ebp
        public_62378f2 : nop
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
        je public_6237939
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6237939 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, edi
        je public_6237949
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], edi
        public_6237949 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xA
        je public_623796b
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_623796d
        public_623796b : nop
        xor ebp, ebp
        public_623796d : nop
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
        je public_62379bf
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], edi
        public_62379bf : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0xC
        je public_62379e1
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_62379e3
        public_62379e1 : nop
        xor ebp, ebp
        public_62379e3 : nop
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
        je public_6237a4e
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_6237a50
        public_6237a4e : nop
        xor ebp, ebp
        public_6237a50 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0xF
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
        je public_6237abd
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_6237abf
        public_6237abd : nop
        xor ebp, ebp
        public_6237abf : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x11
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
        mov byte ptr ss : [esp+0x30], 7
        call public_6209ff0
        lea ebx, ds:[esi+0x80]
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x30], 0x12
        je public_6237b2f
        mov ecx, eax
        call public_6207490
        mov ebp, eax
        jmp public_6237b31
        public_6237b2f : nop
        xor ebp, ebp
        public_6237b31 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x30], 0x13
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
        lea ebx, ds:[esi+0x84]
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
        UNREACHABLE_TRAP(0x6237840)
    }
}

#undef public_62378b6
#undef public_62378f0
#undef public_62378f2
#undef public_6237939
#undef public_6237949
#undef public_623796b
#undef public_623796d
#undef public_62379bf
#undef public_62379e1
#undef public_62379e3
#undef public_6237a4e
#undef public_6237a50
#undef public_6237abd
#undef public_6237abf
#undef public_6237b2f
#undef public_6237b31
