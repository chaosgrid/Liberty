#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700ae8);

#define public_66f2df4 _public_66f2df4
#define public_66f2dfe _public_66f2dfe
#define public_66f2e14 _public_66f2e14

PROC_DECLARE(0x66f2da0, internal_66f2da0, public_66f2da0);
extern "C" NAKED register_t __cdecl internal_66f2da0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700ae8 @0x66f2da8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700ae8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_66f2e14
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_66f2e14
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_67013f0 @0x66f2dd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        push esi
        jge public_66f2df4
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        jmp public_66f2dfe
        public_66f2df4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        public_66f2dfe : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_66f2e14
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f2e14 : nop
        mov ecx, dword ptr ss : [esp+4]
        or eax, 0xFFFFFFFF
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x66f2da0)
    }
}

#undef public_66f2df4
#undef public_66f2dfe
#undef public_66f2e14
