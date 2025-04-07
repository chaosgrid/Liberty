#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_627ccc0 _public_627ccc0
#define public_627ccc8 _public_627ccc8
#define public_627ccdc _public_627ccdc

PROC_DECLARE(0x627cc90, internal_627cc90, public_627cc90);
extern "C" NAKED register_t __cdecl internal_627cc90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_627ccc8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_627cae0 @0x627cca1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_627cae0
        lea edi, ds:[esi-4]
        push eax
        push 0x4C
        push esi
        call public_6391dfc
        test bl, 1
        je public_627ccc0
        push edi
        call public_6391d5a
        add esp, 4
        public_627ccc0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_627ccc8 : nop
        test bl, 1
        mov dword ptr ds : [esi], offset public_639b5bc
        je public_627ccdc
        push esi
        call public_6391d5a
        add esp, 4
        public_627ccdc : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627cc90)
    }
}

#undef public_627ccc0
#undef public_627ccc8
#undef public_627ccdc
