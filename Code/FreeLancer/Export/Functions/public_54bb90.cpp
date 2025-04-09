#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54bb90);

#define public_54bbc5 _public_54bbc5

PROC_DECLARE(0x54bb90, internal_54bb90, public_54bb90);
extern "C" NAKED register_t __cdecl internal_54bb90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov ecx, 0xC
        mov edi, offset public_679638
        mov byte ptr ds : [public_679668], 1
        rep movsd
        mov al, byte ptr ds : [public_678ba0]
        test al, al
        pop edi
        pop esi
        je public_54bbc5
        push 0
/*FIXUP push offset public_5e0778 @0x54bbb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0778
        mov ecx, offset public_678b98
        call public_549e70
        public_54bbc5 : nop
        ret 
        UNREACHABLE_TRAP(0x54bb90)
    }
}

#undef public_54bbc5
