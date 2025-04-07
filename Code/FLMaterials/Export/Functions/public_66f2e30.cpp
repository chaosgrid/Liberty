#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700b08);

#define public_66f2e7d _public_66f2e7d
#define public_66f2e87 _public_66f2e87
#define public_66f2e9f _public_66f2e9f

PROC_DECLARE(0x66f2e30, internal_66f2e30, public_66f2e30);
extern "C" NAKED register_t __cdecl internal_66f2e30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700b08 @0x66f2e32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700b08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov dword ptr ss : [esp+4], 0
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
/*FIXUP push offset public_67013f0 @0x66f2e5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [ecx]
        test eax, eax
        push esi
        jge public_66f2e7d
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        jmp public_66f2e87
        public_66f2e7d : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        public_66f2e87 : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_66f2e9f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f2e9f : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x66f2e30)
    }
}

#undef public_66f2e7d
#undef public_66f2e87
#undef public_66f2e9f
