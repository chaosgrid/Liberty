#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700b78);

#define public_66f4334 _public_66f4334
#define public_66f433e _public_66f433e
#define public_66f4354 _public_66f4354

PROC_DECLARE(0x66f42e0, internal_66f42e0, public_66f42e0);
extern "C" NAKED register_t __cdecl internal_66f42e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700b78 @0x66f42e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700b78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_66f4354
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_66f4354
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_67013f0 @0x66f4314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        push esi
        jge public_66f4334
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        jmp public_66f433e
        public_66f4334 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        public_66f433e : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_66f4354
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f4354 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x66f42e0)
    }
}

#undef public_66f4334
#undef public_66f433e
#undef public_66f4354
