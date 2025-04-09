#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ab4c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b739e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c564b);

#define public_5ab542 _public_5ab542
#define public_5ab55f _public_5ab55f
#define public_5ab561 _public_5ab561
#define public_5ab571 _public_5ab571

PROC_DECLARE(0x5ab4c0, internal_5ab4c0, public_5ab4c0);
extern "C" NAKED register_t __cdecl internal_5ab4c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c564b @0x5ab4c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c564b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ds : [public_615b10]
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        test al, al
        push esi
        mov esi, ecx
        je public_5ab571
        mov eax, dword ptr ds : [esi+0x234]
        test eax, eax
        jne public_5ab571
        mov eax, dword ptr ds : [public_5e64d0]
        mov ecx, dword ptr ds : [public_5e64d4]
        mov edx, dword ptr ds : [public_5e64d8]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_5e64dc]
        push 0x28
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        je public_5ab55f
        mov edx, dword ptr ds : [esi+0x224]
        test edx, edx
        jne public_5ab542
        mov edx, dword ptr ds : [public_5c7078]
        public_5ab542 : nop
        mov ecx, dword ptr ds : [esi+0x230]
        push 0
        push ecx
        push edx
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_5e65e0 @0x5ab551*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e65e0
        mov ecx, eax
        call public_5b739e
        jmp public_5ab561
        public_5ab55f : nop
        xor eax, eax
        public_5ab561 : nop
        mov dword ptr ds : [esi+0x234], eax
        mov dword ptr ds : [esi+0x23C], 0
        public_5ab571 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov al, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x5ab4c0)
    }
}

#undef public_5ab542
#undef public_5ab55f
#undef public_5ab561
#undef public_5ab571
