#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d9e740);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db292a);

#define public_6d9e777 _public_6d9e777
#define public_6d9e78a _public_6d9e78a
#define public_6d9e7b0 _public_6d9e7b0
#define public_6d9e7d5 _public_6d9e7d5
#define public_6d9e7f8 _public_6d9e7f8
#define public_6d9e80e _public_6d9e80e
#define public_6d9e83f _public_6d9e83f

PROC_DECLARE(0x6d9e740, internal_6d9e740, public_6d9e740);
extern "C" NAKED register_t __cdecl internal_6d9e740()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db292a @0x6d9e742*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db292a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xAC]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        je public_6d9e777
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9e777 : nop
        mov eax, dword ptr ss : [ebp+0xA4]
        cmp eax, ebx
        je public_6d9e78a
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9e78a : nop
        mov dword ptr ss : [ebp], offset public_6db3fb4
        mov edi, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ss:[ebp+0x80]
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_6d9e7d5
        nop 
        public_6d9e7b0 : nop
        push ebx
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
        jne public_6d9e7b0
        public_6d9e7d5 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6db1dc2
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov ebx, dword ptr ss : [ebp+0x78]
        mov esi, dword ptr ds : [ebx]
        lea edi, ss:[ebp+0x74]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 2
        je public_6d9e80e
        public_6d9e7f8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db309c]
        cmp esi, ebx
        jne public_6d9e7f8
        public_6d9e80e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        xor esi, esi
        add esp, 4
        lea ecx, ss:[ebp+0x70]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6d91340
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, esi
        je public_6d9e83f
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9e83f : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6da1370
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d9e740)
    }
}

#undef public_6d9e777
#undef public_6d9e78a
#undef public_6d9e7b0
#undef public_6d9e7d5
#undef public_6d9e7f8
#undef public_6d9e80e
#undef public_6d9e83f
