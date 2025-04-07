#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209240);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62476b6);

#define public_6209297 _public_6209297
#define public_6209299 _public_6209299

PROC_DECLARE(0x6209240, internal_6209240, public_6209240);
extern "C" NAKED register_t __cdecl internal_6209240()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62476b6 @0x6209248*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62476b6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        push 0x2C
        call public_624612c
        add esp, 4
        or ecx, 0xFFFFFFFF
        test eax, eax
        je public_6209297
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], offset public_624bc94
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax], offset public_624bc40
        mov dword ptr ds : [eax+0x28], 1
        mov esi, eax
        jmp public_6209299
        public_6209297 : nop
        xor esi, esi
        public_6209299 : nop
        mov eax, dword ptr ds : [esi]
        push 4
        push esi
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [eax+0x38]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        push edx
        push 0
        push esi
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6209240)
    }
}

#undef public_6209297
#undef public_6209299
