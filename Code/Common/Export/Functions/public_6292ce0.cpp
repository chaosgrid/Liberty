#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293d00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292d10 _public_6292d10
#define public_6292d18 _public_6292d18
#define public_6292d2d _public_6292d2d

PROC_DECLARE(0x6292ce0, internal_6292ce0, public_6292ce0);
extern "C" NAKED register_t __cdecl internal_6292ce0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292d18
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6293d00 @0x6292cf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6293d00
        lea edi, ds:[esi-4]
        push eax
        push 8
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292d10
        push edi
        call public_6391d5a
        add esp, 4
        public_6292d10 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292d18 : nop
        mov ecx, esi
        call public_6293d00
        test bl, 1
        je public_6292d2d
        push esi
        call public_6391d5a
        add esp, 4
        public_6292d2d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292ce0)
    }
}

#undef public_6292d10
#undef public_6292d18
#undef public_6292d2d
