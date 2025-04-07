#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700c18);

#define public_66f62ab _public_66f62ab
#define public_66f62e9 _public_66f62e9
#define public_66f62f3 _public_66f62f3
#define public_66f6309 _public_66f6309

PROC_DECLARE(0x66f6240, internal_66f6240, public_66f6240);
extern "C" NAKED register_t __cdecl internal_66f6240()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700c18 @0x66f6248*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700c18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        je public_66f62ab
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8F
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x8E
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push 1
        push 0xB
        push 1
        push esi
        call dword ptr ds : [edx+0xF8]
        public_66f62ab : nop
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_66f6309
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_66f6309
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_67013f0 @0x66f62c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        push esi
        jge public_66f62e9
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        jmp public_66f62f3
        public_66f62e9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        public_66f62f3 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_66f6309
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f6309 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x66f6240)
    }
}

#undef public_66f62ab
#undef public_66f62e9
#undef public_66f62f3
#undef public_66f6309
