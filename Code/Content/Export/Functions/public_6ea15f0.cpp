#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9036);

#define public_6ea1620 _public_6ea1620
#define public_6ea1628 _public_6ea1628
#define public_6ea163c _public_6ea163c

PROC_DECLARE(0x6ea15f0, internal_6ea15f0, public_6ea15f0);
extern "C" NAKED register_t __cdecl internal_6ea15f0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6ea1628
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6ea1650 @0x6ea1601*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ea1650
        lea edi, ds:[esi-4]
        push eax
        push 4
        push esi
        call public_6fa9036
        test bl, 1
        je public_6ea1620
        push edi
        call public_6fa8fe0
        add esp, 4
        public_6ea1620 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6ea1628 : nop
        test bl, 1
        mov dword ptr ds : [esi], offset public_6fb385c
        je public_6ea163c
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ea163c : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ea15f0)
    }
}

#undef public_6ea1620
#undef public_6ea1628
#undef public_6ea163c
