#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700d18);

#define public_66fa587 _public_66fa587
#define public_66fa591 _public_66fa591
#define public_66fa5a9 _public_66fa5a9
#define public_66fa5ab _public_66fa5ab

PROC_DECLARE(0x66fa530, internal_66fa530, public_66fa530);
extern "C" NAKED register_t __cdecl internal_66fa530()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700d18 @0x66fa538*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700d18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        or eax, 0xFFFFFFFF
        test esi, esi
        je public_66fa5ab
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_66fa5ab
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_67013f0 @0x66fa567*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push ecx
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax]
        test eax, eax
        push esi
        jge public_66fa587
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        jmp public_66fa591
        public_66fa587 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        public_66fa591 : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_66fa5a9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fa5a9 : nop
        mov eax, esi
        public_66fa5ab : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x66fa530)
    }
}

#undef public_66fa587
#undef public_66fa591
#undef public_66fa5a9
#undef public_66fa5ab
