#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b731a);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_53fca3 _public_53fca3
#define public_53fcab _public_53fcab
#define public_53fcc0 _public_53fcc0

PROC_DECLARE(0x53fc70, internal_53fc70, public_53fc70);
extern "C" NAKED register_t __cdecl internal_53fc70()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_53fcab
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_5b731a @0x53fc81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b731a
        lea edi, ds:[esi-4]
        push eax
        push 0xD0
        push esi
        call public_5b7ec6
        test bl, 1
        je public_53fca3
        push edi
        call public_5b7e1d
        add esp, 4
        public_53fca3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_53fcab : nop
        mov ecx, esi
        call public_5b731a
        test bl, 1
        je public_53fcc0
        push esi
        call public_5b7e1d
        add esp, 4
        public_53fcc0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x53fc70)
    }
}

#undef public_53fca3
#undef public_53fcab
#undef public_53fcc0
