#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6311270);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6311340 _public_6311340
#define public_6311348 _public_6311348
#define public_631135d _public_631135d

PROC_DECLARE(0x6311310, internal_6311310, public_6311310);
extern "C" NAKED register_t __cdecl internal_6311310()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6311348
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6311270 @0x6311321*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6311270
        lea edi, ds:[esi-4]
        push eax
        push 0x3C
        push esi
        call public_6391dfc
        test bl, 1
        je public_6311340
        push edi
        call public_6391d5a
        add esp, 4
        public_6311340 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6311348 : nop
        mov ecx, esi
        call public_6311270
        test bl, 1
        je public_631135d
        push esi
        call public_6391d5a
        add esp, 4
        public_631135d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6311310)
    }
}

#undef public_6311340
#undef public_6311348
#undef public_631135d
