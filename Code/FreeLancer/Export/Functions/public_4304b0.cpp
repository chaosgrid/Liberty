#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4304b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8e71);

#define public_4304eb _public_4304eb

PROC_DECLARE(0x4304b0, internal_4304b0, public_4304b0);
extern "C" NAKED register_t __cdecl internal_4304b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8e71 @0x4304b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8e71
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_4304eb
        mov ecx, esi
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        public_4304eb : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4304b0)
    }
}

#undef public_4304eb
