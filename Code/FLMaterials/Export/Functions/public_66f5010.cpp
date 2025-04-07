#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700bd8);

#define public_66f5064 _public_66f5064
#define public_66f506e _public_66f506e
#define public_66f5084 _public_66f5084

PROC_DECLARE(0x66f5010, internal_66f5010, public_66f5010);
extern "C" NAKED register_t __cdecl internal_66f5010()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700bd8 @0x66f5018*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700bd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_66f5084
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_66f5084
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_67013f0 @0x66f5044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        push esi
        jge public_66f5064
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        jmp public_66f506e
        public_66f5064 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        public_66f506e : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_66f5084
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f5084 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x66f5010)
    }
}

#undef public_66f5064
#undef public_66f506e
#undef public_66f5084
