#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62480dc);

#define public_6214087 _public_6214087
#define public_62140a7 _public_62140a7
#define public_6214120 _public_6214120
#define public_6214122 _public_6214122
#define public_6214139 _public_6214139
#define public_621413b _public_621413b
#define public_621415b _public_621415b
#define public_6214168 _public_6214168

PROC_DECLARE(0x6214010, internal_6214010, public_6214010);
extern "C" NAKED register_t __cdecl internal_6214010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62480dc @0x6214012*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62480dc
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
        push 0x5C
        mov dword ptr ss : [esp+0x14], esi
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_6214120
        lea esi, ds:[edi+4]
        push ebx
        mov ecx, esi
        mov dword ptr ds : [edi], offset public_624ba48
        mov dword ptr ss : [esp+0x1C], esi
        call public_623f7b0
        mov dword ptr ds : [esi+0x4C], ebp
        lea ebx, ds:[esi+0x50]
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ds : [esi], offset public_624c7d8
        mov eax, dword ptr ds : [esi+0x4C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x2C], 3
        je public_6214087
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebp
        public_6214087 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x2C], 4
        je public_62140a7
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        public_62140a7 : nop
        mov dword ptr ss : [esp+0x10], 0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 5
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3F800000
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push 0
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x4C], ebp
        mov byte ptr ss : [esp+0x2C], 3
        call public_6209fd0
        mov ecx, ebx
        call public_620a030
        push ebx
        push 0x3F800000
        call public_6210900
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [edi], offset public_624c888
        mov dword ptr ds : [edi+4], offset public_624c830
        mov dword ptr ds : [edi+0x58], 1
        xor ebp, ebp
        pop ebx
        jmp public_6214122
        public_6214120 : nop
        xor edi, edi
        public_6214122 : nop
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x9C], edi
        je public_6214139
        lea eax, ds:[edi+4]
        jmp public_621413b
        public_6214139 : nop
        xor eax, eax
        public_621413b : nop
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x80], eax
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, edi
        je public_6214168
        cmp eax, ebp
        je public_621415b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebp
        public_621415b : nop
        cmp edi, ebp
        mov dword ptr ds : [esi+0x7C], edi
        je public_6214168
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+4]
        public_6214168 : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6214010)
    }
}

#undef public_6214087
#undef public_62140a7
#undef public_6214120
#undef public_6214122
#undef public_6214139
#undef public_621413b
#undef public_621415b
#undef public_6214168
