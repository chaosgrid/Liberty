#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_63259c0 _public_63259c0
#define public_63259c8 _public_63259c8
#define public_63259dd _public_63259dd

PROC_DECLARE(0x6325990, internal_6325990, public_6325990);
extern "C" NAKED register_t __cdecl internal_6325990()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_63259c8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6329610 @0x63259a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6329610
        lea edi, ds:[esi-4]
        push eax
        push 8
        push esi
        call public_6391dfc
        test bl, 1
        je public_63259c0
        push edi
        call public_6391d5a
        add esp, 4
        public_63259c0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_63259c8 : nop
        mov ecx, esi
        call public_6329610
        test bl, 1
        je public_63259dd
        push esi
        call public_6391d5a
        add esp, 4
        public_63259dd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6325990)
    }
}

#undef public_63259c0
#undef public_63259c8
#undef public_63259dd
