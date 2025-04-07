#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_62455b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a3dc);

#define public_623bbf7 _public_623bbf7
#define public_623bc17 _public_623bc17
#define public_623bc8d _public_623bc8d
#define public_623bc8f _public_623bc8f
#define public_623bcab _public_623bcab
#define public_623bcb8 _public_623bcb8

PROC_DECLARE(0x623bb80, internal_623bb80, public_623bb80);
extern "C" NAKED register_t __cdecl internal_623bb80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a3dc @0x623bb82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a3dc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x7C
        mov dword ptr ss : [esp+0x14], esi
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_623bc8d
        lea esi, ds:[edi+4]
        push ebx
        mov ecx, esi
        mov dword ptr ds : [edi], offset public_624ba48
        mov dword ptr ss : [esp+0x1C], esi
        call public_62455b0
        mov dword ptr ds : [esi+0x6C], ebp
        lea ebx, ds:[esi+0x70]
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ds : [esi], offset public_624f248
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x2C], 3
        je public_623bbf7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebp
        public_623bbf7 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x2C], 4
        je public_623bc17
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        public_623bc17 : nop
        mov dword ptr ss : [esp+0x10], 0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 5
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push 0
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push 0
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x6C], ebp
        mov byte ptr ss : [esp+0x2C], 3
        call public_6209fd0
        mov ecx, ebx
        call public_620a030
        push ebx
        push 0x3F800000
        call public_6210900
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [edi], offset public_624f450
        mov dword ptr ds : [edi+4], offset public_624f3f8
        mov dword ptr ds : [edi+0x78], 1
        xor ebp, ebp
        pop ebx
        jmp public_623bc8f
        public_623bc8d : nop
        xor edi, edi
        public_623bc8f : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        cmp eax, edi
        je public_623bcb8
        cmp eax, ebp
        je public_623bcab
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebp
        public_623bcab : nop
        cmp edi, ebp
        mov dword ptr ds : [esi+0x7C], edi
        je public_623bcb8
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+4]
        public_623bcb8 : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add edi, 4
        mov dword ptr ds : [esi+0xF0], edi
        mov dword ptr ds : [esi+0x9C], edi
        mov dword ptr ds : [esi+0x80], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x623bb80)
    }
}

#undef public_623bbf7
#undef public_623bc17
#undef public_623bc8d
#undef public_623bc8f
#undef public_623bcab
#undef public_623bcb8
