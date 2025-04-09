#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd920);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf508);

#define public_4fd96f _public_4fd96f

PROC_DECLARE(0x4fd920, internal_4fd920, public_4fd920);
extern "C" NAKED register_t __cdecl internal_4fd920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf508 @0x4fd922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf508
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5da3f8
        mov ecx, dword ptr ds : [esi+0x98]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_4fd96f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x98]
        call public_537ad0
        mov dword ptr ds : [esi+0x98], 0
        public_4fd96f : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_4f8dd0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4fd920)
    }
}

#undef public_4fd96f
