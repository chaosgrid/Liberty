#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea5e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f47a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9858);

#define public_6ea5f0a _public_6ea5f0a

PROC_DECLARE(0x6ea5e10, internal_6ea5e10, public_6ea5e10);
extern "C" NAKED register_t __cdecl internal_6ea5e10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9858 @0x6ea5e12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9858
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6fb385c
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+4], offset public_6fb427c
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi], offset public_6fb4274
        mov dword ptr ds : [esi+4], offset public_6fb4270
        lea ebp, ds:[esi+8]
        mov dword ptr ds : [public_6fced3c], 0x455AC000
        mov dword ptr ds : [public_6fced4c], 0x45A28000
        mov dword ptr ds : [public_6fced58], 0x45DAC000
        mov dword ptr ds : [public_6fced64], 0x461C4000
        mov dword ptr ds : [public_6fced70], 0x467A0000
        mov dword ptr ds : [public_6fced7c], 0
        mov dword ptr ds : [public_6fced88], 0x470CA000
        mov dword ptr ds : [public_6fced94], 0x46EA6000
        mov dword ptr ds : [public_6fceda0], 0
        mov dword ptr ds : [public_6fcedac], 0
        mov dword ptr ds : [public_6fcedb8], 0
        mov dword ptr ds : [public_6fcedc4], 0
        mov dword ptr ds : [public_6fcedd0], 0
        mov eax, dword ptr ds : [edx+4]
        lea edi, ds:[esi+0xC]
        push edi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [esi+0x10], 0
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ea5f0a
        push 0
        push 0
        mov ecx, eax
        call public_6f47a30
        public_6ea5f0a : nop
        mov ecx, dword ptr ds : [public_6fb4260]
        push 0x20
        lea edx, ds:[esi+0x19]
/*FIXUP push offset public_6fb4264 @0x6ea5f15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4264
        push edx
        mov dword ptr ds : [esi+0x14], ecx
        mov byte ptr ds : [esi+0x18], 0
        call dword ptr ds : [public_6fb3378]
        mov eax, dword ptr ds : [edi]
        push 0
        push eax
        call dword ptr ds : [public_6fb3624]
        push 0x40A00000
        push ebp
        call dword ptr ds : [public_6fb36a4]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6ea5e10)
    }
}

#undef public_6ea5f0a
