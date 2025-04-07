#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62134f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248023);

#define public_6213510 _public_6213510
#define public_6213512 _public_6213512
#define public_6213532 _public_6213532
#define public_621355f _public_621355f
#define public_6213573 _public_6213573
#define public_6213598 _public_6213598

PROC_DECLARE(0x62134f0, internal_62134f0, public_62134f0);
extern "C" NAKED register_t __cdecl internal_62134f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248023 @0x62134f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248023
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        test ecx, ecx
        push esi
        je public_6213510
        lea esi, ds:[ecx+4]
        jmp public_6213512
        public_6213510 : nop
        xor esi, esi
        public_6213512 : nop
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_6213532
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], 0
        public_6213532 : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_621355f
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_621355f
        push eax
        call public_62460e0
        add esp, 4
        public_621355f : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6213573
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6213573 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_6213598
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        je public_6213598
        push esi
        call public_62460e0
        add esp, 4
        public_6213598 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62134f0)
    }
}

#undef public_6213510
#undef public_6213512
#undef public_6213532
#undef public_621355f
#undef public_6213573
#undef public_6213598
