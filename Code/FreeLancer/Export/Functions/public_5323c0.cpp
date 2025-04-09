#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_5323c0);
CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c06d8);

#define public_5323f3 _public_5323f3
#define public_532403 _public_532403
#define public_532412 _public_532412
#define public_532431 _public_532431
#define public_532441 _public_532441

PROC_DECLARE(0x5323c0, internal_5323c0, public_5323c0);
extern "C" NAKED register_t __cdecl internal_5323c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c06d8 @0x5323c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c06d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov ecx, dword ptr ds : [esi+0x18]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_5323f3
        call public_4f7a90
        mov dword ptr ds : [esi+0x18], edi
        public_5323f3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_532403
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], edi
        public_532403 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp ecx, edi
        je public_532412
        call public_537ad0
        mov dword ptr ds : [esi+0x1C], edi
        public_532412 : nop
        mov dword ptr ds : [esi+0x10], edi
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5de13c
        je public_532431
        push esi
        call dword ptr ds : [public_5c6938]
        public_532431 : nop
        mov esi, dword ptr ds : [esi+0xC]
        cmp esi, edi
        je public_532441
        push esi
        call public_536170
        add esp, 4
        public_532441 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5323c0)
    }
}

#undef public_5323f3
#undef public_532403
#undef public_532412
#undef public_532431
#undef public_532441
