#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b735c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_41c150 _public_41c150
#define public_41c158 _public_41c158
#define public_41c16d _public_41c16d

PROC_DECLARE(0x41c120, internal_41c120, public_41c120);
extern "C" NAKED register_t __cdecl internal_41c120()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_41c158
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_5b735c @0x41c131*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b735c
        lea edi, ds:[esi-4]
        push eax
        push 0x2C
        push esi
        call public_5b7ec6
        test bl, 1
        je public_41c150
        push edi
        call public_5b7e1d
        add esp, 4
        public_41c150 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_41c158 : nop
        mov ecx, esi
        call public_5b735c
        test bl, 1
        je public_41c16d
        push esi
        call public_5b7e1d
        add esp, 4
        public_41c16d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x41c120)
    }
}

#undef public_41c150
#undef public_41c158
#undef public_41c16d
