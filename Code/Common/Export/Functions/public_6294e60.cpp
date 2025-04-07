#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629fbf0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6294e90 _public_6294e90
#define public_6294e98 _public_6294e98
#define public_6294ead _public_6294ead

PROC_DECLARE(0x6294e60, internal_6294e60, public_6294e60);
extern "C" NAKED register_t __cdecl internal_6294e60()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6294e98
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629fbf0 @0x6294e71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629fbf0
        lea edi, ds:[esi-4]
        push eax
        push 0x24
        push esi
        call public_6391dfc
        test bl, 1
        je public_6294e90
        push edi
        call public_6391d5a
        add esp, 4
        public_6294e90 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6294e98 : nop
        mov ecx, esi
        call public_629fbf0
        test bl, 1
        je public_6294ead
        push esi
        call public_62fd570
        add esp, 4
        public_6294ead : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6294e60)
    }
}

#undef public_6294e90
#undef public_6294e98
#undef public_6294ead
