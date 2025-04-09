#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411e90);
CLANG_FORWARD_PROC_SYMBOL(public_419760);

#define public_411ead _public_411ead
#define public_411ee1 _public_411ee1

PROC_DECLARE(0x411e90, internal_411e90, public_411e90);
extern "C" NAKED register_t __cdecl internal_411e90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC0]
        test ecx, ecx
        push edi
        je public_411ead
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        mov dword ptr ds : [esi+0xC0], 0
        public_411ead : nop
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_419760
        add esp, 4
        test eax, eax
        je public_411ee1
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xC0], eax
        mov al, byte ptr ds : [esi+0xB4]
        or al, 2
        pop edi
        mov dword ptr ds : [esi+0xC4], ecx
        mov byte ptr ds : [esi+0xB4], al
        pop esi
        ret 8
        public_411ee1 : nop
        push 0
/*FIXUP push offset public_5c8a7c @0x411ee3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a7c
        push edi
        push 0
        call dword ptr ds : [public_5c72d4]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x411e90)
    }
}

#undef public_411ead
#undef public_411ee1
