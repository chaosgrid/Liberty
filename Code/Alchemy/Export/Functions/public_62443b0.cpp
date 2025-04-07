#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62443b0);
CLANG_FORWARD_PROC_SYMBOL(public_62447b0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a9f8);

#define public_62443d7 _public_62443d7
#define public_6244412 _public_6244412

PROC_DECLARE(0x62443b0, internal_62443b0, public_62443b0);
extern "C" NAKED register_t __cdecl internal_62443b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a9f8 @0x62443b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a9f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_62443d7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_62443d7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [edx+0xA0]
        lea ecx, ds:[edx+0x98]
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        push eax
        call public_62447b0
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6244412
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6244412 : nop
        mov ecx, dword ptr ss : [esp]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62443b0)
    }
}

#undef public_62443d7
#undef public_6244412
