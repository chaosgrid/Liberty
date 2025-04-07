#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6292bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292c90 _public_6292c90
#define public_6292c98 _public_6292c98
#define public_6292cad _public_6292cad

PROC_DECLARE(0x6292c60, internal_6292c60, public_6292c60);
extern "C" NAKED register_t __cdecl internal_6292c60()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292c98
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6292bf0 @0x6292c71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6292bf0
        lea edi, ds:[esi-4]
        push eax
        push 0x10
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292c90
        push edi
        call public_6391d5a
        add esp, 4
        public_6292c90 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292c98 : nop
        mov ecx, esi
        call public_6292bf0
        test bl, 1
        je public_6292cad
        push esi
        call public_6391d5a
        add esp, 4
        public_6292cad : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292c60)
    }
}

#undef public_6292c90
#undef public_6292c98
#undef public_6292cad
