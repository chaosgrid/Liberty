#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247f61);

#define public_62129da _public_62129da
#define public_6212a0b _public_6212a0b
#define public_6212a0d _public_6212a0d
#define public_6212a6e _public_6212a6e
#define public_6212a70 _public_6212a70
#define public_6212a87 _public_6212a87
#define public_6212a89 _public_6212a89
#define public_6212aad _public_6212aad
#define public_6212aba _public_6212aba

PROC_DECLARE(0x6212960, internal_6212960, public_6212960);
extern "C" NAKED register_t __cdecl internal_6212960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247f61 @0x6212962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247f61
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push esi
        push edi
        mov esi, ecx
        push 0x58
        mov dword ptr ss : [esp+0x10], esi
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        test edi, edi
        mov dword ptr ss : [esp+0x24], 0
        je public_6212a6e
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624ba48
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_623f7b0
        mov dword ptr ds : [esi+0x4C], 0
        mov dword ptr ds : [esi], offset public_624c480
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        mov byte ptr ss : [esp+0x24], 2
        je public_62129da
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], 0
        public_62129da : nop
        push ebp
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x28], 3
        je public_6212a0b
        mov ecx, ebp
        call public_6212db0
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6212a0d
        public_6212a0b : nop
        xor ebp, ebp
        public_6212a0d : nop
        mov dword ptr ss : [esp+0xC], 0
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x28], 4
        call public_6209fd0
        lea edx, ss:[esp+0xC]
        push edx
        push 0x42706666
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push 0
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [esi+0x4C], ebp
        mov byte ptr ss : [esp+0x28], 2
        call public_6209fd0
        mov dword ptr ds : [esi], offset public_624c538
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], offset public_624c4d8
        mov dword ptr ds : [edi+0x54], 1
        pop ebp
        jmp public_6212a70
        public_6212a6e : nop
        xor edi, edi
        public_6212a70 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x9C], edi
        je public_6212a87
        lea eax, ds:[edi+4]
        jmp public_6212a89
        public_6212a87 : nop
        xor eax, eax
        public_6212a89 : nop
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x80], eax
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, edi
        je public_6212aba
        test eax, eax
        je public_6212aad
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_6212aad : nop
        test edi, edi
        mov dword ptr ds : [esi+0x7C], edi
        je public_6212aba
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+4]
        public_6212aba : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6212960)
    }
}

#undef public_62129da
#undef public_6212a0b
#undef public_6212a0d
#undef public_6212a6e
#undef public_6212a70
#undef public_6212a87
#undef public_6212a89
#undef public_6212aad
#undef public_6212aba
