#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7374);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_564a13 _public_564a13
#define public_564a1b _public_564a1b
#define public_564a30 _public_564a30

PROC_DECLARE(0x5649e0, internal_5649e0, public_5649e0);
extern "C" NAKED register_t __cdecl internal_5649e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_564a1b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_5b7374 @0x5649f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7374
        lea edi, ds:[esi-4]
        push eax
        push 0xDC
        push esi
        call public_5b7ec6
        test bl, 1
        je public_564a13
        push edi
        call public_5b7e1d
        add esp, 4
        public_564a13 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_564a1b : nop
        mov ecx, esi
        call public_5b7374
        test bl, 1
        je public_564a30
        push esi
        call public_5b7e1d
        add esp, 4
        public_564a30 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5649e0)
    }
}

#undef public_564a13
#undef public_564a1b
#undef public_564a30
