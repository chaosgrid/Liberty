#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d97b90);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db282a);

#define public_6d97bd1 _public_6d97bd1
#define public_6d97be4 _public_6d97be4
#define public_6d97bf7 _public_6d97bf7
#define public_6d97c20 _public_6d97c20
#define public_6d97c45 _public_6d97c45
#define public_6d97c70 _public_6d97c70
#define public_6d97c86 _public_6d97c86
#define public_6d97cb9 _public_6d97cb9

PROC_DECLARE(0x6d97b90, internal_6d97b90, public_6d97b90);
extern "C" NAKED register_t __cdecl internal_6d97b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db282a @0x6d97b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db282a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xDC]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ds : [ebx], offset public_6db3fc4
        je public_6d97bd1
        push eax
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [ebx+0xDC], ebp
        public_6d97bd1 : nop
        mov eax, dword ptr ds : [ebx+0xD4]
        cmp eax, ebp
        je public_6d97be4
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d97be4 : nop
        mov eax, dword ptr ds : [ebx+0xCC]
        cmp eax, ebp
        je public_6d97bf7
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d97bf7 : nop
        push esi
        push edi
        mov dword ptr ds : [ebx], offset public_6db3fb4
        mov edi, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ds:[ebx+0x80]
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_6d97c45
        lea ecx, ds:[ecx]
        public_6d97c20 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d85710
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6db30a0]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d97c20
        public_6d97c45 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6db1dc2
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ebp, dword ptr ds : [ebx+0x78]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x74]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x28], 2
        je public_6d97c86
        lea esp, ss:[esp]
        public_6d97c70 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db309c]
        cmp esi, ebp
        jne public_6d97c70
        public_6d97c86 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        xor esi, esi
        add esp, 4
        lea ecx, ds:[ebx+0x70]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6d91340
        mov eax, dword ptr ds : [ebx+0x44]
        pop edi
        cmp eax, esi
        pop esi
        je public_6d97cb9
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d97cb9 : nop
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6da1370
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d97b90)
    }
}

#undef public_6d97bd1
#undef public_6d97be4
#undef public_6d97bf7
#undef public_6d97c20
#undef public_6d97c45
#undef public_6d97c70
#undef public_6d97c86
#undef public_6d97cb9
