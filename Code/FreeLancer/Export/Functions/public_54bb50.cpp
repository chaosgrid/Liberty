#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54bb50);

#define public_54bb85 _public_54bb85

PROC_DECLARE(0x54bb50, internal_54bb50, public_54bb50);
extern "C" NAKED register_t __cdecl internal_54bb50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov ecx, 0xC
        mov edi, offset public_679540
        mov byte ptr ds : [public_679570], 1
        rep movsd
        mov al, byte ptr ds : [public_678ba0]
        test al, al
        pop edi
        pop esi
        je public_54bb85
        push 0
/*FIXUP push offset public_5d7490 @0x54bb76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7490
        mov ecx, offset public_678b98
        call public_549e70
        public_54bb85 : nop
        ret 
        UNREACHABLE_TRAP(0x54bb50)
    }
}

#undef public_54bb85
